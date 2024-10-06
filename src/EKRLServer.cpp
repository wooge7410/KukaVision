#include "EKRLServer.h"

template <typename T> int bufferToVar(char* buffer, int bufferSize, T &var) {
    if(bufferSize == sizeof(var)) { // Check relation of buffersize and required variable size
        memcpy(&var, buffer, sizeof(var)); // Memcopy the data into an according variable
        return 0;
    } else return -1;
}

template <typename T> int varToBuffer(char* buffer, int bufferSize, T &var) {
    if (bufferSize >= sizeof(var)) { // Check whether buffer is big enough
        memcpy(buffer, &var, sizeof(var)); // Memcopy data of the variable into buffer
        return 0;
    } else return -1;
}

int connectSocket(const char* ipAddress, int port, int &clientSocket) {
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET; // Use IPv4
    inet_pton(AF_INET, ipAddress, &serverAddress.sin_addr); // Convert IP-String to sockaddr_in
    serverAddress.sin_port = htons(port); // Port in correct byte-order

    return connect(clientSocket,(struct sockaddr*)&serverAddress, sizeof(serverAddress));
}

int sendBuffer(char * buffer, int bufferSize, int &clientSocket) {
    return send(clientSocket, buffer, bufferSize, 0);
}

int receiveBuffer(char * buffer, int bufferSize, int &clientSocket) {
    return read(clientSocket, buffer, bufferSize-1);
}

bool checkVerificationBuffer(char * buffer, int bufferSize) {
    bool verified = true;

    if (buffer[0] == 0x01) {
        for (int i = 1; i < bufferSize; i++) {
            if (buffer[i]!= 0x00) verified = false;
        }
        return verified;
    } else return false;
}

int frameToBuffer(FRAME &position, char* buffer, int bufferSize) {
    if (bufferSize >= 6 * sizeof(float)) { // Frame consists of 6 floats, so buffer must have according size
        memcpy(buffer, &position, sizeof(float)*6); // Memcopy frame-data into buffer
        return 0;
    } else return -1;
}

int bufferToFrame(FRAME &position, char* buffer, int bufferSize) {
    if (bufferSize >= 6 * sizeof(float)) { // Frame consists of 6 floats, so buffer must have according size
        memcpy(&position, buffer, sizeof(float)*6);// Memcopy buffer-data into frame
        return 0;
    } else return -1;
}


void runERKLSequence(string ipAddress, int port, QLabel* statusLabel, float x, float y, float zTravel, float zGripping, float a) {
    int clientSocket;
    char buffer[BUFFERSIZE] = {0}; // Initialize buffer
    FRAME positionBuffer; // Used to temporarily store position-data
    bool connected = false;

    cout << "Connecting to " << ipAddress << ":" << port << endl;
    statusLabel ->setText("Connecting");
    for(int i = 0; i < CONNATTEMPTS; i++) { // Repeatedly try to connect to Robot
        if (connectSocket(ipAddress.c_str(), port, clientSocket) >= 0) {
            connected = true;
            break;
        } else {
            cout << "Connection failed! (Attempt: " << i+1  << " of " << CONNATTEMPTS << ")" << endl;
            cout << "Trying again...\n";
            connected = false;
            sleep(CONNDELAY);
        }
    }
    if (!connected) { // If the connection could not be established
        statusLabel ->setText("ERROR"); // Display Error in UI
        cout << "Connection failed! Exiting...";
    } else {
        cout << "Connection successfull!" << endl;

        cout << "\n\n--------------------------------------------------------------------\n";
        cout << "Confirming Connection\n";

        while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1)); // Wait until Data was received from Robot
        if(!checkVerificationBuffer(buffer, BUFFERSIZE)) { // Verification buffers are send by the robot at specific points, to make sure both programs are in sync so corrupted position data can be avoided
            cout << "ERROR: Received Unexpected Data!\nExiting...";
            cout << sizeof(buffer);
            statusLabel ->setText("ERROR");
        }
        cout << "Connection Verified!\n";
        statusLabel ->setText("Connected");

        // Prepare to Send Coordinates with Travel Height
        positionBuffer.X = x;
        positionBuffer.Y = y;
        positionBuffer.Z = zTravel;
        positionBuffer.A = a;
        positionBuffer.B = 90;
        positionBuffer.C = 0;

        cout << "\nPosition (Travel Height):\nX:" << positionBuffer.X << " | Y:" << positionBuffer.Y << " | Z:" << positionBuffer.Z << " | A:" << positionBuffer.A << " | B:" << positionBuffer.B << " | C:" << positionBuffer.C << endl;

        // Send Coordinates with Travel Height
        frameToBuffer(positionBuffer, buffer, BUFFERSIZE);
        if(sendBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1)) {
            cout << "Error while sending Data!\nExiting...";
            statusLabel ->setText("ERROR");
        }
        cout << "Coordinates send!\n";

        // Wait for Confirmation
        while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1));
        if(!checkVerificationBuffer(buffer, BUFFERSIZE)) {
            cout << "ERROR: Received Unexpected Data!\nExiting...";
            statusLabel ->setText("ERROR");
        }
        cout << "Confirmed\n";


        // Send Position with Gripping Height
        positionBuffer.X = x;
        positionBuffer.Y = y;
        positionBuffer.Z = zGripping;
        positionBuffer.A = a;
        positionBuffer.B = 90;
        positionBuffer.C = 0;

        cout << "\nPosition (Travel Height):\nX:" << positionBuffer.X << " | Y:" << positionBuffer.Y << " | Z:" << positionBuffer.Z << " | A:" << positionBuffer.A << " | B:" << positionBuffer.B << " | C:" << positionBuffer.C << endl;

        // Send Coordinates with Gripping Height
        frameToBuffer(positionBuffer, buffer, BUFFERSIZE);
        if(sendBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1)) {
            cout << "Error while sending Data!\nExiting...";
            statusLabel ->setText("ERROR");
        }
        cout << "Coordinates send!\n";
        statusLabel ->setText("Pickup");

        // Wait for Confirmation
        while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1));
        if(!checkVerificationBuffer(buffer, BUFFERSIZE)) {
            cout << "ERROR: Received Unexpected Data!\nExiting...";
            statusLabel ->setText("ERROR");
        }

        cout << "Pickup confirmed\n";
        statusLabel -> setText("Dropoff");

        // Wait for confirmation
        while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1));
        if(!checkVerificationBuffer(buffer, BUFFERSIZE)) {
            cout << "ERROR: Received Unexpected Data!\nExiting...";
            statusLabel ->setText("ERROR");
        }

        cout << "Dropoff confirmed\n";
        statusLabel -> setText("Homing");


        // Wait for Confirmation of Home Position
        while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1));
        if(!checkVerificationBuffer(buffer, BUFFERSIZE)) {
            cout << "ERROR: Received Unexpected Data!\nExiting...";
            statusLabel ->setText("ERROR");
        }

        cout << "Finished\n";
        statusLabel -> setText("Finished");
        statusLabel->setStyleSheet(QString::fromUtf8("\n" "background-color: rgb(255,0,0);"));

        // Close Connection
        close(clientSocket);
    }
}

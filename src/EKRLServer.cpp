#include "EKRLServer.h"

template <typename T> int bufferToVar(char* buffer, int bufferSize, T &var) {
    if(bufferSize == sizeof(var)) {
        memcpy(&var, buffer, sizeof(var));
        return 0;
    } else return -1;
}

template <typename T> int varToBuffer(char* buffer, int bufferSize, T &var) {
    if (bufferSize >= sizeof(var)) {
        memcpy(buffer, &var, sizeof(var));
        return 0;
    } else return -1;
}

int connectSocket(const char* ipAddress, int port, int &clientSocket) {
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET; // IPv4
    inet_pton(AF_INET, ipAddress, &serverAddress.sin_addr);
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
    if (bufferSize >= 6 * sizeof(float)) {
        memcpy(buffer, &position, sizeof(float)*6);
        return 0;
    } else return -1;
}

int bufferToFrame(FRAME &position, char* buffer, int bufferSize) {
    if (bufferSize >= 6 * sizeof(float)) {
        memcpy(&position, buffer, sizeof(float)*6);
        return 0;
    } else return -1;
}


void runERKLSequence(string ipAddress, int port, QLabel* statusLabel, float x, float y, float zTravel, float zGripping, float a) {
    int clientSocket;
    char buffer[BUFFERSIZE] = {0};
    FRAME positionBuffer;
    bool connected = false;

    cout << "Connecting to " << ipAddress << ":" << port << endl;
    statusLabel ->setText("Connecting");
    for(int i = 0; i < CONNATTEMPTS; i++) {
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
    if (!connected) {
        statusLabel ->setText("ERROR");
        cout << "Connection failed! Exiting...";
    }
    cout << "Connection successfull!" << endl;

    cout << "\n\n--------------------------------------------------------------------\n";
    cout << "Confirming Connection\n";

    while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1));
    if(!checkVerificationBuffer(buffer, BUFFERSIZE)) {
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

    // Send Coordinates with Travel Height
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

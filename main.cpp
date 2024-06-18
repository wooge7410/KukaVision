#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <unistd.h>
#include <arpa/inet.h>
#include <bitset>
#include <cstring>
#include <bits/stdc++.h>

#define BUFFERSIZE 64
#define IP "192.168.41.64"
#define PORT 54600
#define CONNATTEMPTS 5
#define CONNDELAY 5

using namespace std;

struct FRAME {
    float X;
    float Y;
    float Z;
    float A;
    float B;
    float C;
};

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

int connectSocket(char* ipAddress, int port, int &clientSocket) {
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


int main() {
    int clientSocket;
    char buffer[BUFFERSIZE] = {0};
    FRAME positionBuffer;
    bool connected = false;
    string userInput;
    string position;
    float positions[6];
    bool check = false;


    cout << "Connecting to " << IP << ":" << PORT << endl;
    for(int i = 0; i < CONNATTEMPTS; i++) {
        if (connectSocket(IP, PORT, clientSocket) >= 0) {
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
        cout << "Connection failed! Exiting...";
        return 0;
    }
    cout << "Connection successfull!" << endl;

    cout << "\n\n--------------------------------------------------------------------\n";
    cout << "Moving to home position...\n";

    while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1));

    if(!checkVerificationBuffer(buffer, BUFFERSIZE)) {
        cout << "ERROR: Received Unexpected Data!\nExiting...";
        return 0;
    }

    while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1));
        if(bufferToFrame(positionBuffer, buffer, BUFFERSIZE) < 0) {
            cout << "ERROR: Received Unexpected Data!\nExiting...";
            return 0;
        }

        cout << "\nCurrent Position:\nX:" << positionBuffer.X << " | Y:" << positionBuffer.Y << " | Z:" << positionBuffer.Z << " | A:" << positionBuffer.A << " | B:" << positionBuffer.B << " | C:" << positionBuffer.C << endl;

 while(true) {
        check = false;
        while(!check) {
            cout << "\nEnter a new position: \"X,Y,Z,A,B,C\"\n";
            cout << "> ";
            getline(cin, userInput);
            stringstream posStream(userInput);

            check = true;
            int i;
            for(i = 0; getline(posStream, position, ','); i ++) {
                positions[i] = atof(position.c_str());
                if (positions[i] <= 0) {
                    cout << "\nInvalid Input!\n";
                    check = false;
                    break;
                }
            }
            if(i != 6) {
                cout << "\nInvalid Input!\n";
                check = false;
            }
        }
        positionBuffer.X = positions[0];
        positionBuffer.Y = positions[1];
        positionBuffer.Z = positions[2];
        positionBuffer.A = positions[3];
        positionBuffer.B = positions[4];
        positionBuffer.C = positions[5];

        cout << "\nNew Position:\nX:" << positionBuffer.X << " | Y:" << positionBuffer.Y << " | Z:" << positionBuffer.Z << " | A:" << positionBuffer.A << " | B:" << positionBuffer.B << " | C:" << positionBuffer.C << endl;


        frameToBuffer(positionBuffer, buffer, BUFFERSIZE);
        if(sendBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1)) {
            cout << "Error while sending Data!\nExiting...";
            return 0;
        }

        while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1));

        if(!checkVerificationBuffer(buffer, BUFFERSIZE)) {
            cout << "ERROR: Received Unexpected Data!\nExiting...";
            return 0;
        }
        cout << "\nMoving to new position...\n";


        while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1));
        if(!checkVerificationBuffer(buffer, BUFFERSIZE)) {
            cout << "ERROR: Received Unexpected Data!\nExiting...";
            return 0;
        }

        while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < (BUFFERSIZE-1));
        if(bufferToFrame(positionBuffer, buffer, BUFFERSIZE) < 0) {
            cout << "ERROR: Received Unexpected Data!\nExiting...";
            return 0;
        }
        cout << "\nPosition Reached!\n\n";
        cout << "\nCurrent Position:\nX:" << positionBuffer.X << " | Y:" << positionBuffer.Y << " | Z:" << positionBuffer.Z << " | A:" << positionBuffer.A << " | B:" << positionBuffer.B << " | C:" << positionBuffer.C << endl;
    }






    return 0;
}

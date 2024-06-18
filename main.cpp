#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <unistd.h>
#include <arpa/inet.h>
#include <bitset>
#include <cstring>

#define BUFFERSIZE 64
#define IP "192.168.41.64"
#define PORT 54600
#define CONNATTEMPTS 5
#define CONNDELAY 5

using namespace std;

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
    if (buffer[0] == 0x80) {
        for (int i = 1; i < bufferSize; i++) {
            if (buffer[i]!= 0x00) verified = false;
        }
        return verified;
    } else return false;
}


int main() {
    int clientSocket;
    char buffer[BUFFERSIZE] = {0};
    bool connected = false;
    string userInput;

    cout << "Connecting to " << IP << ":" << PORT << endl;
    for(int i = 0; i < CONNATTEMPTS; i++) {
        if (connectSocket(IP, PORT, clientSocket) > 0) {
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

    cout << "\n\n---------------------------------------------------------------------------------------------\n";
    cout << "Moving to home position...";
    while(receiveBuffer(buffer, BUFFERSIZE, clientSocket) < 0);




    return 0;
}

#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <unistd.h>
#include <arpa/inet.h>
#include <bitset>
#include <cstring>

#define BUFFERSIZE 64

using namespace std;

int main() {

    /**
    * AF_INET := iBuffer - '0'domain (IPv4)
    * SOCK_STREAM := type (sequenced, reliable, bidirectional, bytestreams)
    * 0 := protocol (unspecified)
    **/
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);

    /*
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET; // IPv4
    serverAddress.sin_port = htons(54600); // Port in correct byte-order

    serverAddress.sin_addr.s_addr = INADDR_ANY; //listenes to any input
    */

    // to specify an ipaddress

    const char* svrIP = "192.168.41.64";
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET; // IPv4
    inet_pton(AF_INET, svrIP, &serverAddress.sin_addr);
    serverAddress.sin_port = htons(54600); // Port in correct byte-order


    while (connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) < 0) cout << "connecting... \n";

    char buffer[BUFFERSIZE] = { 0 };

    int n = read(clientSocket, buffer, BUFFERSIZE-1);

    if (n < 0 ) {
        cout << "Error!";
    } else {
        cout << buffer << endl;
        for (int i = 0; i < BUFFERSIZE; i++) {
             bitset<8> x(buffer[i]);
             cout << x << endl;
        }

        char strPart[2];
        int intPart;
        float floatPart;

        for(int i = 0; i < 2; i++) {
            strPart[i] = buffer[i];
        }

        char iBuffer[4];
        for(int i = 0; i < 4; i++) {
            iBuffer[i] = buffer[i+2];
        }

        memcpy(&intPart, &iBuffer, sizeof(intPart));

        char fBuffer[4];
        for (int i = 0; i < 4; i++) {
            fBuffer[i] = buffer[i + 6];
         }
        //floatPart = *(float*)fBuffer;
        //doublePart = *(double*)dBuffer;
        memcpy(&floatPart, &fBuffer, sizeof(floatPart));
        cout << "String Part: " << strPart << endl << "Int Part: " << intPart << endl << "Float Part: " << floatPart;

    }



    return 0;
}

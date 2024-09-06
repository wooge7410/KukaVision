#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <unistd.h>
#include <arpa/inet.h>
#include <bitset>
#include <cstring>
#include <bits/stdc++.h>
#include <QtWidgets/QLabel>


#define BUFFERSIZE 64
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

template <typename T> int bufferToVar(char* buffer, int bufferSize, T &var);

template <typename T> int varToBuffer(char* buffer, int bufferSize, T &var);

int connectSocket(const char* ipAddress, int port, int &clientSocket);

int sendBuffer(char * buffer, int bufferSize, int &clientSocket);

int receiveBuffer(char * buffer, int bufferSize, int &clientSocket);

bool checkVerificationBuffer(char * buffer, int bufferSize);

int frameToBuffer(FRAME &position, char* buffer, int bufferSize);

int bufferToFrame(FRAME &position, char* buffer, int bufferSize);

void runERKLSequence(string ipAddress, int port, QLabel* statusLabel, float x, float y, float zTravel, float zGripping, float a);

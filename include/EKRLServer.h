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

int connectSocket(char* ipAddress, int port, int &clientSocket);

int sendBuffer(char * buffer, int bufferSize, int &clientSocket);

int receiveBuffer(char * buffer, int bufferSize, int &clientSocket);

bool checkVerificationBuffer(char * buffer, int bufferSize);

int frameToBuffer(FRAME &position, char* buffer, int bufferSize);

int bufferToFrame(FRAME &position, char* buffer, int bufferSize);

void runERKLSequence(float x, float y, float z, float a);

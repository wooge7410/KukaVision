#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <unistd.h>
#include <arpa/inet.h>
#include <bitset>
#include <cstring>
#include <bits/stdc++.h>
#include <QtWidgets/QLabel>


#define BUFFERSIZE 64 /**< Size of the buffer */
#define CONNATTEMPTS 5 /**< Amount of connection attempts before aborting the connection */
#define CONNDELAY 5 /**< delay in seconds between connection attempts */

using namespace std;

struct FRAME {
    float X;
    float Y;
    float Z;
    float A;
    float B;
    float C;
};


/** \brief convert the buffer-data to a c++ variable
 *
 * \param buffer char* Buffer-Data
 * \param bufferSize int
 * \param var T& Variable that the data should be stored in
 * \return int success of the conversion. 0 = success, -1 = error
 *
 */
template <typename T> int bufferToVar(char* buffer, int bufferSize, T &var);


/** \brief convert a variable to a char-buffer
 *
 * \param buffer char*
 * \param bufferSize int
 * \param var T& variable that should be converted
 * \return int success of the conversion. 0 = success, -1 = error
 *
 */
template <typename T> int varToBuffer(char* buffer, int bufferSize, T &var);


/** \brief connect to socket based on ip and port
 *
 * \param ipAddress const char* ipAddress as char-array
 * \param port int
 * \param clientSocket int& socket-variable
 * \return int connection success. 0 = success, -1 = error
 *
 */
int connectSocket(const char* ipAddress, int port, int &clientSocket);


/** \brief Send buffer to client socket
 *
 * \param buffer char*
 * \param bufferSize int
 * \param clientSocket int& Reference to client Socket
 * \return int Number of bytes send; -1 = Error
 *
 */
int sendBuffer(char * buffer, int bufferSize, int &clientSocket);


/** \brief Receive a buffer send by the client
 *
 * \param buffer char*
 * \param bufferSize int
 * \param clientSocket int&
 * \return int Number of bytes received; -1 = Error
 *
 */
int receiveBuffer(char * buffer, int bufferSize, int &clientSocket);


/** \brief Checks whether buffer is a single True bit. Is used to verify completion of Robot-Program-Sections
 *
 * \param buffer char*
 * \param bufferSize int
 * \return bool true if buffer checks out.
 *
 */
bool checkVerificationBuffer(char * buffer, int bufferSize);


/** \brief Converts Frame struct into char-buffer. Used for KUKA-Positions
 *
 * \param position FRAME&
 * \param buffer char*
 * \param bufferSize int
 * \return int Conversion success; 0 = success; -1 = error
 *
 */
int frameToBuffer(FRAME &position, char* buffer, int bufferSize);


/** \brief Convert a char-buffer into a Frame struct. Used for KUKA-Positions
 *
 * \param position FRAME&
 * \param buffer char*
 * \param bufferSize int
 * \return int Conversion success; 0 = success; -1 = error
 *
 */
int bufferToFrame(FRAME &position, char* buffer, int bufferSize);


/** \brief Runs Robot-Program-Sequence
 * Connect to Robot, sends relevant Points and updates Progress-Information on UI
 *
 * \param ipAddress string Robot-IP
 * \param port int Robot-Port
 * \param statusLabel QLabel* QLabel used to display to progress of the program-execution
 * \param x float X-Coordinate of the detected cube-center
 * \param y float Y-Coordinate of the detected cube-center
 * \param zTravel float Safe travel height for the robot
 * \param zGripping float Gripping height
 * \param a float Angle of the detected cube
 * \return void
 *
 */
void runERKLSequence(string ipAddress, int port, QLabel* statusLabel, float x, float y, float zTravel, float zGripping, float a);

#include "neoapi/neoapi.hpp"
#include <neoapi/neoapi_camera_info.hpp>

#include <opencv2/opencv.hpp>

#include <iostream>
#include <string.h>
#include <vector>

using namespace NeoAPI;
using namespace cv;
using namespace std;

#define WINDOW_COLUMNS 80


/** \brief
 *
 * \param input string          String, that should be centered
 * \param columns int           Width of the output
 * \param paddingSymbol char    char that should be used for padding
 * \return string               returns padded string
 *
 */
string getPaddingforCenter(string input, int columns, char paddingSymbol) {
    int paddingLength = columns - input.size();
    string result = "";

    for (int i = 0; i < paddingLength/2; i++) {
        result += paddingSymbol;
    }
    result.append(input);
    for (int i = 0; i < round(paddingLength/2.0); i++) {
        result += paddingSymbol;
    }


    return result;
}


void outputHelpString() {
    cout << getPaddingforCenter("NeoCLI", WINDOW_COLUMNS, '-') << endl;
    cout << getPaddingforCenter("NeoAPI Command  Line Interface", WINDOW_COLUMNS, '_') << endl;
    // TODO (RenkoSt): List-Command
}



int main() {
    string input;
    string command;
    vector<string> commandList;
    CamInfoList& connectedCameras = CamInfoList::Get();
    Cam camera = Cam();
    bool isIndex = false;

    while (true) {
        commandList.clear();

        cout << " > ";

        getline(cin, input);

        stringstream inputStream(input);

        while (getline(inputStream, command, ' ')) {
            commandList.push_back(command);
        }


        for (int i = 0; i < (int)commandList.size(); i ++) {
            transform(commandList[i].begin(), commandList[i].end(), commandList[i].begin(), [](unsigned char c){ return tolower(c); });
        }


        if (commandList.size() > 0)
        {
            if (commandList[0] == "list") {
                if (commandList.size() == 1) {

                    connectedCameras.Refresh();

                    cout << getPaddingforCenter("", WINDOW_COLUMNS, '-') << endl;

                    cout << getPaddingforCenter("Connected Devices: " + to_string(connectedCameras.size()), WINDOW_COLUMNS, '_') << endl << endl;
                    cout << "|Number|" << getPaddingforCenter("Serial Number", 20, ' ') << '|' << getPaddingforCenter("IP Address", 20, ' ') << '|' << getPaddingforCenter("Subnetmask", 20, ' ') << '|' << endl;


                    for (int i = 0; i < (int)connectedCameras.size(); i++) {
                        cout << getPaddingforCenter("", WINDOW_COLUMNS, '-');
                        cout << '|' << getPaddingforCenter(to_string(i), 6, ' ') << '|' << getPaddingforCenter((string)connectedCameras[i].GetSerialNumber(), 20, ' ') << '|' << getPaddingforCenter((string)connectedCameras[i].GetGevIpAddress(), 20, ' ') << '|' << getPaddingforCenter((string)connectedCameras[i].GetGevMACAddress(), 20, ' ') << '|' << endl;
                    }
                } else {
                    cout << "Invalid number of arguments.";
                    // TODO (RenkoST): Command Usage
                }
            } else if (commandList[0] == "connect") {
                if (commandList.size() == 2) {
                    try{
                        isIndex = true;
                        for (int i = 0; i < commandList[1].size(); i++) {
                            if (!isdigit(commandList[1][i])) isIndex = false;
                        }
                        if (isIndex) {
                            int index = atoi(commandList[1].c_str());
                            if ((int)connectedCameras.size() - 1 >= index) {
                                cout << "Connecting to  Camera Number \"" << commandList[1] << "\" (" << connectedCameras[index].GetSerialNumber() << " / " << connectedCameras[index].GetGevIpAddress() << ")"  << endl;
                                camera.Connect(connectedCameras[index].GetGevIpAddress());
                            } else if (connectedCameras.size() == 0) {
                                cout << "Searching Cameras...\n";
                                connectedCameras.Refresh();
                                if ((int)connectedCameras.size() - 1 >= index) {
                                    cout << "Connecting to  Camera Number \"" << commandList[1] << "\" (" << connectedCameras[index].GetSerialNumber() << " / " << connectedCameras[index].GetGevIpAddress() << ")"  << endl;
                                    camera.Connect(connectedCameras[index].GetGevIpAddress());
                                } else if(connectedCameras.size() == 0){
                                    cout << "No Cameras found!\n";
                                } else {
                                    // TODO (RenkoSt): Index out of bounds
                                }
                            } else {
                                // TODO (RenkoSt): Index out of bounds
                            }
                        } else {
                            cout << "Connecting to \"" << commandList[1] << '"' << endl;
                            camera.Connect(NeoString(commandList[1].c_str()));
                        }
                        if (camera.IsConnected()) cout << "Connection SUCCESSFULL!" << endl;
                        else  cout << "Connection UNSUCCESFULL!" << endl;


                    } catch(NoAccessException e) {
                        cout << e.GetDescription();
                    } catch(NotConnectedException e) {
                        cout << e.GetDescription();
                    } catch(exception e) {
                        cout << "Unknown Error";
                    }
                } else {
                    cout << "Invalid number of arguments.";
                    // TODO (RenkoSt): Command Usage
                }
            } else if (commandList[0] == "disconnect") {
                if (commandList.size() == 1) {
                    if (camera.IsConnected()) {
                        cout << "Disconnecting from Camera..." << endl;
                        camera.Disconnect();
                        if (camera.IsConnected()) cout << "Disconnection UNSUCCESSFULL!" << endl;
                        else  cout << "Disconnection SUCCESFULL!" << endl;
                    }
                } //TODO (RenkoSt): Wrong Argument Length
            } else if (commandList[0] == "get") {
                if (commandList.size() == 2) {
                    if (commandList[1] == "featurelist") {
                        if (camera.IsConnected()) {
                            cout << "Camera Features: " << endl;
                            for (Feature feature : camera.GetFeatureList()) {
                                cout << feature.GetName() << endl;
                                cout << feature.GetDescription() << endl << endl;
                            }
                        } // TODO (Renko St): Not connected Exception
                    }
                }// TODO (RenkoSt): Wrong Argument Length

            } else if (commandList[0] == "exit") {
                if (camera.IsConnected()) {
                    cout << "Disconnecting from Camera...";
                    camera.Disconnect();
                }
                return 1;
            } else {
                outputHelpString();
            }

        }
        cout << endl;
    }




   return 1;
}

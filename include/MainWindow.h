#include "MainWindowUI.h"

#include <string>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdexcept>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>
#include <nlohmann/json.hpp>
#include "CameraStream.h"

using json = nlohmann::json;
using namespace std;

class MainWindow : public Ui::MainWindow
{
public:
    MainWindow(QMainWindow *parent);
    json options_JSON;
    CameraStream* cameraStream;

    void SaveOptionsInJSON(json& currentOptions);
    void GetAllOptions_JSON(json &options);

    void startCameraView();

    void stopCameraView();

private:
    QMainWindow *windowParent;

    json optionLimits;

    int lastTabIndex;

    bool runCameraStream = false;

    std::future<void> f;

    bool cameraConnected = false;


    json GetRobotOptions_JSON();

    json GetCameraOptions_JSON();

    void validateOptions(json& options);


    bool validateIPString(string ipAddress);


    //Initialize the Option page with values from the code
    void InitOptionspage(json &options);

    //Opens the Folder Dialog to select a Savepath for an Image
    void OpenFolderDialogImageData();

    //Opens the FindCameraDialog to select an IP from a list of Cameras from the Network
    void OpenFindCameraDialog();

    //Saves the most recent Image in the path given in the options
    void SaveImageFromLiveView();

    //Calculates the Coordinates of the latest Image via OpenCV and displays them on the screen
    void GetCoordinates();

    //Starting a cycle of the robot griping an object
    void StartProgram();

    //Opens the Project-Info
    void OpenProjectInfo();

    void tabChange();


    void ReadOptionsFromJSON(json& currentOptions);

    void ReadLimitsFromJSON(json& optionLimits);


    void ShowParameterErrorMessage(string text);


    void consoleLog(string msg);

    string generateTimestampString();

    //Spliting Inputdata-String
    std::vector<std::string> splitString(std::string readIN, const std::string& delimiter);

};

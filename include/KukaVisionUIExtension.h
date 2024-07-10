//KukaVisionUIExtension

//Additional Functions for the UI
//Connecting UI and Main Program

//All Options from the Options page
#include "KukaVisionUIV1.h"
#include <QtCore/QString>
//All RobotOptions
struct RobotOptions
{
    QString RobotIP;
    int Port;
    int Zoffset;
    int Zoffsetfinal;
    int WorkAreaXmin;
    int WorkAreaXmax;
    int WorkAreaYmin;
    int WorkAreaYmax;
    int WorkAreaZmin;
    int WorkAreaZmax;
};

//All CameraOptions
struct CameraOptions
{
    QString CameraIP;
    float Exposure;
    int FPSforLiveView;
    int Bining;
    int Gain;
    bool FlipImage;
};

struct Options
{
    RobotOptions robOptions;
    CameraOptions camOptions;
};

// Geting all Options out of the UI
Options GetAllOptions(Ui::MainWindow& Ui_MainWindow);

// Geting RobotOptions out of the UI
RobotOptions GetRobotOptions(Ui::MainWindow& Ui_MainWindow);

// Geting CameraOptions out of the UI
CameraOptions GetCameraOptions(Ui::MainWindow& Ui_MainWindow);

//Initialize the Option page with values from the code
void InitOptionspage(Ui::MainWindow& Ui_MainWindow);

//Opens the Folder Dialog to select a Savepath for an Image
void OpenFolderDialogImageData(Ui::MainWindow& Ui_MainWindow);

//Opens the FindCameraDialog to select an IP from a list of Cameras from the Network
void OpenFindCameraDialog(Ui::MainWindow& Ui_MainWindow);

//Saves the most recent Image in the path given in the options
void SaveImageFromLiveView(Ui::MainWindow& Ui_MainWindow);

//Calculates the Coordinates of the latest Image via OpenCV and displays them on the screen
void GetCoordinates(Ui::MainWindow& Ui_MainWindow);

//Starting a cycle of the robot griping an object
void StartProgram(Ui::MainWindow& Ui_MainWindow);

//Opens the Project-Info

void OpenProjectInfo(Ui::MainWindow& Ui_MainWindow);



int CheckWorkArea(QString Input);


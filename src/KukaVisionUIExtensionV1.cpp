
#include "KukaVisionUIExtension.h"
#include "KukaVisionUIV1.h"
#include <string>
// Geting all Options out of the UI
Options GetAllOptions(QMainWindow &Ui_MainWindow)
{
Options ret;
ret.robOptions = GetRobotOptions(Ui_MainWindow);
ret.camOptions = GetCameraOptions(Ui_MainWindow);
return ret;
}


// Geting RobotOptions out of the UI
RobotOptions GetRobotOptions(Ui::MainWindow& Ui_MainWindow)
{
RobotOptions ret;       //Inputverification needed
ret.RobotIP = Ui_MainWindow->IP.text();
ret.Port = stoi(Ui_MainWindow.Port.text());
ret.Zoffset = CheckWorkArea(Ui_MainWindow.ZOffset.text());
ret.Zoffsetfinal = CheckWorkArea(Ui_MainWindow.ZOffsetFinal.text());
ret.WorkAreaXmin = CheckWorkArea(Ui_MainWindow.XminValue.text());
ret.WorkAreaXmax = CheckWorkArea(Ui_MainWindow.XmaxValue.text());
ret.WorkAreaYmin = CheckWorkArea(Ui_MainWindow.YminValue.text());
ret.WorkAreaYmax = CheckWorkArea(Ui_MainWindow.YmaxValue.text());
ret.WorkAreaZmin = CheckWorkArea(Ui_MainWindow.ZminValue.text());
ret.WorkAreaZmax = CheckWorkArea(Ui_MainWindow.ZmaxValue.text());
return ret;
}

// Geting CameraOptions out of the UI
CameraOptions GetCameraOptions(Ui::MainWindow& Ui_MainWindow)
{
    CameraOptions ret;
    ret.CameraIP = Ui_MainWindow.CameraIP.text();
    ret.Exposure = stoi(Ui_MainWindow.Exposure.text());
    ret.FPSforLiveView = stoi(Ui_MainWindow.FPSLiveView.text());
    ret.Bining = stoi(Ui_MainWindow.BiningValue.text());
    ret.Gain = stoi(Ui_MainWindow.GainValue.text());
    ret.FlipImage = Ui_MainWindow.TriggerOn.isChecked();
    return ret;
}

//Initialize the Option page with values from the code
bool InitOptionspage(Ui::MainWindow& Ui_MainWindow , Options InitValue)
{
Ui_MainWindow.IP.text(InitValue.RobotOptions..RobotIP);
Ui_MainWindow.Port.text(tostring(InitValue.RobotOptions.Port));
Ui_MainWindow.ZOffset.text();
Ui_MainWindow.ZOffsetFinal.text();
Ui_MainWindow.XminValue.text();
Ui_MainWindow.XmaxValue.text();
Ui_MainWindow.YminValue.text();
Ui_MainWindow.YmaxValue.text();
Ui_MainWindow.ZminValue.text();
Ui_MainWindow.ZmaxValue.text();
}

//Opens the Folder Dialog to select a Savepath for an Image
bool OpenFolderDialogImageData(Ui::MainWindow& Ui_MainWindow)
{
FileDialog {
    id: fileDialog
    title: "Please choose a file"
    folder: shortcuts.home
    onAccepted: {
        console.log("You chose: " + fileDialog.fileUrls)
        Qt.quit()
    }
    onRejected: {
        console.log("Canceled")
        Qt.quit()
    }
    Component.onCompleted: visible = true
}
Ui_MainWindow.DataSavePath.text(fileDialog.fileUrls);
}

//Opens the FindCameraDialog to select an IP from a list of Cameras from the Network
bool OpenFindCameraDialog(Ui::MainWindow& Ui_MainWindow)
{

}

//Updates the Picture, Timestamp and Fps-Counter in the LiveView
bool RefreshCameraLiveWiew(Ui::MainWindow& Ui_MainWindow)
{
Ui_MainWindow.LiveCameraView.text(); //Input new Picture here
}

//Saves the most recent Image in the path given in the options
bool SaveImageFromLiveView(Ui::MainWindow& Ui_MainWindow)
{
//Filestream to save the Image
}

//Updates the picture and Timestamp in the Start Program
bool RefreshProgramScreen(Ui::MainWindow& Ui_MainWindow)
{
//Same as
}

//Calculates the Coordinates of the latest Image via OpenCV and displays them on the screen
bool GetCoordinates(Ui::MainWindow& Ui_MainWindow);

//Starting a cycle of the robot griping an object
bool StartProgram(Ui::MainWindow& Ui_MainWindow);

//Opens the Project-Info
bool OpenProjectInfo(Ui::MainWindow& Ui_MainWindow&);

int CheckWorkArea(string Input)
{
int ret = 10;
if (stoi(Input) >= 10)
{
ret = stoi(Input);
}
return ret;
}

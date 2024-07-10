#include "KukaVisionUIExtension.h"
#include "KukaVisionUIV1.h"
#include <iostream>

//TODO when Robot-Program is running, the Options Page needs to be disabled

// Geting all Options out of the UI
Options GetAllOptions(Ui::MainWindow &Ui_MainWindow) //TODO remove
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
    ret.RobotIP = Ui_MainWindow.IP->text();
    ret.Port = Ui_MainWindow.Port->text().toInt();
    ret.Zoffset = CheckWorkArea(Ui_MainWindow.ZOffset->text());
    ret.Zoffsetfinal = CheckWorkArea(Ui_MainWindow.ZOffsetFinal->text());
    ret.WorkAreaXmin = CheckWorkArea(Ui_MainWindow.XminValue->text());
    ret.WorkAreaXmax = CheckWorkArea(Ui_MainWindow.XmaxValue->text());
    ret.WorkAreaYmin = CheckWorkArea(Ui_MainWindow.YminValue->text());
    ret.WorkAreaYmax = CheckWorkArea(Ui_MainWindow.YmaxValue->text());
    ret.WorkAreaZmin = CheckWorkArea(Ui_MainWindow.ZminValue->text());
    ret.WorkAreaZmax = CheckWorkArea(Ui_MainWindow.ZmaxValue->text());
    return ret;
}

// Geting CameraOptions out of the UI
CameraOptions GetCameraOptions(Ui::MainWindow& Ui_MainWindow)
{
    std::cout << "Test\n";
    CameraOptions ret;
    ret.CameraIP = Ui_MainWindow.CameraIP->text();
    ret.Exposure = Ui_MainWindow.Exposure->text().toInt();
    ret.FPSforLiveView = Ui_MainWindow.FPSLiveView->text().toInt();
    ret.Bining = Ui_MainWindow.BiningValue->text().toInt();
    ret.Gain = Ui_MainWindow.GainValue->text().toInt();
    ret.FlipImage = Ui_MainWindow.TriggerOn->isChecked();
    return ret;
}

//Initialize the Option page with values from the code
bool InitOptionspage(Ui::MainWindow& Ui_MainWindow, Options InitValue) //TODO Beim Programmstart -> in eigene Datei
{
    Ui_MainWindow.IP->setText("");
    Ui_MainWindow.Port->setText("");
    Ui_MainWindow.ZOffset->setText("");
    Ui_MainWindow.ZOffsetFinal->setText("");
    Ui_MainWindow.XminValue->setText("");
    Ui_MainWindow.XmaxValue->setText("");
    Ui_MainWindow.YminValue->setText("");
    Ui_MainWindow.YmaxValue->setText("");
    Ui_MainWindow.ZminValue->setText("");
    Ui_MainWindow.ZmaxValue->setText("");
}

//Opens the Folder Dialog to select a Savepath for an Image
void OpenFolderDialogImageData(Ui::MainWindow& Ui_MainWindow) //TODO wird vom Event gecallt -> void
{
    std::cout << "Test\n";
}

//Opens the FindCameraDialog to select an IP from a list of Cameras from the Network
void OpenFindCameraDialog(Ui::MainWindow& Ui_MainWindow) //TODO wird vom Event gecallt -> void
{

}

//Saves the most recent Image in the path given in the options
void SaveImageFromLiveView(Ui::MainWindow& Ui_MainWindow)   //TODO wird vom Event gecallt -> void
{
//Filestream to save the Image
}

//Calculates the Coordinates of the latest Image via OpenCV and displays them on the screen
void GetCoordinates(Ui::MainWindow& Ui_MainWindow); //TODO wird vom Event gecallt -> void

//Starting a cycle of the robot griping an object
void StartProgram(Ui::MainWindow& Ui_MainWindow); //TODO wird vom Event gecallt -> void

//Opens the Project-Info
void OpenProjectInfo(Ui::MainWindow& Ui_MainWindow); //TODO wird vom Event gecallt -> void



//TODO Input validation

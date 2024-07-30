#include "KukaVisionUIExtension.h"
#include "KukaVisionUIV1.h"
#include <iostream>
#include <stdexcept>
#include <QtWidgets/QFileDialog>

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
   /* RobotOptions ret;       //Inputverification needed
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
    return 0;
    */
}

// Geting CameraOptions out of the UI
CameraOptions GetCameraOptions(Ui::MainWindow& Ui_MainWindow)
{
    std::cout << "Test\n";
    CameraOptions ret;
    /*ret.CameraIP = Ui_MainWindow.CameraIP->text();
    ret.Exposure = Ui_MainWindow.Exposure->text().toInt();
    ret.FPSforLiveView = Ui_MainWindow.FPSLiveView->text().toInt();
    ret.Bining = Ui_MainWindow.BiningValue->text().toInt();
    ret.Gain = Ui_MainWindow.GainValue->text().toInt();
    ret.FlipImage = Ui_MainWindow.TriggerOn->isChecked();
    return ret;
    */
}

void UpdateOptions(Ui::MainWindow& Ui_MainWindow, Options& currentOptions)
{
    //No Input verification at the moment
    currentOptions.robOptions.RobotIP = Ui_MainWindow.robotIPLineEdit->text().toStdString();
    currentOptions.robOptions.Port = Ui_MainWindow.robotPortLineEdit->text().toInt();
    currentOptions.robOptions.Zoffset =Ui_MainWindow.zOffsetLneEdit->text().toInt();
    currentOptions.robOptions.Zoffsetfinal = Ui_MainWindow.zOffsetFinalLineEdit->text().toInt();
    currentOptions.robOptions.WorkAreaXmax = Ui_MainWindow.xmaxValueLineEdit->text().toInt();
    currentOptions.robOptions.WorkAreaXmin = Ui_MainWindow.xminValueLineEdit->text().toInt();
    currentOptions.robOptions.WorkAreaYmax = Ui_MainWindow.ymaxValueLineedit->text().toInt();
    currentOptions.robOptions.WorkAreaYmin = Ui_MainWindow.yminValueLineEdit->text().toInt();
    currentOptions.robOptions.WorkAreaZmax = Ui_MainWindow.zmaxValueLineEdit->text().toInt();
    currentOptions.robOptions.WorkAreaZmin = Ui_MainWindow.zminValueLineEdit->text().toInt();
    currentOptions.camOptions.CameraIP = Ui_MainWindow.cameraIPLineEdit->text().toInt();
    currentOptions.camOptions.Bining = Ui_MainWindow.biningValueLineEdit->text().toInt();
    currentOptions.camOptions.FPSforLiveView = Ui_MainWindow.fpsLiveViewLineEdit->text().toInt();
    currentOptions.camOptions.Gain = Ui_MainWindow.gainValueLineEdit->text().toInt();
    currentOptions.camOptions.Exposure = Ui_MainWindow.exposureLineEdit->text().toFloat();
}

//Initialize the Option page with values from the code
void InitOptionspage(Ui::MainWindow& Ui_MainWindow) //TODO Beim Programmstart -> in eigene Datei
{
    Ui_MainWindow.robotIPLineEdit->setText("123");
    Ui_MainWindow.robotPortLineEdit->setText("123");
    Ui_MainWindow.zOffsetLneEdit->setText("123");
    Ui_MainWindow.zOffsetFinalLineEdit->setText("123");
    Ui_MainWindow.xminValueLineEdit->setText("123");
    Ui_MainWindow.xmaxValueLineEdit->setText("123");
    Ui_MainWindow.yminValueLineEdit->setText("123");
    Ui_MainWindow.ymaxValueLineedit->setText("123");
    Ui_MainWindow.zminValueLineEdit->setText("123");
    Ui_MainWindow.zmaxValueLineEdit->setText("123");
    Ui_MainWindow.cameraIPLineEdit->setText("123");
    Ui_MainWindow.exposureLineEdit->setText("123");
    Ui_MainWindow.gainValueLineEdit->setText("123");
    Ui_MainWindow.biningValueLineEdit->setText("123");
    Ui_MainWindow.fpsLiveViewLineEdit->setText("123");

}

//Opens the Folder Dialog to select a Savepath for an Image
void OpenFolderDialogImageData(Ui::MainWindow& Ui_MainWindow) //TODO wird vom Event gecallt -> void
{
    std::cout << "Test\n";
    QString FileName = QFileDialog::getSaveFileName(Ui_MainWindow.dataSavePathLineEdit, "Select a Savepath","C://");
    Ui_MainWindow.dataSavePathLineEdit->setText(FileName);

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


void CheckInput(QString& inputdata)
{
int temp = 0;

/*try
{
if inputdata.isNull()
{
throw invalid_argument("No Inputdata !");
}
else
{

temp = inputdata.toInt();
//}
if temp < 1
{
throw out_of_range("Input is out of range! Input Value is to low.");
}
if temp > 1000
{
throw out_of_range("Input is out of range! Input Value is to high.");
}
}
*/
}


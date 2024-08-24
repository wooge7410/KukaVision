#include "KukaVisionUIExtension.h"
#include "KukaVisionUIV1.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdexcept>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>

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
    CheckInput(Ui_MainWindow.robotPortLineEdit->text());
    currentOptions.robOptions.Port = Ui_MainWindow.robotPortLineEdit->text().toInt();
    currentOptions.robOptions.Zoffset =Ui_MainWindow.zOffsetLneEdit->text().toInt();
    currentOptions.robOptions.Zoffsetfinal = Ui_MainWindow.zOffsetFinalLineEdit->text().toInt();
    currentOptions.robOptions.WorkAreaXmax = Ui_MainWindow.xmaxValueLineEdit->text().toInt();
    currentOptions.robOptions.WorkAreaXmin = Ui_MainWindow.xminValueLineEdit->text().toInt();
    currentOptions.robOptions.WorkAreaYmax = Ui_MainWindow.ymaxValueLineedit->text().toInt();
    currentOptions.robOptions.WorkAreaYmin = Ui_MainWindow.yminValueLineEdit->text().toInt();
    currentOptions.robOptions.WorkAreaZmax = Ui_MainWindow.zmaxValueLineEdit->text().toInt();
    currentOptions.robOptions.WorkAreaZmin = Ui_MainWindow.zminValueLineEdit->text().toInt();
    currentOptions.camOptions.CameraIP = Ui_MainWindow.cameraIPLineEdit->text().toStdString();
    currentOptions.camOptions.Bining = Ui_MainWindow.biningValueLineEdit->text().toInt();
    currentOptions.camOptions.FPSforLiveView = Ui_MainWindow.fpsLiveViewLineEdit->text().toInt();
    currentOptions.camOptions.Gain = Ui_MainWindow.gainValueLineEdit->text().toInt();
    currentOptions.camOptions.Exposure = Ui_MainWindow.exposureLineEdit->text().toInt();

    SaveOptionsToFile(currentOptions);
}

//Initialize the Option page with values from the code
void InitOptionspage(Ui::MainWindow& Ui_MainWindow ,Options currentOptions) //TODO Beim Programmstart -> in eigene Datei
{
    Ui_MainWindow.robotIPLineEdit->setText(QString::fromStdString(currentOptions.robOptions.RobotIP));
    Ui_MainWindow.robotPortLineEdit->setText(QString::number(currentOptions.robOptions.Port));
    Ui_MainWindow.zOffsetLneEdit->setText(QString::number(currentOptions.robOptions.Zoffset));
    Ui_MainWindow.zOffsetFinalLineEdit->setText(QString::number(currentOptions.robOptions.Zoffsetfinal));
    Ui_MainWindow.xminValueLineEdit->setText(QString::number(currentOptions.robOptions.WorkAreaXmin));
    Ui_MainWindow.xmaxValueLineEdit->setText(QString::number(currentOptions.robOptions.WorkAreaXmax));
    Ui_MainWindow.yminValueLineEdit->setText(QString::number(currentOptions.robOptions.WorkAreaYmin));
    Ui_MainWindow.ymaxValueLineedit->setText(QString::number(currentOptions.robOptions.WorkAreaYmax));
    Ui_MainWindow.zminValueLineEdit->setText(QString::number(currentOptions.robOptions.WorkAreaZmin));
    Ui_MainWindow.zmaxValueLineEdit->setText(QString::number(currentOptions.robOptions.WorkAreaZmax));
    Ui_MainWindow.cameraIPLineEdit->setText(QString::fromStdString(currentOptions.camOptions.CameraIP));
    Ui_MainWindow.exposureLineEdit->setText(QString::number(currentOptions.camOptions.Exposure));
    Ui_MainWindow.gainValueLineEdit->setText(QString::number(currentOptions.camOptions.Gain));
    Ui_MainWindow.biningValueLineEdit->setText(QString::number(currentOptions.camOptions.Bining));
    Ui_MainWindow.fpsLiveViewLineEdit->setText(QString::number(currentOptions.camOptions.FPSforLiveView));

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
    std::cout << "Open the Camera Dialog\n";
}

//Saves the most recent Image in the path given in the options
void SaveImageFromLiveView(Ui::MainWindow& Ui_MainWindow)   //TODO wird vom Event gecallt -> void
{
    std::cout << "SaveImageButton\n";
//Filestream to save the Image
}

//Calculates the Coordinates of the latest Image via OpenCV and displays them on the screen
void GetCoordinates(Ui::MainWindow& Ui_MainWindow)
{
    std::cout << "GetCoordinatesButton\n";
} //TODO wird vom Event gecallt -> void

//Starting a cycle of the robot griping an object
void StartProgram(Ui::MainWindow& Ui_MainWindow)
{
    std::cout << "StartProgramButton\n";
    Ui_MainWindow.startProgramStatusColorLabel->setText("Running");
    Ui_MainWindow.startProgramStatusColorLabel->setStyleSheet(QString::fromUtf8("\n" "background-color: rgb(51,102,0);"));
} //TODO wird vom Event gecallt -> void

//Opens the Project-Info
void OpenProjectInfo(Ui::MainWindow& Ui_MainWindow)
{
    std::cout << "ProjectInfoButton\n";
} //TODO wird vom Event gecallt -> void


//Save Options in a binary File
void SaveOptionsToFile(Options& currentOptions)
{

std::ofstream ziel;
ziel.open("Options.dat",std::ios::out);
if(ziel.is_open())
{
ziel << currentOptions.robOptions.RobotIP << ";";
ziel << currentOptions.robOptions.Port << ";";
ziel << currentOptions.robOptions.Zoffset << ";";
ziel << currentOptions.robOptions.Zoffsetfinal << ";";
ziel << currentOptions.robOptions.WorkAreaXmax << ";";
ziel << currentOptions.robOptions.WorkAreaXmin << ";";
ziel << currentOptions.robOptions.WorkAreaYmax << ";";
ziel << currentOptions.robOptions.WorkAreaYmin << ";";
ziel << currentOptions.robOptions.WorkAreaZmax << ";";
ziel << currentOptions.robOptions.WorkAreaZmin << ";";

ziel << currentOptions.camOptions.CameraIP << ";";
ziel << currentOptions.camOptions.Bining << ";";
ziel << currentOptions.camOptions.Exposure << ";";
ziel << currentOptions.camOptions.FPSforLiveView << ";";
ziel << currentOptions.camOptions.Gain << ";";
ziel << currentOptions.camOptions.FlipImage << "#";
}
ziel.close();
}

//Read Options from a binary File
void ReadOptionsFromFile(Options& currentOptions)
{
std::string readIn ;
std::ifstream source;
source.open("Options.dat",std::ios::in);
if(source.is_open())
{
    source >> readIn;
}

source.close();

std::string delimiter = ";";


std::vector<std::string> InputData = split(readIn,delimiter);

    currentOptions.robOptions.RobotIP = InputData[0];
    currentOptions.robOptions.Port = std::stoi(InputData[1]);
    currentOptions.robOptions.Zoffset = std::stoi(InputData[2]);
    currentOptions.robOptions.Zoffsetfinal = std::stoi(InputData[3]);
    currentOptions.robOptions.WorkAreaXmax = std::stoi(InputData[4]);
    currentOptions.robOptions.WorkAreaXmin = std::stoi(InputData[5]);
    currentOptions.robOptions.WorkAreaYmax = std::stoi(InputData[6]);
    currentOptions.robOptions.WorkAreaYmin = std::stoi(InputData[7]);
    currentOptions.robOptions.WorkAreaZmax = std::stoi(InputData[8]);
    currentOptions.robOptions.WorkAreaZmin = std::stoi(InputData[9]);
    currentOptions.camOptions.CameraIP = InputData[10];
    currentOptions.camOptions.Bining = std::stoi(InputData[11]);
    currentOptions.camOptions.FPSforLiveView = std::stoi(InputData[13]);
    currentOptions.camOptions.Gain = std::stoi(InputData[14]);
    currentOptions.camOptions.Exposure = std::stoi(InputData[12]);
}


void CheckInput(QString inputdata)
{
int temp = 0;

try
{
    if (inputdata.isNull())
    {
        throw std::invalid_argument("No Inputdata !");
    }
    else
        {

        temp = inputdata.toInt();
        }//Inputrange may needs to be adjusted
        if (temp < 1)
        {
            throw std::out_of_range("Input is out of range! Input Value is to low.");
        }
        if (temp > 1000)
        {
            throw std::out_of_range("Input is out of range! Input Value is to high.");
        }
    }
    catch(std::invalid_argument& e)
    {
    std::cout<<"Invalid Input!"<<std::endl;
    std::cout<< e.what()<<std::endl;
    QMessageBox();
    }
    catch(std::out_of_range& e)//Maybe using a message Box
    {
    std::cout<<"Invalid Input"<<std::endl;
    std::cout<< e.what()<<std::endl;

    }
}

std::vector<std::string> split(std::string readIN, const std::string& delimiter)
{
    std::vector<std::string> tokens;
    size_t pos = 0;
    std::string token;
    while ((pos = readIN.find(delimiter)) != std::string::npos)
    {
        token = readIN.substr(0,pos);
        tokens.push_back(token);
        readIN.erase(0,pos + delimiter.length());
    }
    tokens.push_back(readIN);
    return tokens;
}


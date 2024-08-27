#include "MainWindow.h"


MainWindow::MainWindow(QMainWindow *parent) {
    windowParent = parent;
    setupUi(parent);
    lastTabIndex = tabWidget -> currentIndex();

    ReadOptionsFromJSON(options_JSON);
    InitOptionspage(options_JSON);

    if(cameraIPLineEdit -> text() != "") {
        try {
            cameraStream = new CameraStream(cameraIPLineEdit -> text().toStdString());
            cameraConnected = true;
        } catch (NeoAPI::NotConnectedException e) {
            ShowParameterErrorMessage("Unable to connect to Camera");
            consoleLog("Error: Unable to connect to Camera");
            cameraConnected = false;
        }
    }

    QObject::connect(tabWidget, &QTabWidget::currentChanged, [&] {tabChange();});
    QObject::connect(startCameraViewButton, &QAbstractButton::clicked, [&] {startCameraView();});
    QObject::connect(stoppCameraViewButton, &QAbstractButton::clicked, [&] {stopCameraView();});
    QObject::connect(getCoordinatesButton, &QAbstractButton::clicked, [&] {GetCoordinates();});
    QObject::connect(startRobotButton, &QAbstractButton::clicked, [&] {StartProgram();});
}


//TODO when Robot-Program is running, the Options Page needs to be disabled


json MainWindow::GetRobotOptions_JSON() {
    json robotOptions_JSON;
    robotOptions_JSON["IP_Address"] = robotIPLineEdit->text().toStdString();
    robotOptions_JSON["Port"] = robotPortLineEdit->text().toInt();
    robotOptions_JSON["Gripping_Height"] = zOffsetLneEdit->text().toInt();
    robotOptions_JSON["Travel_Height"] = zOffsetFinalLineEdit->text().toInt();
    robotOptions_JSON["X_Min"] = xminValueLineEdit->text().toInt();
    robotOptions_JSON["X_Max"] = xmaxValueLineEdit->text().toInt();
    robotOptions_JSON["Y_Min"] = yminValueLineEdit->text().toInt();
    robotOptions_JSON["Y_Max"] = ymaxValueLineedit->text().toInt();
    robotOptions_JSON["Z_Min"] = zminValueLineEdit->text().toInt();
    robotOptions_JSON["Z_Max"] = zmaxValueLineEdit->text().toInt();

    return robotOptions_JSON;
}


json MainWindow::GetCameraOptions_JSON() {
    json cameraOptions_JSON;
    cameraOptions_JSON["IP_Address"] = cameraIPLineEdit->text().toStdString();
    cameraOptions_JSON["Acquisition_Framerate"] = fpsLiveViewLineEdit->text().toInt();
    cameraOptions_JSON["Binning"] = biningValueLineEdit->text().toInt();
    cameraOptions_JSON["Gain"] = gainValueLineEdit->text().toInt();
    return cameraOptions_JSON;
}

void MainWindow::GetAllOptions_JSON(json& options) {
    options["Camera"] = GetCameraOptions_JSON();
    options["Robot"] = GetRobotOptions_JSON();
    validateOptions(options);
}


void MainWindow::validateOptions(json& options) {
    bool valid = true;
    if (optionLimits.empty()) {
        ReadLimitsFromJSON(optionLimits);
    }

    if(options.size() == 2 && options["Camera"].size() == 4 && options["Robot"].size() == 10) {
        for (auto& [key, val] : optionLimits.items())
        {
            for (auto& [skey, sval] : optionLimits[key].items())
            {
                if ((int) options[key][skey] < optionLimits[key][skey]["min"]) {
                    valid = false;
                    ShowParameterErrorMessage(skey + " must be over  " + to_string(optionLimits[key][skey]["min"]));
                } else if ((int) options[key][skey] > optionLimits[key][skey]["max"]) {
                    valid = false;
                    ShowParameterErrorMessage(skey + " must be under " + to_string(optionLimits[key][skey]["max"]));
                }
            }
            if (!validateIPString(options[key]["IP_Address"])) {
                ShowParameterErrorMessage("Invalid " + key + " IP Address");
            }
        }
    } else valid = false;
    start_ProgramWidget->setEnabled(valid);

}


bool MainWindow::validateIPString(string ipAddress) {
    vector<string> ipSplit = splitString(ipAddress, ".");
    if (ipSplit.size() != 4) {
        return false;
    } else {
        for(string subIp : ipSplit) {
            try{
                int sIp = stoi(subIp);
                if (sIp >= 0 && sIp <= 255) return true;
                else return false;
            } catch(invalid_argument ex) {
                return false;
            }
        }
    }

}

//Initialize the Option page with values from the code
//TODO Rename Function
void MainWindow::InitOptionspage(json &options)  //TODO Beim Programmstart -> in eigene Datei
{
    try {
        robotIPLineEdit->setText(QString::fromStdString(options["Robot"]["IP_Address"]));
        robotPortLineEdit->setText(QString::number((int) options["Robot"]["Port"]));
        zOffsetLneEdit->setText(QString::number((int) options["Robot"]["Gripping_Height"]));
        zOffsetFinalLineEdit->setText(QString::number((int) options["Robot"]["Travel_Height"]));
        xminValueLineEdit->setText(QString::number((int) options["Robot"]["X_Min"]));
        xmaxValueLineEdit->setText(QString::number((int) options["Robot"]["X_Max"]));
        yminValueLineEdit->setText(QString::number((int) options["Robot"]["Y_Min"]));
        ymaxValueLineedit->setText(QString::number((int) options["Robot"]["Y_Max"]));
        zminValueLineEdit->setText(QString::number((int) options["Robot"]["Z_Min"]));
        zmaxValueLineEdit->setText(QString::number((int) options["Robot"]["Z_Max"]));
        cameraIPLineEdit->setText(QString::fromStdString(options["Camera"]["IP_Address"]));
        gainValueLineEdit->setText(QString::number((int) options["Camera"]["Gain"]));
        biningValueLineEdit->setText(QString::number((int) options["Camera"]["Binning"]));
        fpsLiveViewLineEdit->setText(QString::number((int) options["Camera"]["Acquisition_Framerate"]));
    } catch (exception e) {
        cout << "Could not Initialize Options Page\n";
    }
}

//Opens the Folder Dialog to select a Savepath for an Image
void MainWindow::OpenFolderDialogImageData() //TODO wird vom Event gecallt -> void
{
    QString FileName = QFileDialog::getSaveFileName(dataSavePathLineEdit, "Select a path to store Images","C://");
    dataSavePathLineEdit->setText(FileName);

}

//Opens the FindCameraDialog to select an IP from a list of Cameras from the Network
void MainWindow::OpenFindCameraDialog() //TODO wird vom Event gecallt -> void
{
    std::cout << "Open the Camera Dialog\n";
}

//Saves the most recent Image in the path given in the options
void MainWindow::SaveImageFromLiveView()   //TODO wird vom Event gecallt -> void
{
    std::cout << "SaveImageButton\n";
//Filestream to save the Image
}

//Calculates the Coordinates of the latest Image via OpenCV and displays them on the screen
void MainWindow::GetCoordinates()
{
    stopCameraView();
    cout << "Robot Coordinates: (" << cameraStream ->latestObject.getCenter().x << ", " << cameraStream ->latestObject.getCenter().x << ")" << endl;
} //TODO wird vom Event gecallt -> void

//Starting a cycle of the robot griping an object
void MainWindow::StartProgram()
{
    startProgramStatusColorLabel->setText("Running");
    startProgramStatusColorLabel->setStyleSheet(QString::fromUtf8("\n" "background-color: rgb(51,102,0);"));

    cout << "Startet Robot: (" << cameraStream ->latestObject.getCenter().x << ", " << cameraStream ->latestObject.getCenter().x << ")" << endl;
    runERKLSequence(cameraStream ->latestObject.getCenter().x, cameraStream ->latestObject.getCenter().y, 200, cameraStream ->latestObject.getAngle());


    startProgramStatusColorLabel->setText("Finished");
    startProgramStatusColorLabel->setStyleSheet(QString::fromUtf8("\n" "background-color: rgb(255,0,0);"));

    if (cameraConnected) {
        runCameraStream = true;
    f = std::async(&CameraStream::acquisitionLoop, cameraStream, programImageLabel, &runCameraStream, true, false);
    } else {
        if(cameraIPLineEdit -> text() != "") {
            try {
                cameraStream = new CameraStream(cameraIPLineEdit -> text().toStdString());
                runCameraStream = true;
                cameraConnected = true;
                f = std::async(&CameraStream::acquisitionLoop, cameraStream, programImageLabel, &runCameraStream, true, false);
            } catch (NeoAPI::NotConnectedException e) {
                ShowParameterErrorMessage("Unable to connect to Camera");
                cameraConnected = false;
            }
        }
    }

} //TODO wird vom Event gecallt -> void

//Opens the Project-Info
void MainWindow::OpenProjectInfo()
{
    std::cout << "ProjectInfoButton\n";
} //TODO wird vom Event gecallt -> void


void MainWindow::startCameraView() {
    consoleLog("Starting Camera View");
    if (cameraConnected) {
        runCameraStream = true;
        f = std::async(&CameraStream::acquisitionLoop, cameraStream, liveCameraViewLabel, &runCameraStream, outlinesCheckBox -> isChecked(), coordinatesCheckBox -> isChecked());
    } else {
        if(cameraIPLineEdit -> text() != "") {
            try {
                cameraStream = new CameraStream(cameraIPLineEdit -> text().toStdString());
                runCameraStream = true;
                cameraConnected = true;
                f = std::async(&CameraStream::acquisitionLoop, cameraStream, liveCameraViewLabel, &runCameraStream, outlinesCheckBox -> isChecked(), coordinatesCheckBox -> isChecked());
            } catch (NeoAPI::NotConnectedException e) {
                ShowParameterErrorMessage("Unable to connect to Camera");
                cameraConnected = false;
            }
        }
    }
}



void MainWindow::stopCameraView() {
    runCameraStream = false;
    consoleLog("Stopping Camera View");
}


void MainWindow::tabChange() {
    if (lastTabIndex == 1 && tabWidget -> currentIndex() != 1) {
        GetAllOptions_JSON(options_JSON);
        consoleLog("Updated Options");
    } else if (lastTabIndex == 2 && tabWidget -> currentIndex() != 2) stopCameraView();
    if(tabWidget -> currentIndex() == 2) {
        if (cameraConnected) {
            runCameraStream = true;
        f = std::async(&CameraStream::acquisitionLoop, cameraStream, programImageLabel, &runCameraStream, true, false);
        } else {
            if(cameraIPLineEdit -> text() != "") {
                try {
                    cameraStream = new CameraStream(cameraIPLineEdit -> text().toStdString());
                    runCameraStream = true;
                    cameraConnected = true;
                    f = std::async(&CameraStream::acquisitionLoop, cameraStream, programImageLabel, &runCameraStream, true, false);
                } catch (NeoAPI::NotConnectedException e) {
                    ShowParameterErrorMessage("Unable to connect to Camera");
                    cameraConnected = false;
                }
            }
        }
    }
    lastTabIndex = tabWidget -> currentIndex();
}




void MainWindow::SaveOptionsInJSON(json& currentOptions) {
    std::ofstream o("Options.json");
    o << std::setw(4) << currentOptions << std::endl;
    consoleLog("Saved Options in \"Options.json\"");
}

void MainWindow::ReadOptionsFromJSON(json& currentOptions) {
    std::ifstream f("Options.json");
    currentOptions = json::parse(f);
    consoleLog("Read Options from \"Options.json\"");
}

void MainWindow::ReadLimitsFromJSON(json& optionLimits) {
    std::ifstream f("OptionLimits.json");
    json opt = json::parse(f);
    if(!opt.empty()) optionLimits = opt;
    consoleLog("ReadLimits from \"OptionLimits.json\"");
}





void MainWindow::ShowParameterErrorMessage(string text) {
    QMessageBox err(windowParent);
    err.critical(windowParent, "Invalid Parameter", QString::fromStdString(text));
    consoleLog("ErrorMessage: " + text);
}


void MainWindow::consoleLog(string msg) {
    infoConsoleTextBrowser -> append(QString::fromStdString("[" + generateTimestampString() + "]  " + msg));
}

string MainWindow::generateTimestampString() {
    time_t currentTime = time(NULL);

    char buffer[90];
    struct tm* timeinfo = localtime(&currentTime);
    strftime(buffer, sizeof(buffer), "%Y-%m-%d-%H:%M:%S", timeinfo);

    return buffer;
}


vector<string> MainWindow::splitString(std::string readIN, const std::string& delimiter)
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


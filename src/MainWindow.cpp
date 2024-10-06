#include "MainWindow.h"


MainWindow::MainWindow(QMainWindow *parent) {
    windowParent = parent;
    setupUi(parent);
    lastTabIndex = tabWidget -> currentIndex(); // updates the lastTabIndex to the current tab

    // Load Options
    ReadOptionsFromJSON(options_JSON);
    InitOptionspage(options_JSON);

    // Try to setup Connection to Camera at program-start because it takes a few seconds
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

    // Connect Events to according functions
    QObject::connect(tabWidget, &QTabWidget::currentChanged, [&] {tabChange();});
    QObject::connect(startCameraViewButton, &QAbstractButton::clicked, [&] {startCameraView();});
    QObject::connect(stoppCameraViewButton, &QAbstractButton::clicked, [&] {stopCameraView();});
    QObject::connect(getCoordinatesButton, &QAbstractButton::clicked, [&] {GetCoordinates();});
    QObject::connect(startRobotButton, &QAbstractButton::clicked, [&] {StartProgram();});
    QObject::connect(actionProject_Infos, &QAction::triggered, [&] {OpenProjectInfo();});
}


//TODO when Robot-Program is running, the Options Page needs to be disabled


json MainWindow::GetRobotOptions_JSON() {
    // Store the Options set in the UI in a JSON_Object
    // Take care to use correct Variable-Transformations
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
    // Store the Options set in the UI in a JSON_Object
    // Take care to use correct Variable-Transformations
    json cameraOptions_JSON;
    cameraOptions_JSON["IP_Address"] = cameraIPLineEdit->text().toStdString();
    cameraOptions_JSON["Acquisition_Framerate"] = fpsLiveViewLineEdit->text().toInt();
    cameraOptions_JSON["Binning"] = biningValueLineEdit->text().toInt();
    cameraOptions_JSON["Gain"] = gainValueLineEdit->text().toInt();
    return cameraOptions_JSON;
}

void MainWindow::GetAllOptions_JSON(json& options) {
    // Gather both camera- and robot options
    // Store both sub-JSON-Objects in one object
    options["Camera"] = GetCameraOptions_JSON();
    options["Robot"] = GetRobotOptions_JSON();
    validateOptions(options); // Make sure the options are valid
}


void MainWindow::validateOptions(json& options) {
    bool valid = true;
    if (optionLimits.empty()) { // Load the Limits from the JSON-File if required
        ReadLimitsFromJSON(optionLimits);
    }

    if(options.size() == 2 && options["Camera"].size() == 4 && options["Robot"].size() == 10) {
     // Make sure there are two JSON-Properties and make sure the Camera-Property has 4 sub-Properties &
     // The Robot-Property has 10 sub-Propberties
        for (auto& [key, val] : optionLimits.items()) // Get the keys and values of the two Main-Properties "Camera" and "Robot" (This operation is using the Option-Limits)
        {
            for (auto& [skey, sval] : optionLimits[key].items()) // For each sub-property
            {
                // The Option-Limits provide a min and max value
                // The according option is checked against those limits
                if ((int) options[key][skey] < optionLimits[key][skey]["min"]) {
                    valid = false;
                    ShowParameterErrorMessage(skey + " must be over  " + to_string(optionLimits[key][skey]["min"])); // Show Error-Message at invalid Option
                } else if ((int) options[key][skey] > optionLimits[key][skey]["max"]) {
                    valid = false;
                    ShowParameterErrorMessage(skey + " must be under " + to_string(optionLimits[key][skey]["max"])); // Show Error-Message at invalid Option
                }
            }
            if (!validateIPString(options[key]["IP_Address"])) { // Verify Camera and Robot IPs
                ShowParameterErrorMessage("Invalid " + key + " IP Address"); // Show Error-Message at invalid Option
            }
        }
    } else valid = false;
    start_ProgramWidget->setEnabled(valid); // If the Options are invalid, the Robot-Sequence cannot be started

}


bool MainWindow::validateIPString(string ipAddress) {
    vector<string> ipSplit = splitString(ipAddress, "."); // Split IP-String at "."
    if (ipSplit.size() != 4) { // Check if IP-Address consists of four octets
        return false;
    } else {
        for(string subIp : ipSplit) {
            try{
                int sIp = stoi(subIp);
                if (sIp >= 0 && sIp <= 255) return true; // Make sure each octet is within the limit of 0-255
                else return false;
            } catch(invalid_argument ex) {
                return false;
            }
        }
    }

}


void MainWindow::InitOptionspage(json &options)
{
    // Display Options from the JSON-Object in UI
    // Be aware of correct conversion to QString
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


// TODO (kukavision#1#): Connect to according button-press
void MainWindow::OpenFolderDialogImageData()
{
    //Open QFileDialog and store selected path in UI
    QString FileName = QFileDialog::getSaveFileName(dataSavePathLineEdit, "Select a path to store Images","C://");
    dataSavePathLineEdit->setText(FileName);

}


void MainWindow::OpenFindCameraDialog()
{
// TODO (kukavision#1#): Execute Find Camera-Dialog and store selected IP in UI ...
//(Example Implementation under "~/KukaVision/repo/KukaVision/test/CamerViewPOC/ui_mainwindow.cpp")
    std::cout << "Open the Camera Dialog\n";
}

void MainWindow::SaveImageFromLiveView()
{

// TODO (kukavision#1#): Connect to according button-press
// TODO (kukavision#1#): Example: imwrite("./1.png", cameraStream->latestImage) ...
//Get correct path from Options and use timestamp as filename
    std::cout << "SaveImageButton\n";
}

void MainWindow::GetCoordinates()
{
    stopCameraView(); // Stops the camera-view so the last detected object will be gripped
// TODO (kukavision#1#): validate coordinates by XYZ_MinMax values in Setting; Make sure the Robot-Sequence cannot be started without getting the coordinates first
    cout << "Robot Coordinates: (" << cameraStream ->latestObject.getCenter().x << ", " << cameraStream ->latestObject.getCenter().y << ") Angle: "<< cameraStream -> latestObject.getAngle() << endl;
} //TODO wird vom Event gecallt -> void

void MainWindow::StartProgram()
{
    static std::future<void> ekrlService; // Background-Service for the communication with the robot. makes sure the ui is still usable in the meantime
    startProgramStatusColorLabel->setText("Running");
    startProgramStatusColorLabel->setStyleSheet(QString::fromUtf8("\n" "background-color: rgb(51,102,0);")); // Change color of the status label

    cout << "Startet Robot: (" << cameraStream ->latestObject.getCenter().x << ", " << cameraStream ->latestObject.getCenter().y << ") Angle: "<< cameraStream -> latestObject.getAngle() << endl;
    //runERKLSequence(options_JSON["Robot"]["IP_Address"], options_JSON["Robot"]["Port"], startProgramStatusColorLabel, cameraStream -> latestObject.getCenter().x, cameraStream->latestObject.getCenter().y, options_JSON["Robot"]["Travel_Height"], options_JSON["Robot"]["Gripping_Height"], -cameraStream ->latestObject.getAngle());
    ekrlService = std::async(&runERKLSequence, options_JSON["Robot"]["IP_Address"], options_JSON["Robot"]["Port"], startProgramStatusColorLabel, cameraStream -> latestObject.getCenter().x, cameraStream->latestObject.getCenter().y, options_JSON["Robot"]["Travel_Height"], options_JSON["Robot"]["Gripping_Height"], -cameraStream ->latestObject.getAngle()); // Start background service

    // After completion of the robot-program, the camera stream is restarted
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

void MainWindow::OpenProjectInfo()
{
    QMessageBox info(windowParent); // Open Info-Box with info-text about the project
    info.information(windowParent, "Project-Info", "This project was made by Sarah Vásquez, Alexander Klaus and Renko Stahlschmidt in a project at the HSBI.\n\nThe program detects objects by a camera and identifies them with OpenCV and sends the calculated coordinates via Ethernet KRL to a Kuka robot. \n\n More informations can be found in the wiki\nAlexander.Klaus@hsbi.de\nRenko.Stahlschmidt@hsbi.de\nsarah_daniela.vasquez@hsbi.de");

    std::cout << "ProjectInfoButton\n";
}


void MainWindow::startCameraView() { // Triggered by startCameraViewButton
    consoleLog("Starting Camera View");
    if (cameraConnected) {
        runCameraStream = true; // If camera is connected, the acquisitionLoop can be run immediately in the background
        f = std::async(&CameraStream::acquisitionLoop, cameraStream, liveCameraViewLabel, &runCameraStream, outlinesCheckBox -> isChecked(), coordinatesCheckBox -> isChecked());
    } else {
        if(cameraIPLineEdit -> text() != "") { // If not connected, a connection & setup will be attempted before running the bg-process
            try {
                cameraStream = new CameraStream(cameraIPLineEdit -> text().toStdString());
                runCameraStream = true;
                cameraConnected = true;
                f = std::async(&CameraStream::acquisitionLoop, cameraStream, liveCameraViewLabel, &runCameraStream, outlinesCheckBox -> isChecked(), coordinatesCheckBox -> isChecked());            } catch (NeoAPI::NotConnectedException e) {
                ShowParameterErrorMessage("Unable to connect to Camera");
                cameraConnected = false;
            }
        }
    }
}



void MainWindow::stopCameraView() {
    runCameraStream = false; // acquisitionLoop uses this variable as abort-criteria
    consoleLog("Stopping Camera View");
}


void MainWindow::tabChange() { // is called when user changes the tab in the ui
    if (lastTabIndex == 1 && tabWidget -> currentIndex() != 1) { // index=1 is the options page
        GetAllOptions_JSON(options_JSON); // When leaving the options page, the settings are extracted from the ui and stored in JSON
        consoleLog("Updated Options");
    } else if (lastTabIndex == 2 && tabWidget -> currentIndex() != 2) stopCameraView(); // If the last tab is exited, the camera lifeview is stopped
    if(tabWidget -> currentIndex() == 2) { // if the user enters the last tab, the camera-lifeview is started
        if (cameraConnected) {
            runCameraStream = true;
        f = std::async(&CameraStream::acquisitionLoop, cameraStream, programImageLabel, &runCameraStream, true, false); // Start the background-process
        } else {
            if(cameraIPLineEdit -> text() != "") {
                try {
                    cameraStream = new CameraStream(cameraIPLineEdit -> text().toStdString());
                    runCameraStream = true;
                    cameraConnected = true;
                    f = std::async(&CameraStream::acquisitionLoop, cameraStream, programImageLabel, &runCameraStream, true, false); // Start the background-process
                } catch (NeoAPI::NotConnectedException e) {
                    ShowParameterErrorMessage("Unable to connect to Camera");
                    cameraConnected = false;
                }
            }
        }
    }
    lastTabIndex = tabWidget -> currentIndex(); // lastTab is updated, in order to detect when the user leaves a specific tab
}




void MainWindow::SaveOptionsInJSON(json& currentOptions) {
// TODO (kukavision#1#): Make option-path selectable by user
    std::ofstream o("Options.json");
    o << std::setw(4) << currentOptions << std::endl; // Write JSON to file
    consoleLog("Saved Options in \"Options.json\"");
}

void MainWindow::ReadOptionsFromJSON(json& currentOptions) {
// TODO (kukavision#1#): Make option-path selectable by user
    std::ifstream f("Options.json");
    currentOptions = json::parse(f); // parse JSON from file
    consoleLog("Read Options from \"Options.json\"");
}

void MainWindow::ReadLimitsFromJSON(json& optionLimits) {
// TODO (kukavision#1#): Make option-limit-path selectable by user
// TODO (kukavision#1#): Option limits can only be changed in the file. Make a menu to allow the user to change limits
    std::ifstream f("OptionLimits.json");
    json opt = json::parse(f); // parse the option limits from file
    if(!opt.empty()) optionLimits = opt; // make sure, the limits-object is only edited, if the file is not empty
    consoleLog("ReadLimits from \"OptionLimits.json\"");
}





void MainWindow::ShowParameterErrorMessage(string text) { // Errorbox for when a invalid parameter has been used
    QMessageBox err(windowParent);
    err.critical(windowParent, "Invalid Parameter", QString::fromStdString(text));
    consoleLog("ErrorMessage: " + text); // Logs the error in the console
}


void MainWindow::consoleLog(string msg) {
    infoConsoleTextBrowser -> append(QString::fromStdString("[" + generateTimestampString() + "]  " + msg)); // Display a String with the current timestamp in the console
}

string MainWindow::generateTimestampString() { // Generates timestamps for the console
    time_t currentTime = time(NULL);

    char buffer[90];
    struct tm* timeinfo = localtime(&currentTime);
    strftime(buffer, sizeof(buffer), "%Y-%m-%d-%H:%M:%S", timeinfo); // Converts the timeinfo to the given format

    return buffer;
}


vector<string> MainWindow::splitString(std::string readIN, const std::string& delimiter) // Splits a string at given delimiters into a vector (used for splitting IP-Addresses)
{
    std::vector<std::string> tokens;
    size_t pos = 0;
    std::string token;
    while ((pos = readIN.find(delimiter)) != std::string::npos) // uses find to get indexes for substrings
    {
        token = readIN.substr(0,pos); // Gets substring from beginning to first delimiter
        tokens.push_back(token);
        readIN.erase(0,pos + delimiter.length()); // extracted substring and delimiter are removed
    }
    tokens.push_back(readIN);// add the last remaining part to the vector
    return tokens;
}


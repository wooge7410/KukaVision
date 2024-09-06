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
#include "EKRLServer.h"

using json = nlohmann::json;
using namespace std;


/** \brief MainWindow Class inherits the QTDesigner-Generated Class Ui::MainWindow
 */
class MainWindow : public Ui::MainWindow
{
public:

    /** \brief Constructor for MainWindow-Class
     * runs Ui::MainWindow setup()
     * connects UI-Events to functions
     * Loads Options and Initializes Options-Page
     * sets up CameraStream
     *
     * \param parent QMainWindow* ParentWinow; Required for show Message Boxes
     *
     */
    MainWindow(QMainWindow *parent);

    json options_JSON;  /**< JSON-Object that holds Settings */
    CameraStream* cameraStream;


    /** \brief Saves JSON-Object in File
     *  Takes a JSON-Object(The Options) and stores them in "Options.json"
     * \param currentOptions json& The JSON-Object that should be stored
     * \return void
     *
     */
    void SaveOptionsInJSON(json& currentOptions);


    /** \brief Reads all Options from the UI and stores them in JSON-Object
     *
     * \param options json& JSON-Object where options will be stored in
     * \return void
     *
     */
    void GetAllOptions_JSON(json &options);


private:
    QMainWindow *windowParent;

    json optionLimits; /**< Integer-Options have Upper and Lower limits, which are stored here */

    int lastTabIndex; /**< Stores the index of the previous tab. For tab-Changes */

    bool runCameraStream = false;   /**< boolean is used to stop the background-process of the CameraStream */

    std::future<void> f;    /**<  Variable for Background-Process of the CameraStream*/

    bool cameraConnected = false;   /**< Variable is used to determine, whether the camera has been connected at the start of the program */


    /** \brief Reads all Robot related options from the UI and returns them
     *
     * \return JSON-Object with Robot-Options
     *
     */
    json GetRobotOptions_JSON();


    /** \brief Reads all Camera related options from the UI and returns them
     *
     * \return JSON-Object with Camera-Options
     *
     */
    json GetCameraOptions_JSON();


    /** \brief Validates options in the given JSON-Object
     * Validation is based on the limits, given in the optionLimits-Variable or the validity of IP-Addresses
     * If options are invalid, an ErrorBox will be displayed and the UI to run the Robot-Program is disabled
     * \param options json& JSON-Object with options that should be verified
     * \return void
     *
     */
    void validateOptions(json& options);


    /** \brief Checks whether a string contains a valid IP-Address
     *
     * \param ipAddress string of an IP, that should be verified
     * \return bool depending on the validity of the string
     *
     */
    bool validateIPString(string ipAddress);


    /** \brief Reads the option-values from a json-object and inserts them into the UI
     *
     * \param options json& options, that should be displayed in the UI
     * \return void
     *
     */
    void InitOptionspage(json &options);


    //Opens the Folder Dialog to select a Savepath for an Image
    /** \brief Function triggered by folderDialogButton. Should open a OpenFileDialog to define where Images are stored.
     *
     * \return void
     *
     */
    void OpenFolderDialogImageData(); //TODO Implementation


    /** \brief Triggered by findCameraButton. Opens a dialog to select a connected camera to connect to
     *
     * \return void
     *
     */
    void OpenFindCameraDialog(); //TODO Integration. Find Camera Dialog is already implemented. see test/FindCameraDialog


    /** \brief Saves the latest Image of the live View
     *
     * \return void
     *
     */
    void SaveImageFromLiveView(); // TODO Implementation


    /** \brief Triggered by getCoordinatesButton. Stops the live view and determines the coordinates of the detected object
     *
     * \return void
     *
     */
    void GetCoordinates(); //TODO validate coordinates by XYZ_MinMax values in Setting; Make sure the Robot-Sequence cannot be started without getting the coordinates first


    /** \brief Triggered by startRobotButton. Starts the Robot-Sequence for the previously determined coordinates
     *
     * \return void
     *
     */
    void StartProgram();


    /** \brief opens the project-info
     *
     * \return void
     *
     */
    void OpenProjectInfo();


    /** \brief Triggered whenever the user changes the tab
     * Makes sure options are updated, after the user closes the options page. Starts and stops the live-view in the Start Program tab
     * \return void
     *
     */
    void tabChange();


    /** \brief Reads Options from Options.JSON and stores them in JSON-Object
     *
     * \param currentOptions json& JSON-Object that stores the read option
     * \return void
     *delimiter
     */
    void ReadOptionsFromJSON(json& currentOptions);


    /** \brief Reads the limits from OptionLimits.JSON
     *
     * \param optionLimits json& JSON-Object that stores the read limits
     * \return void
     *
     */
    void ReadLimitsFromJSON(json& optionLimits);


    /** \brief Shows an Error-Message with the given text
     *
     * \param text string text that should be displayed in the ErrorMessage
     * \return void
     *
     */
    void ShowParameterErrorMessage(string text);


    /** \brief Logs the given msg in the Console-View
     *
     * \param msg string
     * \return void
     *
     */
    void consoleLog(string msg);


    /** \brief Is called by Start CameraView - Button. Starts the background-service for cameraView
     *
     * \return void
     *
     */
    void startCameraView();


    /** \brief Is called by Stop CameraVie - Button. Stops the background-service for cameraView
     *
     * \return void
     *
     */
    void stopCameraView();


    /** \brief Generates Timestamp for Console-Logging
     *
     * \return string TimeStamp String in Format %Y-%m-%d-%H:%M:%S
     *
     */
    string generateTimestampString();


    /** \brief splits a string by the given delimiter
     *
     * \param readIN std::string String that should be split
     * \param delimiter const std::string& delimiter
     * \return std::vector<std::string> vector with split string
     *
     */
    std::vector<std::string> splitString(std::string readIN, const std::string& delimiter);

};

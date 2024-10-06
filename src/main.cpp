#include "MainWindow.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QErrorMessage>
#include <string>


int main(int argc, char *argv[])
{

    // Setup UI
    QApplication a(argc, argv);
    QMainWindow widget;
    MainWindow ui(&widget);
    widget.show();

    // Make sure the options are stored and the camera is disconnected before the program exits
    QObject::connect(&a, &QApplication::aboutToQuit, &a, [&]() {
        ui.GetAllOptions_JSON(ui.options_JSON);
        ui.SaveOptionsInJSON(ui.options_JSON);
        ui.cameraStream -> camera.Disconnect();
    });

    return a.exec();
}

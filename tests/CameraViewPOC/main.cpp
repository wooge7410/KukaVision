
#include "ui_mainwindow.h"
#include "CameraStream.h"

#include <QtWidgets/QApplication>
#include <QtCore/QObject>

#include <future>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow widget;
    Ui::MainWindow ui;
    ui.setupUi(&widget);

    widget.show();

    CameraStream cs("192.168.41.65");

    //QObject::connect(a, &QApplication::aboutToQuit, a, [&]() {ui.runCameraStream = false;});
    QObject::connect(&a, &QApplication::aboutToQuit, &a, [&]() {ui.runCameraStream = false;});

    //std::future<int> f = std::async(&CameraStream::startAcquisition, &cs, ui.LiveCameraView);
    //std::future<void> f = std::async(&CameraStream::acquisitionLoop, &cs, ui.LiveCameraView);


    return a.exec();
}

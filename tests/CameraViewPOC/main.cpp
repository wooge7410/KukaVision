
#include "ui_mainwindow.h"
#include "CameraStream.h"

#include <QtWidgets/QApplication>

#include <future>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow widget;
    Ui::MainWindow ui;
    ui.setupUi(&widget);

    widget.show();

    CameraStream cs("192.168.41.65");

    std::future<void> f = std::async(&CameraStream::acquisitionLoop, &cs, ui.LiveCameraView);


    return a.exec();
}

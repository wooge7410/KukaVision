
#include "ui_mainwindow.h"

#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow widget;
    Ui::MainWindow ui;
    ui.setupUi(&widget);
    ui.CameraIP->setText("Test1");
    ui.CameraIP->setText("Test2");

    widget.show();


    return a.exec();
}

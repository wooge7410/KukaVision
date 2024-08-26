#include "MainWindow.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QErrorMessage>
#include <string>


int main(int argc, char *argv[])
{
    /*
    Options currentOptions;
    ReadOptionsFromBinaryFile(currentOptions);
    QApplication a(argc, argv);
    QMainWindow widget;
    Ui::MainWindow ui;
    ui.setupUi(&widget);
    InitOptionspage(ui,currentOptions);//Puting 123 in each Line Edit for Testing on the Optionpage
    QObject::connect(ui.tabWidget, &QTabWidget::tabBarClicked, [&] {UpdateOptions(ui,currentOptions);}); //should save the Options when the page is changed Not 100% sure if the trigger is working
    QObject::connect(ui.folderDialogButton, &QAbstractButton::clicked, [&] {OpenFolderDialogImageData(ui);});
    QObject::connect(ui.findCameraButton, &QAbstractButton::clicked, [&] {OpenFindCameraDialog(ui);});
    QObject::connect(ui.getCoordinatesButton, &QAbstractButton::clicked, [&] {GetCoordinates(ui);});
    QObject::connect(ui.startRobotButton, &QAbstractButton::clicked, [&] {StartProgram(ui);});
    QObject::connect(ui.saveImageButton, &QAbstractButton::clicked, [&] {SaveImageFromLiveView(ui);});
    QObject::connect(ui.actionProject_Infos, &QAction::triggered, [&] {OpenProjectInfo(ui);});
    widget.show();
    return a.exec();
    */

    QApplication a(argc, argv);
    QMainWindow widget;
    MainWindow ui(&widget);
    widget.show();

    QObject::connect(&a, &QApplication::aboutToQuit, &a, [&]() {
        ui.GetAllOptions_JSON(ui.options_JSON);
        ui.SaveOptionsInJSON(ui.options_JSON);
    });

    //ui.GetAllOptions_JSON(ui.options_JSON);


    return a.exec();
}

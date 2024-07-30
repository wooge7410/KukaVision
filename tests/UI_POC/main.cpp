
#include "KukaVisionUIV1.h"
#include "KukaVisionUIExtension.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QFileDialog>
#include <string>
int main(int argc, char *argv[])
{
    Options currentOptions;
    QApplication a(argc, argv);
    QMainWindow widget;
    Ui::MainWindow ui;
    ui.setupUi(&widget);
    InitOptionspage(ui);//Puting 123 in each Line Edit for Testing
    QObject::connect(ui.tabWidget, &QTabWidget::currentChanged, [&] {UpdateOptions(ui,currentOptions);}); //should save the Options when the page is changed
    QObject::connect(ui.folderDialogButton, &QAbstractButton::clicked, [&] {OpenFolderDialogImageData(ui);});
    widget.show();
    return a.exec();
}

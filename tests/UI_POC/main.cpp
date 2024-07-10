
#include "KukaVisionUIV1.h"
#include "KukaVisionUIExtensionV1"
#include <QtWidgets/QApplication>
#include <string>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow widget;
    Ui::MainWindow ui;
    ui.setupUi(&widget);
    widget.show();
    return a.exec();
}


#include "KukaVisionUIV1.h"
#include "KukaVisionUIExtension.h"
#include <QtWidgets/QApplication>
#include <string>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow widget;
    Ui::MainWindow ui;
    ui.setupUi(&widget);
    QObject::connect(ui.tabWidget, &QTabWidget::currentChanged, [&] {OpenFolderDialogImageData(ui);});
    widget.show();
    return a.exec();
}

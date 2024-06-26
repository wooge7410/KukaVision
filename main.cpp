#include "FindCameraDialog.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FindCameraDialog fd();
    fd.dialog.show();

    return a.exec();
}


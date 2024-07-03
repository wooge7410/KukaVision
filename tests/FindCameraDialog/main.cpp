#include "FindCameraDialog.h"

#include <QtWidgets/QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FindCameraDialog fd;
    fd.dialog.show();
    std::cout << "\nSelectedIP: "<< fd.selectedIP;
    return 0;}


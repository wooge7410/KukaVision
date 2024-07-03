#include "FindCameraDialog.h"

#include <QtWidgets/QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FindCameraDialog fd;

    std::cout << "\nSelectedIP: "<< fd.selectedIP;
    return 0;}


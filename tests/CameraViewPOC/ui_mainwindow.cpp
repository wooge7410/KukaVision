#include "ui_mainwindow.h"

void Ui_MainWindow::onFindCameraClicked() {
    FindCameraDialog fcd;
    CameraIP -> setText(QString::fromStdString(fcd.selectedIP));

    CameraStream cs(fcd.selectedIP);

    runCameraStream = true;

    f = std::async(&CameraStream::startAcquisition, &cs, LiveCameraView, &runCameraStream);
}

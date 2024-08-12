#include "ui_mainwindow.h"

void Ui_MainWindow::onFindCameraClicked() {
    FindCameraDialog fcd;
    CameraIP -> setText(QString::fromStdString(fcd.selectedIP));

    cs = new CameraStream(fcd.selectedIP);

    runCameraStream = true;

    f = std::async(&CameraStream::acquisitionLoop, cs, LiveCameraView, &runCameraStream);
}

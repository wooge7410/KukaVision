#include "CameraStream.h"

CameraStream::CameraStream(string identifier)  {    //NoAccessException, NotConnectedException
    while(!camera.IsConnected()) {
        camera.Connect(NeoString(identifier.c_str()));
    }

    camera.f().TriggerMode = TriggerMode::Off;
    camera.f().AcquisitionMode.Set(AcquisitionMode::Continuous);
    camera.f().AcquisitionStart;

    type = CV_8U;
    isColor = true;

    if (camera.f().PixelFormat.GetEnumValueList().IsReadable("BGR8")) {
        camera.f().PixelFormat.SetString("BGR8");
        type = CV_8UC3;
        isColor = true;
    }else if (camera.f().PixelFormat.GetEnumValueList().IsReadable("Mono8")) {
        camera.f().PixelFormat.SetString("Mono8");
        type = CV_8UC1;
        isColor = false;
    } else {
        throw "Invalid Pixel Format";
    }
    cout << camera.IsConnected()<< endl;


    width = camera.f().Width;
    height = camera.f().Height;
}


void CameraStream::acquisitionLoop(QLabel *view) {
    cout << "Thread Start\n";
    cout << camera.IsConnected()<< endl;


    camera.f().TriggerMode = TriggerMode::Off;
    camera.f().AcquisitionMode.Set(AcquisitionMode::Continuous);
    camera.f().AcquisitionStart;


    for (int count = 0; count < 10000; count++) {
        Image image;
        do {
            camera.f().AcquisitionStart;
            image = camera.GetImage();
            //cout << image.IsEmpty()<< "," << width << "," << height << endl;
            //cout << camera.IsConnected()<< endl;
        } while (image.IsEmpty());
        latestImage = Mat(Size(width, height), type, image.GetImageData(), Mat::AUTO_STEP);


        if (count % 1 == 0) {
            QImage img = QImage(latestImage.data, latestImage.cols, latestImage.rows, latestImage.step, QImage::Format_Grayscale8).copy();
            QPixmap pixmap = QPixmap::fromImage(img);
            //QPixmap pixmap = QPixmap::fromImage(matToQImage(latestImage));
            view->setPixmap(pixmap);
        }
    }
    cout << "Thread End \n";
}


int CameraStream::startAcquisition(QLabel *view) {
    return 0;
}


int CameraStream::stopAcquisition() {
    return 0;
}


int CameraStream::acquisitionStatus() {
    return 0;
}


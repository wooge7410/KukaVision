#include "CameraStream.h"

CameraStream::CameraStream(string identifier)  {    //NoAccessException, NotConnectedException

    while(!camera.IsConnected()) {
        camera.Connect(NeoString(identifier.c_str()));
    }
    //camera.Connect(NeoString(identifier.c_str()));

    camera.StopStreaming();

    camera.f().TriggerMode = TriggerMode::Off;
    camera.f().AcquisitionMode.Set(AcquisitionMode::Continuous);
    camera.f().ExposureAuto.Set(ExposureAuto::Continuous);
    camera.f().AcquisitionFrameRateEnable.Set(true);
    camera.f().AcquisitionFrameRate.Set(1);
    camera.SetImageBufferCount(2);
    camera.SetImageBufferCycleCount(1);
    camera.SetUserBufferMode(false);
    camera.f().BinningHorizontalMode.Set(BinningHorizontalMode::Average);
    camera.f().BinningVerticalMode.Set(BinningVerticalMode::Average);
    camera.f().BinningHorizontal.Set(1);
    camera.f().BinningVertical.Set(1);




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
    cout << "Conncted: " << camera.IsConnected() << endl;

    //camera.f().AcquisitionStart;

    width = camera.f().Width;
    height = camera.f().Height;

    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;

}


void CameraStream::acquisitionLoop(QLabel *view, bool *run) {
    cout << "Thread Start\n";
    cout << "Connected: " << camera.IsConnected()<< endl;
    cout << "Run: " << *run << endl;
    camera.StartStreaming();
    //Image image;
    //QImage img;
    //QPixmap pixmap;

    while (*run) {

        Image image = camera.GetImage();
        /*while (image.IsEmpty()) {
            image = camera.GetImage();
        }*/

        if (!image.IsEmpty()) {            latestImage = Mat(Size(width, height), type, image.GetImageData(), Mat::AUTO_STEP);
            QImage img = QImage((uchar*)image.GetImageData(), width, height, QImage::Format_Grayscale8).copy();
            //img = QImage(latestImage.data, latestImage.cols, latestImage.rows, latestImage.step, QImage::Format_Grayscale8).copy();
            QPixmap pixmap = QPixmap::fromImage(img);
            //QPixmap pixmap = QPixmap::fromImage(matToQImage(latestImage));
            view->setPixmap(pixmap);
            view->show();
        }

        //usleep(10000000);

    }
    cout << "Thread End \n";
}



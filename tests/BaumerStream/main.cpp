
#include <string.h>
#include <iostream>
#include "neoapi/neoapi.hpp"

/*
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>

#include <QtWidgets/QLabel>
#include <QtGui/QImage>

#include <future>
*/
using namespace NeoAPI;
using namespace std;
//using namespace cv;

int main() {
    Cam camera = Cam();
    camera.Connect("192.168.41.65");

    while(true) {
        cout << "Loop "<< endl;
    };
    return 0;
}

/*
int type;
bool isColor;
int width;
int height;
Mat latestImage;
time_t latestImageTimestamp;
float bufferRate;
Cam camera;

void acquisitionLoop(bool *run) {
    cout << "Thread Start\n";
    cout << "Connected: " << camera.IsConnected()<< endl;
    cout << "Run: " << *run << endl;

    while (*run) {
        cout << "Loop 0\n";
        Image image;
        do {
            cout << "Loop 1\n";
            image = camera.GetImage();
            //cout << image.IsEmpty()<< "," << width << "," << height << endl;
            //cout << camera.IsConnected()<< endl;
        } while (image.IsEmpty());
        cout << "Loop 2\n";
        latestImage = Mat(Size(width, height), type, image.GetImageData(), Mat::AUTO_STEP);

        QImage img = QImage(latestImage.data, latestImage.cols, latestImage.rows, latestImage.step, QImage::Format_Grayscale8).copy();
        //Pixmap pixmap = QPixmap::fromImage(img);
        //QPixmap pixmap = QPixmap::fromImage(matToQImage(latestImage));
        //view->setPixmap(pixmap);
        cout << "Loop 3\n";

    }
    cout << "Thread End \n";
}

int main() {





    string identifier = "192.168.41.65";

    while(!camera.IsConnected()) {
        camera.Connect(NeoString(identifier.c_str()));
    }

    camera.f().TriggerMode = TriggerMode::Off;
    camera.f().AcquisitionMode.Set(AcquisitionMode::Continuous);
    camera.f().ExposureAuto.Set(ExposureAuto::Continuous);
    camera.f().AcquisitionFrameRateEnable.Set(true);
    camera.f().AcquisitionFrameRate.Set(100);

    camera.f().AcquisitionStart;


    cout << "Acquisition Mode: " << camera.f().AcquisitionMode.GetString().c_str() << endl;
    cout << "Trigger Delay: "  << camera.f().TriggerDelay.GetString().c_str() << endl;
    cout << "Trigger Source: " << camera.f().TriggerSource.GetString().c_str() << endl;
    cout << "Trigger Overlap: " << camera.f().TriggerOverlap.GetString().c_str() << endl;
    cout << "Trigger Activation: " << camera.f().TriggerActivation.GetString().c_str() << endl;
    cout << "FrameRateEnabled: "  << camera.f().AcquisitionFrameRateEnable.GetString().c_str() << endl;
    cout << "Frame Rate: " << camera.f().AcquisitionFrameRate.GetString().c_str() << endl;


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


    width = camera.f().Width;
    height = camera.f().Height;

    bool run = true;
    future<void> f = std::async(&acquisitionLoop, &run);


    return 0;
}




    /*

    cout << "Loop start \n";

    while (true) {
        cout << "Loop 0\n";
        Image image;
        do {
            cout << "Loop 1\n";
            //camera.f().AcquisitionStart;
            image = camera.GetImage();
            //cout << image.IsEmpty()<< "," << width << "," << height << endl;
            //cout << camera.IsConnected()<< endl;
        } while (image.IsEmpty());
        cout << "Loop 2\n";
        cout << "------------------------------------------------\n";
        //latestImage = Mat(Size(width, height), type, image.GetImageData(), Mat::AUTO_STEP);

        //QImage img = QImage(latestImage.data, latestImage.cols, latestImage.rows, latestImage.step, QImage::Format_Grayscale8).copy();
        //QPixmap pixmap = QPixmap::fromImage(img);
        //QPixmap pixmap = QPixmap::fromImage(matToQImage(latestImage));
        //view->setPixmap(pixmap);
        cout << "Loop 3\n\n";

    }


    return 0;
}

*/

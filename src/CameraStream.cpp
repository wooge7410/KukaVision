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

    camera.f().GainAuto.Set(GainAuto::Off);
    camera.f().Gain.Set(1.2);




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

    //camera.f().AcquisitionStart;

    width = camera.f().Width;
    height = camera.f().Height;

}


void CameraStream::acquisitionLoop(QLabel *view, bool *run, bool outlines, bool coordinates) {
    camera.StartStreaming();
    //Image image;
    //QImage img;
    //QPixmap pixmap;
    ObjectDetails objectDetails;
    Mat base = imread("/home/kukavision/KukaVision/repo/KukaVision/main/0B_blank.png", IMREAD_GRAYSCALE);
    Mat cvIm;

    while (*run) {

        Image image = camera.GetImage();
        /*while (image.IsEmpty()) {
            image = camera.GetImage();
        }*/

        if (!image.IsEmpty()) {
            cout << "Image\n";            latestImage = Mat(Size(width, height), type, image.GetImageData(), Mat::AUTO_STEP);
            cout << "find&draw\n";
            cvIm = findAndDrawObjects(base, latestImage, objectDetails);

            for (int i = 0; i < 4; ++i) {
                line(cvIm, objectDetails.getCorner(i), objectDetails.getCorner((i+1)%4), Scalar(25, 173, 255), 3);
            }


            if (objectDetails.isValid()) {
                cout << "Object Center: (" << objectDetails.getCenter().x << ", " << objectDetails.getCenter().y << ")" << endl;
                Point2f frameOriginRobC;
                frameOriginRobC.x = 731.18 - 63.6 * (386.66 - 731.18)/(988.8 - 63.6);
                frameOriginRobC.y = 137.88 - 20.9 * (386.33 - 137.88)/(693.6 - 20.9); //20
                Point2f scaledCenter = objectDetails.getCenter();
                scaledCenter.x = (scaledCenter.x ) * - (386.66 - 731.18)/(988.8 - 63.6);
                scaledCenter.y = scaledCenter.y * (386.33 - 137.88)/(693.6 - 20.9);
                //cout << "Frame Origin: (" << frameOriginRobC.x << ", " << frameOriginRobC.y << ")" << endl;
                Point2f centerRobCoords = coordinateTransform(-0.686, frameOriginRobC, scaledCenter); //objectDetails.getCenter()
                objectDetails.setCenter(centerRobCoords);
                latestObject = objectDetails;
                //cout << "Robot Coordinates: (" << centerRobCoords.x << ", " << centerRobCoords.y << ")" << endl;
                //cout << "Object Angle: " << objectDetails.getAngle() << " degrees" << endl;
            } else {
                cout << "No valid object details available." << endl;
            }

            QImage img;
            if (outlines) img = QImage(cvIm.data, cvIm.cols, cvIm.rows, cvIm.step, QImage::Format_BGR888).copy();
            else img = QImage((uchar*)image.GetImageData(), width, height, QImage::Format_Grayscale8).copy();
            QPixmap pixmap = QPixmap::fromImage(img);
            //QPixmap pixmap = QPixmap::fromImage(matToQImage(latestImage));
            view->setPixmap(pixmap);
            view->show();
            latestImageTimestamp = time(NULL);
        }

        //usleep(10000000);

    }
    camera.StopStreaming();

}


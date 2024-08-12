#ifndef CAMERASTREAM_H
#define CAMERASTREAM_H

#include <string.h>
#include "neoapi/neoapi.hpp"
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>

#include <QtWidgets/QLabel>
#include <QtGui/QImage>

#include <thread>
#include <future>

using namespace std;
using namespace NeoAPI;
using namespace cv;


class CameraStream
{
    public:
        CameraStream(string identifier);
        void startAcquisition(QLabel *view, bool *run);
        void acquisitionLoop(QLabel *view, bool *run);
        int stopAcquisition();
        int acquisitionStatus();

        Cam camera;
        Mat latestImage;
        time_t latestImageTimestamp;
        float bufferRate;

    protected:

    private:
        int type;
        bool isColor;
        int width;
        int height;

};

#endif // CAMERASTREAM_H

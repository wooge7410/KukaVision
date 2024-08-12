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
#include <unistd.h>


using namespace std;
using namespace NeoAPI;
using namespace cv;


class CameraStream
{
    public:
        CameraStream(string identifier);
        void acquisitionLoop(QLabel *view, bool *run);

        Cam camera = Cam();
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

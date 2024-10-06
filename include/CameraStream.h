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
#include <ctime>
#include "object_detection.h"


using namespace std;
using namespace NeoAPI;
using namespace cv;


/** \brief Class coordinates the connection to the camera, the object detection and the display of the latest image in a QLabel
 */
class CameraStream
{
    public:

        /** \brief Constructor sets up the connection the camera
         *
         * \param identifier string IP-Address of the camera that should be connected
         *
         */
        CameraStream(string identifier);


        /** \brief loop that gets newest image from cam and runs image detection
         *
         * \param view QLabel* Label that is used for displaying the image
         * \param run bool* stops the loop
         * \param outlines bool if true, the outline of the detected object is displayed in the QLabel
         * \param coordinates bool if true, the center-coordinates are displayed in the QLabel (Not implemented)
         * \return void
         *
         */
        void acquisitionLoop(QLabel *view, bool *run, bool outlines, bool coordinates);

        Cam camera = Cam(); /**< NeoAPI Camera Object */
        Mat latestImage; /**< Stores the latest Image received from the camera */
        time_t latestImageTimestamp; /**< Timestamp of the last received image */
        ObjectDetails latestObject; /**< Object Details(Coordinates, angle, etc.) of the latest received object */
    protected:

    private:
        int type; /**< Image type, required for image conversion */
        bool isColor; /**<  describes whether the camera is monochrome or color*/
        int width; /**<  Image Width */
        int height; /**<  Image Height */

};

#endif // CAMERASTREAM_H

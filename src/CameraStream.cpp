#include "CameraStream.h"

// Constructor
CameraStream::CameraStream(string identifier)  {    //NoAccessException, NotConnectedException

    // Try to connect to camera until an attempt is successfull

    while(!camera.IsConnected()) {
// TODO (kukavision#1#): Add abort-criteria (e.g. maximum number of connection attempts)
        camera.Connect(NeoString(identifier.c_str()));
    }

    camera.StopStreaming(); // Stops the camera from continuously sending images

    camera.f().TriggerMode = TriggerMode::Off; // Disable Camera-Triggers
    camera.f().AcquisitionMode.Set(AcquisitionMode::Continuous); // Enables continuous Acquisition mode. Needed for video-like stream
    camera.f().ExposureAuto.Set(ExposureAuto::Continuous); // Automatic Exposure
    camera.f().AcquisitionFrameRateEnable.Set(true); // Enables to dictate Acquisition-Framerate

// TODO (kukavision#1#): Use the Framerate definded in the options-page
// TODO (kukavision#1#): analyze high CPU-usage at increased framerates
    camera.f().AcquisitionFrameRate.Set(1); // Set framerate to one frame per second. Higher Frame rates might increase CPU-Usage to 100% and block software.
    camera.SetImageBufferCount(2); // Sets local image-buffers to 2 (Standard is 10). If RAM-Usage is critical, one should suffice, since only the latest image is used
    camera.SetImageBufferCycleCount(1); // Buffer is cycled every new image
    camera.SetUserBufferMode(false); // Disable custom image-buffer. Might be used to decrease execution time, if opencv-detection can access the buffer directly
    camera.f().BinningHorizontalMode.Set(BinningHorizontalMode::Average); // Binning-Mode in Average. Improves Signal to noise ratio (SNR)
    camera.f().BinningVerticalMode.Set(BinningVerticalMode::Average);     // If higher sensitivity is needed, other Binning-Modes might be used

// TODO (kukavision#1#): Use Binning defined in the Options-Menu
    camera.f().BinningHorizontal.Set(1);
// TODO (kukavision#1#): Use Binning defined in the Options-Menu
    camera.f().BinningVertical.Set(1);

    camera.f().GainAuto.Set(GainAuto::Off); // Gain set to manual, because in some lighting-conditions auto-gain proved unreliable
// TODO (kukavision#1#): Use Gain set in the options-menu
    camera.f().Gain.Set(1.0);



// Set Pixel-Format. This code-block is theoretically only needed if different types of Cameras are used
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

    // Store camera width & height
    width = camera.f().Width;
    height = camera.f().Height;

}

// Loop provides live-view in UI
void CameraStream::acquisitionLoop(QLabel *view, bool *run, bool outlines, bool coordinates) {
    camera.StartStreaming(); // Start camera-stream. Camera sends images continuously to PC

    ObjectDetails objectDetails; // Stores the details of the detected objects
// TODO (kukavision#1#): Enable user to select path of reference image
    Mat base = imread("/home/kukavision/KukaVision/repo/KukaVision/main/0B_blank.png", IMREAD_GRAYSCALE); // Reference-image for workarea is loaded from file
    Mat cvIm; // Buffer for image with marked objects

    while (*run) { // Run loop until run is set to false

        Image image = camera.GetImage(); // Get newest from camera-buffer

        if (!image.IsEmpty()) { // If no new image has been captured, don't do anything
            cout << "Image\n";            latestImage = Mat(Size(width, height), type, image.GetImageData(), Mat::AUTO_STEP); // Convert NeoAPI-Image to Opencv-Image
            cout << "find&draw\n";
            cvIm = findAndDrawObjects(base, latestImage, objectDetails); // Detect objects and mark them in image
// TODO (kukavision#1#): Mark coordinates in Image, if user requires it

            // Mark the object that has been detected last in orange (So the user knows, which object is picked by the robot, if multiple are detected)
            for (int i = 0; i < 4; ++i) {
                line(cvIm, objectDetails.getCorner(i), objectDetails.getCorner((i+1)%4), Scalar(25, 173, 255), 3);
            }


            if (objectDetails.isValid()) { // If Validity is confirmed (not currently implemented), the coordinates in robot-coordinates are calculated
                cout << "Object Center: (" << objectDetails.getCenter().x << ", " << objectDetails.getCenter().y << ") Angle: " << objectDetails.getAngle() << endl;
                Point2f frameOriginRobC; // Origin of the metal-frame in the workspace in robot-coordinates
                /*
                    Calibration procedure:
                     - place cubes in the corners of the metal frame & note the coordinates
                       (try only to move the robot along one axis at a time)
                     - move the robot out of the way
                     - detect the frame-coordinates in software and note them
                */
                frameOriginRobC.x = 731.18 - 63.6 * (386.66 - 731.18)/(988.8 - 63.6);
                /*
                    731.18 := Cube coordinates in robot-coordinate system
                    63.6 := Cube coordinates in Frame-Coordinates
                    (386.66 - 731.18)/(988.8 - 63.6) := Scaling of Image-Coordinates into Robot-Coordinates
                */
                frameOriginRobC.y = 137.88 - 20.9 * (386.33 - 137.88)/(684.4 - 20.9);
                Point2f scaledCenter = objectDetails.getCenter();
                scaledCenter.x = (scaledCenter.x) *  (386.66 - 731.18)/(988.8 - 63.6); // Scale the detected object-center, so that it has the same scale as the robot-coordinates
                scaledCenter.y = scaledCenter.y * (386.33 - 137.88)/(684.4 - 20.9);
// TODO (kukavision#1#): Automation of Calibration-Procedure

                Point2f centerRobCoords = coordinateTransform(0, frameOriginRobC, scaledCenter); // Transformation of scaled-Frame-Coordinates to robot-coordinates
                objectDetails.setCenter(centerRobCoords);
                latestObject = objectDetails; // Attribute latestObject is set to the currently detected object

            } else {
// TODO (kukavision#1#): Errorhandling
                cout << "No valid object details available." << endl;
            }

            QImage img;
            if (outlines) img = QImage(cvIm.data, cvIm.cols, cvIm.rows, cvIm.step, QImage::Format_BGR888).copy(); // Conversion of the modified camera image to QImage
            else img = QImage((uchar*)image.GetImageData(), width, height, QImage::Format_Grayscale8).copy(); // If no outlines are requested, the camera Image is used instead
            QPixmap pixmap = QPixmap::fromImage(img); // Conversion of QImage to QPixmap for display in label

            view->setPixmap(pixmap); // Display current Image in UI
            view->show();
            latestImageTimestamp = time(NULL); // Generate a Timestamp of the latest Image
        }


    }
    camera.StopStreaming(); // If the loop is stopped, the streaming is aborted

}


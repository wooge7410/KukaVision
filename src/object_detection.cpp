#include "object_detection.h"

using namespace cv;
using namespace std;

Mat findAndDrawObjects(const Mat& grayBase, const Mat& grayTest, ObjectDetails& objectDetails) {
    Mat bgrTest; // Testimage needs to be converted to BGR for display in UI. Otherwise the markings of objects would be grayscale aswell
    cvtColor(grayTest, bgrTest, COLOR_GRAY2BGR); // image conversion

    Mat brightAreas;
    threshold(grayTest, brightAreas, 180, 255, THRESH_BINARY); // Threshold for the detection of the metal-frame in the workare
    vector<vector<Point>> sheetContours;
    findContours(brightAreas, sheetContours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE); // find all contours within the threshold in the test-image

    Mat output = bgrTest.clone();

    RotatedRect sheetRect;
    Point2f sheetRectPoints[4];

    if (!sheetContours.empty()) {
        sort(sheetContours.begin(), sheetContours.end(), [](const vector<Point>& a, const vector<Point>& b) { // Sort the detected contours by size
            return contourArea(a) > contourArea(b);
        });
        vector<Point> largestSheetContour = sheetContours[0]; // The largest contour should be the metal frame

        sheetRect = minAreaRect(largestSheetContour); // Finds the smallest rectangle within the contour
        sheetRect.points(sheetRectPoints);
        for (int j = 0; j < 4; j++) { // marks the frame in the image
            line(output, sheetRectPoints[j], sheetRectPoints[(j+1)%4], Scalar(0, 0, 255), 2);
        }
        float sheetAngle = sheetRect.angle;
        if (sheetRect.size.width < sheetRect.size.height) { // makes sure the sheet has a wider width than height
            sheetAngle += 90;
        }
    }

    // Find the Corner of the sheet, closest to the image-origin
    Point2f sheetBase = sheetRectPoints[0];
    for (int i = 1; i < 4; i++) {
        if(sheetRectPoints[i].x < sheetBase.x || sheetRectPoints[i].y < sheetBase.y) {
            sheetBase = sheetRectPoints[i];
        }
    }
    sheetBase.x = - sheetBase.x; //Invert, to get Image-Origin in Frame-Coordinates
    sheetBase.y = - sheetBase.y;


    Mat diff;
    absdiff(grayBase, grayTest, diff); // Calculate the difference between test- and baseimage
    threshold(diff, diff, 180, 255, THRESH_BINARY); // Threshold for the object-detection
    Mat kernel = getStructuringElement(MORPH_ELLIPSE, Size(5, 5));
    morphologyEx(diff, diff, MORPH_CLOSE, kernel); // Reduces Noise in the image

    vector<vector<Point>> contours;
    findContours(diff, contours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE); // Detects contours in the image

    for (const auto& contour : contours) {
        if (contourArea(contour) > 4500) { // Make sure noise is not accidentally detected as object
            RotatedRect rotatedRect = minAreaRect(contour);
            Point2f rectPoints[4];
            rotatedRect.points(rectPoints);

            for (int i = 0; i < 4; ++i) { // Store object corners and mark them (and the edges) in the image
                objectDetails.setCorner(i, rectPoints[i]);
                line(output, rectPoints[i], rectPoints[(i+1)%4], Scalar(0, 255, 0), 2);
                circle(output, rectPoints[i], 5, Scalar(255, 255, 0), -1);
            }
            Point2f center = rotatedRect.center;
            circle(output, center, 5, Scalar(255, 0, 0), -1); // Mark the object-center

            // Calculate vectors that indicate the orientation of the object
            Vec2f majorAxis(cos(rotatedRect.angle * CV_PI / 180.0), sin(rotatedRect.angle * CV_PI / 180.0));
            Vec2f minorAxis(-majorAxis[1], majorAxis[0]);

            // Mark calculated vectors
            line(output, center, Point(center.x + majorAxis[0] * 100, center.y + majorAxis[1] * 100), Scalar(255, 0, 0), 2);
            line(output, center, Point(center.x + minorAxis[0] * 100, center.y + minorAxis[1] * 100), Scalar(0, 0, 255), 2);


            float angleToXAxis = abs(rotatedRect.angle);
            float angleToYAxis = abs(90 - abs(rotatedRect.angle));


            float minAngle = angleToXAxis; // Calculation of the minimum angle was dropped, because robot only uses the rotation relative to X


            Point2f transformedCenter = coordinateTransform(sheetRect.angle, sheetBase, center); // Transform coordinates from pixel-coordinates to frame-coordinates

            objectDetails.setAngle(minAngle - sheetRect.angle); // Set object-angle to the angle relative to the metal-frame
            objectDetails.setCenter(transformedCenter); // Object-center is replaced by the coordinates in frame-coordinates
                                                        // Corner-Coordinates are kept in pixel-coordinates because they may be used for later markings
            objectDetails.setValid(true); // Validity is not implemented (could e.g. refer to object size or color)
        }
    }
    return output;
}

Point2f coordinateTransform(float angle, Point2f VA, Point2f PB) {
    Point2f PA;

    float degRad = CV_PI/180.0; // Factor for converting degrees in RAD
    float R_AB[2][2] = {{cos(angle * degRad), sin(angle * degRad)}, {-sin(angle * degRad), cos(angle * degRad)}}; // Rotation-Matrix
    PA.x = R_AB[0][0] * PB.x + R_AB[0][1] * PB.y + VA.x; // Transformation according to rotation-matrix and translation of coordinate-systems
    PA.y = R_AB[1][0] * PB.x + R_AB[1][1] * PB.y + VA.y;

    return PA;
}

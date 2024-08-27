#include "object_detection.h"

using namespace cv;
using namespace std;

Mat findAndDrawObjects(const Mat& grayBase, const Mat& grayTest, ObjectDetails& objectDetails) {
    /*
    Mat grayBase, grayTest;
    cout << "1\n";
    cvtColor(base, grayBase, COLOR_BGR2GRAY);
    cout << "1\n";
    cvtColor(test, grayTest, COLOR_BGR2GRAY);
    cout << "1\n";
    */
    Mat bgrTest;
    cvtColor(grayTest, bgrTest, COLOR_GRAY2BGR);

    Mat brightAreas;
    threshold(grayTest, brightAreas, 180, 255, THRESH_BINARY);
    vector<vector<Point>> sheetContours;
    findContours(brightAreas, sheetContours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

    Mat output = bgrTest.clone();

    RotatedRect sheetRect;
    Point2f sheetRectPoints[4];

    if (!sheetContours.empty()) {
        sort(sheetContours.begin(), sheetContours.end(), [](const vector<Point>& a, const vector<Point>& b) {
            return contourArea(a) > contourArea(b);
        });
        vector<Point> largestSheetContour = sheetContours[0];

        sheetRect = minAreaRect(largestSheetContour);
        sheetRect.points(sheetRectPoints);
        for (int j = 0; j < 4; j++) {
            line(output, sheetRectPoints[j], sheetRectPoints[(j+1)%4], Scalar(0, 0, 255), 2);
        }
        float sheetAngle = sheetRect.angle;
        if (sheetRect.size.width < sheetRect.size.height) {
            sheetAngle += 90;
        }
        //cout << "Sheet angle with respect to Y-axis: " << sheetAngle << " degrees" << endl;
    }

    Mat diff;
    absdiff(grayBase, grayTest, diff);
    threshold(diff, diff, 180, 255, THRESH_BINARY);
    Mat kernel = getStructuringElement(MORPH_ELLIPSE, Size(5, 5));
    morphologyEx(diff, diff, MORPH_CLOSE, kernel);

    vector<vector<Point>> contours;
    findContours(diff, contours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

    for (const auto& contour : contours) {
        if (contourArea(contour) > 4500) {
            RotatedRect rotatedRect = minAreaRect(contour);
            Point2f rectPoints[4];
            rotatedRect.points(rectPoints);

            for (int i = 0; i < 4; ++i) {
                objectDetails.setCorner(i, rectPoints[i]);
                line(output, rectPoints[i], rectPoints[(i+1)%4], Scalar(0, 255, 0), 2);
                circle(output, rectPoints[i], 5, Scalar(255, 255, 0), -1);
            }
            Point2f center = rotatedRect.center;
            circle(output, center, 5, Scalar(255, 0, 0), -1);

            // Cálculo de los ejes mayor y menor
            Vec2f majorAxis(cos(rotatedRect.angle * CV_PI / 180.0), sin(rotatedRect.angle * CV_PI / 180.0));
            Vec2f minorAxis(-majorAxis[1], majorAxis[0]);

            line(output, center, Point(center.x + majorAxis[0] * 100, center.y + majorAxis[1] * 100), Scalar(255, 0, 0), 2);
            line(output, center, Point(center.x + minorAxis[0] * 100, center.y + minorAxis[1] * 100), Scalar(0, 0, 255), 2);

            // Calcular ángulos con respecto a los ejes X e Y
            float angleToXAxis = abs(rotatedRect.angle);  // Ángulo respecto al eje X
            float angleToYAxis = abs(90 - abs(rotatedRect.angle));  // Ángulo respecto al eje Y

            // Imprimir el ángulo más pequeño
            float minAngle = min(angleToXAxis, angleToYAxis);
            //cout << "Object center: (" << center.x << ", " << center.y << ") with minimum angle: " << minAngle << " degrees" << endl;


            for (int i = 0; i < 4; i++) {
                cout << "SheetCorners X: " << sheetRectPoints[i].x << " Y: " << sheetRectPoints[i].y << endl;

            }
            Point2f sheetBase = sheetRectPoints[0];
            for (int i = 1; i < 4; i++) {
                if(sheetRectPoints[i].x < sheetBase.x || sheetRectPoints[i].y < sheetBase.y) {
                    sheetBase = sheetRectPoints[i];
                }
            }

            cout << "Selected Corner X: " << sheetBase.x << " Y: " << sheetBase.y << endl;

            sheetBase.x = - sheetBase.x;
            sheetBase.y = - sheetBase.y;
            Point2f testTransform = coordinateTransform(sheetRect.angle, sheetBase, center);
            cout << "X: " << testTransform.x << "   Y: " << testTransform.y << endl;

            objectDetails.setAngle(minAngle);
            objectDetails.setCenter(center);
            objectDetails.setValid(true);
        }
    }
    return output;
    //imshow("Detected Objects", output);
    //waitKey(0);
}

Point2f coordinateTransform(float angle, Point2f VA, Point2f PB) {
    Point2f PA;

    float degRad = CV_PI/180.0;
    float R_AB[2][2] = {{cos(angle * degRad), sin(angle * degRad)}, {-sin(angle * degRad), cos(angle * degRad)}};
    PA.x = R_AB[0][0] * PB.x + R_AB[0][1] * PB.y + VA.x;
    PA.y = R_AB[1][0] * PB.x + R_AB[1][1] * PB.y + VA.y;

    return PA;
}

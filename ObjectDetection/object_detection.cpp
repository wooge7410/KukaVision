#include "object_detection.h"
#include <iostream>
#include <cmath>

using namespace cv;
using namespace std;

void findAndDrawObjects(const Mat& base, const Mat& test, ObjectDetails& objectDetails) {
    Mat grayBase, grayTest;
    cvtColor(base, grayBase, COLOR_BGR2GRAY);
    cvtColor(test, grayTest, COLOR_BGR2GRAY);

    Mat brightAreas;
    threshold(grayTest, brightAreas, 180, 255, THRESH_BINARY);
    vector<vector<Point>> sheetContours;
    findContours(brightAreas, sheetContours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

    Mat output = test.clone();

    if (!sheetContours.empty()) {
        sort(sheetContours.begin(), sheetContours.end(), [](const vector<Point>& a, const vector<Point>& b) {
            return contourArea(a) > contourArea(b);
        });
        vector<Point> largestSheetContour = sheetContours[0];

        RotatedRect sheetRect = minAreaRect(largestSheetContour);
        Point2f sheetRectPoints[4];
        sheetRect.points(sheetRectPoints);
        for (int j = 0; j < 4; j++) {
            line(output, sheetRectPoints[j], sheetRectPoints[(j+1)%4], Scalar(0, 0, 255), 2);
        }
        float sheetAngle = sheetRect.angle;
        if (sheetRect.size.width < sheetRect.size.height) {
            sheetAngle += 90;
        }
        cout << "Sheet angle with respect to Y-axis: " << sheetAngle << " degrees" << endl;
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
            cout << "Object center: (" << center.x << ", " << center.y << ") with minimum angle: " << minAngle << " degrees" << endl;
        }
    }

    imshow("Detected Objects", output);
    waitKey(0);
}

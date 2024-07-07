#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void findAndDrawObjects(const Mat& base, const Mat& test) {
    Mat grayBase, grayTest;
    cvtColor(base, grayBase, COLOR_BGR2GRAY);
    cvtColor(test, grayTest, COLOR_BGR2GRAY);

    // Enhanced preprocessing by applying morphological opening to remove shadows
    Mat kernel = getStructuringElement(MORPH_ELLIPSE, Size(5, 5));
    morphologyEx(grayTest, grayTest, MORPH_OPEN, kernel);

    Mat diff;
    absdiff(grayBase, grayTest, diff);
    threshold(diff, diff, 170, 255, THRESH_BINARY);

    // Further clean up using a larger kernel
    morphologyEx(diff, diff, MORPH_CLOSE, kernel);

    vector<vector<Point>> contours;
    findContours(diff, contours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

    Mat output = test.clone();
    if (!contours.empty()) {
        vector<Point> largestContour;
        double maxArea = 0;
        for (auto &contour : contours) {
            double area = contourArea(contour);
            if (area > maxArea) {
                maxArea = area;
                largestContour = contour;
            }
        }

        // Approximate contour to polygon
        vector<Point> poly;
        double epsilon = 0.01 * arcLength(largestContour, true);
        approxPolyDP(largestContour, poly, epsilon, true);

        // Draw the polygon
        drawContours(output, vector<vector<Point>>{poly}, -1, Scalar(0, 255, 0), 2);

        // Draw and print all corners
        for (const auto& point : poly) {
            circle(output, point, 5, Scalar(255, 255, 0), -1);
            cout << "Corner at: (" << point.x << ", " << point.y << ")" << endl;
        }

        // Calculate and draw the center using moments
        Moments m = moments(largestContour);
        int cx = int(m.m10 / m.m00);
        int cy = int(m.m01 / m.m00);
        circle(output, Point(cx, cy), 5, Scalar(255, 0, 0), -1);
        cout << "Object center at: (" << cx << ", " << cy << ")" << endl;
    }

    imshow("Detected Objects", output);
    waitKey(0);
}

int main() {
    Mat base = imread("/home/kukavision/KukaVision/repo/KukaVision/NeoAPI_Test/240626-2.bmp", IMREAD_COLOR);
    Mat test = imread("/home/kukavision/KukaVision/repo/KukaVision/NeoAPI_Test/240626-1.bmp", IMREAD_COLOR);


    if (base.empty() || test.empty()) {
        cout << "Error loading the images" << endl;
        return -1;
    }

    findAndDrawObjects(base, test);
    return 0;
}

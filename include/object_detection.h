#ifndef OBJECT_DETECTION_H
#define OBJECT_DETECTION_H

#include <opencv2/opencv.hpp>
#include "ObjectDetails.h"
#include <iostream>
#include <cmath>


// Declaraciones de funciones
void drawRectAndAxes(cv::Mat& image, ObjectDetails& objectDetails);
cv::Mat findAndDrawObjects(const cv::Mat& base, const cv::Mat& test, ObjectDetails& objectDetails);

cv::Point2f coordinateTransform(float angle, cv::Point2f VA, cv::Point2f PB);

#endif // OBJECT_DETECTION_H

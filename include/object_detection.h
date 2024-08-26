#ifndef OBJECT_DETECTION_H
#define OBJECT_DETECTION_H

#include <opencv2/opencv.hpp>
#include "ObjectDetails.h"
#include <iostream>
#include <cmath>


// Declaraciones de funciones
void drawRectAndAxes(cv::Mat& image, ObjectDetails& objectDetails);
cv::Mat findAndDrawObjects(const cv::Mat& base, const cv::Mat& test, ObjectDetails& objectDetails);

#endif // OBJECT_DETECTION_H

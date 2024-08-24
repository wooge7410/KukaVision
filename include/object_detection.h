#ifndef OBJECT_DETECTION_H
#define OBJECT_DETECTION_H

#include <opencv2/opencv.hpp>
#include "ObjectDetails.h"

// Declaraciones de funciones
void drawRectAndAxes(cv::Mat& image, ObjectDetails& objectDetails);
void findAndDrawObjects(const cv::Mat& base, const cv::Mat& test, ObjectDetails& objectDetails);

#endif // OBJECT_DETECTION_H

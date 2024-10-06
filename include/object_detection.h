#ifndef OBJECT_DETECTION_H
#define OBJECT_DETECTION_H

#include <opencv2/opencv.hpp>
#include "ObjectDetails.h"
#include <iostream>
#include <cmath>


/** \brief Detect objects in test-Image and marks them in Image
 *
 * \param base const cv::Mat& Reference image of the workarea without any objects
 * \param test const cv::Mat& Image in which the objects should be detected
 * \param objectDetails ObjectDetails& Information about last detected object. Includes the coordinate and angle of the object.
 * \return cv::Mat Test-Image with marked detected objects
 *
 */
cv::Mat findAndDrawObjects(const cv::Mat& base, const cv::Mat& test, ObjectDetails& objectDetails);


/** \brief Transform point in coordinate system to another system that is shifted and rotated.
 *
 * \param angle float Angle between the two coordinate systems
 * \param VA cv::Point2f Vector from the origin of the second coordinate system to the origin of the first
 * \param PB cv::Point2f Point that should be transformed into second coordinate system
 * \return cv::Point2f Transformed point
 *
 */
cv::Point2f coordinateTransform(float angle, cv::Point2f VA, cv::Point2f PB);

#endif // OBJECT_DETECTION_H

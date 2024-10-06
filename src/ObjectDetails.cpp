#include "ObjectDetails.h"

ObjectDetails::ObjectDetails() : angle(0), valid(false) {}

cv::Point2f ObjectDetails::getCenter() const {
    return center;
}

cv::Point2f ObjectDetails::getCorner(int index) const {
    if (index >= 0 && index < 4) {
        return corners[index];
    }
    return cv::Point2f();
}

float ObjectDetails::getAngle() const {
    return angle;
}

bool ObjectDetails::isValid() const {
    return valid;
}

void ObjectDetails::setCenter(const cv::Point2f& center) {
    this->center = center;
}

void ObjectDetails::setCorner(int index, const cv::Point2f& corner) {
    if (index >= 0 && index < 4) {
        corners[index] = corner;
    }
}

void ObjectDetails::setAngle(float angle) {
    this->angle = angle;
}

void ObjectDetails::setValid(bool valid) {
    this->valid = valid;
}

// TODO (kukavision#1#): Error-Handling

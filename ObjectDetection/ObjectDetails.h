#ifndef OBJECTDETAILS_H
#define OBJECTDETAILS_H

#include <opencv2/opencv.hpp>

class ObjectDetails {
public:
    ObjectDetails();

    // Getters
    cv::Point2f getCenter() const;
    cv::Point2f getCorner(int index) const;
    float getAngle() const;
    bool isValid() const;

    // Setters
    void setCenter(const cv::Point2f& center);
    void setCorner(int index, const cv::Point2f& corner);
    void setAngle(float angle);
    void setValid(bool valid);

private:
    cv::Point2f center;
    cv::Point2f corners[4];
    float angle;
    bool valid;
};

#endif // OBJECTDETAILS_H

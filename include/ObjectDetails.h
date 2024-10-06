#ifndef OBJECTDETAILS_H
#define OBJECTDETAILS_H

#include <opencv2/opencv.hpp>

/** \brief Details of a detected object. Includes center and corner coordinates and angle.
 */
class ObjectDetails
{
public:
    /** \brief Constructor; Sets angle to 0 and validity to false.
     *
     */
    ObjectDetails();


    // Getters
    /** \brief Returns center coordinates
     *
     * \return cv::Point2f Center-Coordinates
     *
     */
    cv::Point2f getCenter() const;


    /** \brief Returns coordinates of the corner with the given index.
     *
     * \param index int Index of the corner. 0 to 3
     * \return cv::Point2f Coordinates of the corner
     *
     */
    cv::Point2f getCorner(int index) const;


    /** \brief Returns angle of the object
     *
     * \return float Object-Angle
     *
     */
    float getAngle() const;



    /** \brief Returns Object-Validity (Currently unused)
     *
     * \return bool Validity
     *
     */
    bool isValid() const;


    // Setters
    /** \brief Sets center-attribute
     *
     * \param center const cv::Point2f& Center-Point
     * \return void
     *
     */
    void setCenter(const cv::Point2f& center);


    /** \brief Sets Corner-Attribute for given corner-index
     *
     * \param index int corner-index
     * \param corner const cv::Point2f& Corner-Coordinates
     * \return void
     *
     */
    void setCorner(int index, const cv::Point2f& corner);


    /** \brief Sets angle-attribute
     *
     * \param angle float Object-Angle
     * \return void
     *
     */
    void setAngle(float angle);


    /** \brief Sets Validity-Attribute
     *
     * \param valid bool Validity
     * \return void
     *
     */
    void setValid(bool valid);

private:
    cv::Point2f center;/**< Object-Center */
    cv::Point2f corners[4];/**< Coordinates of the corners */
    float angle;/**< Object-Angle */
    bool valid;/**< Object-Validity (Currently unused) */
};

#endif // OBJECTDETAILS_H

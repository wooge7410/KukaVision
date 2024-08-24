#include <opencv2/opencv.hpp>
#include <iostream>
#include "object_detection.h"

using namespace cv;
using namespace std;

int main() {
    ObjectDetails objectDetails;

    Mat base = imread("/home/kukavision/KukaVision/repo/KukaVision/NeoAPI_Test/0B_blank.png", IMREAD_COLOR);
    Mat test = imread("/home/kukavision/KukaVision/repo/KukaVision/NeoAPI_Test/2B_1W.png", IMREAD_COLOR);

    if (base.empty() || test.empty()) {
        cout << "Error loading the images" << endl;
        return -1;
    }

    findAndDrawObjects(base, test, objectDetails);

    // Acceder a los detalles del objeto desde otra parte del programa
    if (objectDetails.isValid()) {
        cout << "Object Center: (" << objectDetails.getCenter().x << ", " << objectDetails.getCenter().y << ")" << endl;
        cout << "Object Angle: " << objectDetails.getAngle() << " degrees" << endl;
        for (int i = 0; i < 4; ++i) {
            cout << "Corner " << i << ": (" << objectDetails.getCorner(i).x << ", " << objectDetails.getCorner(i).y << ")" << endl;
        }
    } else {
        cout << "No valid object details available." << endl;
    }

    return 0;
}

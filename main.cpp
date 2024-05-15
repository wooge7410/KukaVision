#include <iostream>
#include "neoapi/neoapi.hpp"

using namespace NeoAPI;
using std::cout;

int main() {
    Cam camera = Cam();

    try {
        camera.Connect("192.169.2.101");
    } catch (NoAccessException e) {
        cout << e.GetDescription() << "\n";
    }


    if (camera.IsConnected()) {
        cout << "Camera Connected! \n";
        cout << "Is Streaming: " << camera.IsStreaming() << "\n\n";
        cout << "Trigger Mode: " << camera.f().TriggerMode.GetString() << "\n\n";
        //camera.f().ExposureTime = 20000;
        camera.f().TriggerMode = TriggerMode::On;
        camera.f().TriggerSoftware.Execute();

        Image img = camera.GetImage();
        cout << "Image Received. ID: " << img.GetImageID() << "\n";
        cout << "Width: " << img.GetWidth() << "\t Height: " << img.GetHeight();
        img.Save("test2");
    }

    return 1;
}

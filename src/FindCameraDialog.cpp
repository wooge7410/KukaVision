#include "FindCameraDialog.h"

FindCameraDialog::FindCameraDialog() {
        ui.setupUi(&dialog);

        CamInfoList& connectedCameras = CamInfoList::Get(); // Get List of connected Cameras


        for (int i = 0; i < (int)connectedCameras.size(); i++) {
            QString camInfo = neoStringToQString(connectedCameras[i].GetGevIpAddress()) + " (" + neoStringToQString(connectedCameras[i].GetSerialNumber()) + ")"; // Generate String consisting of camera-ip and serial number
            new QListWidgetItem(camInfo, ui.listWidget);    // Create new ListWidgetItems with Information about new Cameras
        }

        ui.listWidget->setCurrentRow(0);    // Automatically select the first connected Camera

        switch (dialog.exec()) {    // wait until Dialog is closed
        case 0: // Cancel Button pressed
            selectedIP = "";
        case 1: // Ok Button pressed
            if(ui.listWidget->selectedItems().size() != 1) {    // In case multiple items have been selected
                selectedIP = "";
            } else {
                selectedIP = ui.listWidget->selectedItems()[0]->text().toStdString();
                selectedIP = selectedIP.substr(0, selectedIP.find(' '));    // Extract IP-Address from ListWidgetItem
            }
            break;
        default:
            selectedIP = "";
            break;
        }
}


QString FindCameraDialog::neoStringToQString(NeoString nString) {
    return QString::fromStdString(nString.c_str()); // Convert a NeoString to QString
}


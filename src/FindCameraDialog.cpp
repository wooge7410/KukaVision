#include "FindCameraDialog.h"

FindCameraDialog::FindCameraDialog() {
        ui.setupUi(&dialog);

        CamInfoList& connectedCameras = CamInfoList::Get(); // Get List of connected Cameras


        for (int i = 0; i < (int)connectedCameras.size(); i++) {
            QString camInfo = neoStringToQString(connectedCameras[i].GetGevIpAddress()) + " (" + neoStringToQString(connectedCameras[i].GetSerialNumber()) + ")";
            new QListWidgetItem(camInfo, ui.listWidget);    // Create new ListWidgetItems with Informaiton about new Cameras
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


/**
* \brief Conversion from NeoString to QString
* \param NeoString nString : NeoString to be converted
* \return QString
**/
QString FindCameraDialog::neoStringToQString(NeoString nString) {
    return QString::fromStdString(fcd.selectedIP);
}


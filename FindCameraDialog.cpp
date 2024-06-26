#include "FindCameraDialog.h"

class FindCameraDialog {
    public:
        QDialog dialog;

        FindCameraDialog() {
            Ui::Dialog ui;
            ui.setupUi(&dialog);

            new QListWidgetItem("Test", ui.listWidget);
        }
};

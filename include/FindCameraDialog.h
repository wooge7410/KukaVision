#ifndef FINDCAMERADIALOG_H
#define FINDCAMERADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListWidget>

#include <string>

#include "neoapi/neoapi.hpp"
#include <neoapi/neoapi_camera_info.hpp>


using namespace std;
using namespace NeoAPI;

QT_BEGIN_NAMESPACE


/**
* \brief QT-Generatred Design for FindCamera Dialog
*
**/
class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;

    /** \brief Sets up the UI-Elements
     *
     * \param Dialog QDialog* Parent QDialog
     * \return void
     *
     */
    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(304, 231);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(0, 200, 301, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 10, 301, 191));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Select Camera", nullptr));
    } // retranslateUi

};


/**
* Find Camera Dialog
* \brief Dialog for searching and selecting Baumer Cameras
**/
class FindCameraDialog {
   public:
        string selectedIP;  // String of the IP of the selected Camera. Is Empty in case of error
        QDialog dialog;
        Ui_Dialog ui;       // UI-Design

        /**
        * \brief Conversion from NeoString to QString
        * \param NeoString nString : NeoString to be converted
        * \return QString
        **/
        QString neoStringToQString(NeoString nString);


        /**
        * FindCameraDialog-Constructor
        * \brief Displays Dialog, searches for connected Cameras and saves selected IP-Address in "selectedIP". Stores empty String in Case of an Error
        **/
        FindCameraDialog(); // Constructor
};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FINDCAMERADIALOG_H

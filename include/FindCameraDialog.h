/********************************************************************************
** Form generated from reading UI file 'FindCameraDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

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

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;

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


// Class for FindCameraDialog
class FindCameraDialog {
   public:
        string selectedIP;  // Returns a String of the IP of the selected Camera
        QDialog dialog;
        Ui_Dialog ui;       // UI-Design

        /**
        * \param NeoString nString : NeoString to be converted
        * \return QString
         */
        QString neoStringToQString(NeoString nString);  //Function for converting a NeoString to QString
        FindCameraDialog(); // Constructor
};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FINDCAMERADIALOG_H

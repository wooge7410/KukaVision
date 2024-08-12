/********************************************************************************
** Form generated from reading UI file 'MainWindowBajaYs.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWBAJAYS_H
#define MAINWINDOWBAJAYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include "FindCameraDialog.h"
#include "CameraStream.h"
#include <iostream>

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core.hpp>
#include <string.h>

QT_BEGIN_NAMESPACE

using namespace std;
using namespace cv;

class Ui_MainWindow:QMainWindow
{
public:
    QAction *actionSave_Image_as;
    QAction *actionExit;
    QAction *actionProject_Infos;
    QAction *actionOpen_Console;
    QWidget *MainMenu;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *CameraView;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QCheckBox *Coordinates;
    QCheckBox *Checking;
    QCheckBox *Outlines;
    QPushButton *StartCameraView;
    QPushButton *pushButton_2;
    QPushButton *SaveImage;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *LiveCameraView;
    QLabel *CameraViewHeadline;
    QWidget *Options;
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout;
    QLabel *RobotOptions;
    QSpacerItem *horizontalSpacer_4;
    QLabel *IPLabel;
    QLineEdit *IP;
    QLabel *PortLabel;
    QLineEdit *Port;
    QLabel *ZOffsetLabel;
    QLineEdit *ZOffset;
    QLabel *ZOffsetFinalLabel;
    QLineEdit *ZOffsetFinal;
    QFormLayout *CameraOptions;
    QLabel *CameraOptionsLabel;
    QSpacerItem *horizontalSpacer_5;
    QLabel *CameraIPLabel;
    QLineEdit *CameraIP;
    QLabel *ExposureLabel;
    QLineEdit *Exposure;
    QLabel *FPSLiveViewLabel;
    QLineEdit *FPSLiveView;
    QLabel *label_15;
    QCheckBox *TriggerOn;
    QSpacerItem *verticalSpacer;
    QLabel *BiningLabel;
    QLabel *label_2;
    QLineEdit *BiningValue;
    QLineEdit *GainValue;
    QGridLayout *gridLayout_2;
    QLabel *FindCameraLabel;
    QSpacerItem *verticalSpacer_5;
    QFrame *line;
    QLineEdit *DataSavePath;
    QPushButton *FindCamera;
    QPushButton *OpenConsoleButton;
    QPushButton *FolderDialogButton;
    QLabel *DataSavePathLabel;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout;
    QLabel *YminLabel;
    QLineEdit *ZminValue;
    QLabel *YmaxLabel;
    QLabel *WorkingAreaLabel;
    QLineEdit *XminValue;
    QLineEdit *YminValue;
    QLabel *XminLabel;
    QLabel *ZminLabel;
    QLabel *ZmaxLabel;
    QLabel *XmaxLabel;
    QLineEdit *XmaxValue;
    QLineEdit *YmaxValue;
    QLineEdit *ZmaxValue;
    QWidget *Start_Program;
    QGridLayout *gridLayout_4;
    QLabel *StartProgramHeadline;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *SafetyCheck;
    QLabel *CoordinateLabel;
    QLabel *CoordinateShowLabel;
    QPushButton *GetCoordinates;
    QPushButton *StartRobot;
    QSpacerItem *verticalSpacer_3;
    QLabel *TimestampLabelProgram;
    QSpacerItem *horizontalSpacer_2;
    QLabel *ProgramImage;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuView;
    QStatusBar *statusbar;
    QDockWidget *ConsoleWindow;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_6;
    QTextBrowser *InfoConsole;

    void onFindCameraClicked();

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(948, 615);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionSave_Image_as = new QAction(MainWindow);
        actionSave_Image_as->setObjectName(QString::fromUtf8("actionSave_Image_as"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionProject_Infos = new QAction(MainWindow);
        actionProject_Infos->setObjectName(QString::fromUtf8("actionProject_Infos"));
        actionOpen_Console = new QAction(MainWindow);
        actionOpen_Console->setObjectName(QString::fromUtf8("actionOpen_Console"));
        MainMenu = new QWidget(MainWindow);
        MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        sizePolicy.setHeightForWidth(MainMenu->sizePolicy().hasHeightForWidth());
        MainMenu->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(MainMenu);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget = new QTabWidget(MainMenu);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        CameraView = new QWidget();
        CameraView->setObjectName(QString::fromUtf8("CameraView"));
        sizePolicy.setHeightForWidth(CameraView->sizePolicy().hasHeightForWidth());
        CameraView->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(CameraView);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(10, -1, 10, -1);
        Coordinates = new QCheckBox(CameraView);
        Coordinates->setObjectName(QString::fromUtf8("Coordinates"));

        verticalLayout->addWidget(Coordinates);

        Checking = new QCheckBox(CameraView);
        Checking->setObjectName(QString::fromUtf8("Checking"));
        Checking->setEnabled(true);
        Checking->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(Checking);

        Outlines = new QCheckBox(CameraView);
        Outlines->setObjectName(QString::fromUtf8("Outlines"));

        verticalLayout->addWidget(Outlines);

        StartCameraView = new QPushButton(CameraView);
        StartCameraView->setObjectName(QString::fromUtf8("StartCameraView"));

        verticalLayout->addWidget(StartCameraView);

        pushButton_2 = new QPushButton(CameraView);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        SaveImage = new QPushButton(CameraView);
        SaveImage->setObjectName(QString::fromUtf8("SaveImage"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SaveImage->sizePolicy().hasHeightForWidth());
        SaveImage->setSizePolicy(sizePolicy1);
        SaveImage->setMinimumSize(QSize(200, 0));

        verticalLayout->addWidget(SaveImage);

        verticalSpacer_2 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(CameraView);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        gridLayout_5->addLayout(verticalLayout, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);

        LiveCameraView = new QLabel(CameraView);
        LiveCameraView->setObjectName(QString::fromUtf8("LiveCameraView"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LiveCameraView->sizePolicy().hasHeightForWidth());
        LiveCameraView->setSizePolicy(sizePolicy2);
        LiveCameraView->setScaledContents(true);
        LiveCameraView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_5->addWidget(LiveCameraView, 1, 0, 2, 1);

        CameraViewHeadline = new QLabel(CameraView);
        CameraViewHeadline->setObjectName(QString::fromUtf8("CameraViewHeadline"));

        gridLayout_5->addWidget(CameraViewHeadline, 1, 1, 1, 1);

        tabWidget->addTab(CameraView, QString());
        Options = new QWidget();
        Options->setObjectName(QString::fromUtf8("Options"));
        sizePolicy.setHeightForWidth(Options->sizePolicy().hasHeightForWidth());
        Options->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(Options);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(-1, -1, 10, -1);
        RobotOptions = new QLabel(Options);
        RobotOptions->setObjectName(QString::fromUtf8("RobotOptions"));

        formLayout->setWidget(0, QFormLayout::LabelRole, RobotOptions);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(0, QFormLayout::FieldRole, horizontalSpacer_4);

        IPLabel = new QLabel(Options);
        IPLabel->setObjectName(QString::fromUtf8("IPLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, IPLabel);

        IP = new QLineEdit(Options);
        IP->setObjectName(QString::fromUtf8("IP"));

        formLayout->setWidget(1, QFormLayout::FieldRole, IP);

        PortLabel = new QLabel(Options);
        PortLabel->setObjectName(QString::fromUtf8("PortLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, PortLabel);

        Port = new QLineEdit(Options);
        Port->setObjectName(QString::fromUtf8("Port"));

        formLayout->setWidget(2, QFormLayout::FieldRole, Port);

        ZOffsetLabel = new QLabel(Options);
        ZOffsetLabel->setObjectName(QString::fromUtf8("ZOffsetLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, ZOffsetLabel);

        ZOffset = new QLineEdit(Options);
        ZOffset->setObjectName(QString::fromUtf8("ZOffset"));

        formLayout->setWidget(3, QFormLayout::FieldRole, ZOffset);

        ZOffsetFinalLabel = new QLabel(Options);
        ZOffsetFinalLabel->setObjectName(QString::fromUtf8("ZOffsetFinalLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, ZOffsetFinalLabel);

        ZOffsetFinal = new QLineEdit(Options);
        ZOffsetFinal->setObjectName(QString::fromUtf8("ZOffsetFinal"));

        formLayout->setWidget(4, QFormLayout::FieldRole, ZOffsetFinal);


        gridLayout_3->addLayout(formLayout, 1, 0, 1, 1);

        CameraOptions = new QFormLayout();
        CameraOptions->setObjectName(QString::fromUtf8("CameraOptions"));
        CameraOptions->setContentsMargins(-1, 20, 10, -1);
        CameraOptionsLabel = new QLabel(Options);
        CameraOptionsLabel->setObjectName(QString::fromUtf8("CameraOptionsLabel"));

        CameraOptions->setWidget(0, QFormLayout::LabelRole, CameraOptionsLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        CameraOptions->setItem(0, QFormLayout::FieldRole, horizontalSpacer_5);

        CameraIPLabel = new QLabel(Options);
        CameraIPLabel->setObjectName(QString::fromUtf8("CameraIPLabel"));

        CameraOptions->setWidget(1, QFormLayout::LabelRole, CameraIPLabel);

        CameraIP = new QLineEdit(Options);
        CameraIP->setObjectName(QString::fromUtf8("CameraIP"));

        CameraOptions->setWidget(1, QFormLayout::FieldRole, CameraIP);

        ExposureLabel = new QLabel(Options);
        ExposureLabel->setObjectName(QString::fromUtf8("ExposureLabel"));

        CameraOptions->setWidget(2, QFormLayout::LabelRole, ExposureLabel);

        Exposure = new QLineEdit(Options);
        Exposure->setObjectName(QString::fromUtf8("Exposure"));

        CameraOptions->setWidget(2, QFormLayout::FieldRole, Exposure);

        FPSLiveViewLabel = new QLabel(Options);
        FPSLiveViewLabel->setObjectName(QString::fromUtf8("FPSLiveViewLabel"));

        CameraOptions->setWidget(3, QFormLayout::LabelRole, FPSLiveViewLabel);

        FPSLiveView = new QLineEdit(Options);
        FPSLiveView->setObjectName(QString::fromUtf8("FPSLiveView"));

        CameraOptions->setWidget(3, QFormLayout::FieldRole, FPSLiveView);

        label_15 = new QLabel(Options);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        CameraOptions->setWidget(6, QFormLayout::LabelRole, label_15);

        TriggerOn = new QCheckBox(Options);
        TriggerOn->setObjectName(QString::fromUtf8("TriggerOn"));

        CameraOptions->setWidget(6, QFormLayout::FieldRole, TriggerOn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        CameraOptions->setItem(7, QFormLayout::LabelRole, verticalSpacer);

        BiningLabel = new QLabel(Options);
        BiningLabel->setObjectName(QString::fromUtf8("BiningLabel"));

        CameraOptions->setWidget(4, QFormLayout::LabelRole, BiningLabel);

        label_2 = new QLabel(Options);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        CameraOptions->setWidget(5, QFormLayout::LabelRole, label_2);

        BiningValue = new QLineEdit(Options);
        BiningValue->setObjectName(QString::fromUtf8("BiningValue"));

        CameraOptions->setWidget(4, QFormLayout::FieldRole, BiningValue);

        GainValue = new QLineEdit(Options);
        GainValue->setObjectName(QString::fromUtf8("GainValue"));

        CameraOptions->setWidget(5, QFormLayout::FieldRole, GainValue);


        gridLayout_3->addLayout(CameraOptions, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(10, 20, 10, -1);
        FindCameraLabel = new QLabel(Options);
        FindCameraLabel->setObjectName(QString::fromUtf8("FindCameraLabel"));
        FindCameraLabel->setWordWrap(true);

        gridLayout_2->addWidget(FindCameraLabel, 1, 0, 1, 2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 6, 1, 1, 1);

        line = new QFrame(Options);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 2);

        DataSavePath = new QLineEdit(Options);
        DataSavePath->setObjectName(QString::fromUtf8("DataSavePath"));

        gridLayout_2->addWidget(DataSavePath, 4, 0, 1, 1);

        FindCamera = new QPushButton(Options);
        FindCamera->setObjectName(QString::fromUtf8("FindCamera"));
        sizePolicy1.setHeightForWidth(FindCamera->sizePolicy().hasHeightForWidth());
        FindCamera->setSizePolicy(sizePolicy1);
        FindCamera->setMinimumSize(QSize(200, 0));

        gridLayout_2->addWidget(FindCamera, 0, 0, 1, 1);

        OpenConsoleButton = new QPushButton(Options);
        OpenConsoleButton->setObjectName(QString::fromUtf8("OpenConsoleButton"));
        sizePolicy1.setHeightForWidth(OpenConsoleButton->sizePolicy().hasHeightForWidth());
        OpenConsoleButton->setSizePolicy(sizePolicy1);
        OpenConsoleButton->setMinimumSize(QSize(200, 0));

        gridLayout_2->addWidget(OpenConsoleButton, 6, 0, 1, 1);

        FolderDialogButton = new QPushButton(Options);
        FolderDialogButton->setObjectName(QString::fromUtf8("FolderDialogButton"));

        gridLayout_2->addWidget(FolderDialogButton, 4, 1, 1, 1);

        DataSavePathLabel = new QLabel(Options);
        DataSavePathLabel->setObjectName(QString::fromUtf8("DataSavePathLabel"));

        gridLayout_2->addWidget(DataSavePathLabel, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 5, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        YminLabel = new QLabel(Options);
        YminLabel->setObjectName(QString::fromUtf8("YminLabel"));

        gridLayout->addWidget(YminLabel, 2, 1, 1, 1);

        ZminValue = new QLineEdit(Options);
        ZminValue->setObjectName(QString::fromUtf8("ZminValue"));

        gridLayout->addWidget(ZminValue, 3, 2, 1, 1);

        YmaxLabel = new QLabel(Options);
        YmaxLabel->setObjectName(QString::fromUtf8("YmaxLabel"));

        gridLayout->addWidget(YmaxLabel, 2, 3, 1, 1);

        WorkingAreaLabel = new QLabel(Options);
        WorkingAreaLabel->setObjectName(QString::fromUtf8("WorkingAreaLabel"));

        gridLayout->addWidget(WorkingAreaLabel, 0, 1, 1, 1);

        XminValue = new QLineEdit(Options);
        XminValue->setObjectName(QString::fromUtf8("XminValue"));

        gridLayout->addWidget(XminValue, 1, 2, 1, 1);

        YminValue = new QLineEdit(Options);
        YminValue->setObjectName(QString::fromUtf8("YminValue"));

        gridLayout->addWidget(YminValue, 2, 2, 1, 1);

        XminLabel = new QLabel(Options);
        XminLabel->setObjectName(QString::fromUtf8("XminLabel"));

        gridLayout->addWidget(XminLabel, 1, 1, 1, 1);

        ZminLabel = new QLabel(Options);
        ZminLabel->setObjectName(QString::fromUtf8("ZminLabel"));

        gridLayout->addWidget(ZminLabel, 3, 1, 1, 1);

        ZmaxLabel = new QLabel(Options);
        ZmaxLabel->setObjectName(QString::fromUtf8("ZmaxLabel"));

        gridLayout->addWidget(ZmaxLabel, 3, 3, 1, 1);

        XmaxLabel = new QLabel(Options);
        XmaxLabel->setObjectName(QString::fromUtf8("XmaxLabel"));

        gridLayout->addWidget(XmaxLabel, 1, 3, 1, 1);

        XmaxValue = new QLineEdit(Options);
        XmaxValue->setObjectName(QString::fromUtf8("XmaxValue"));

        gridLayout->addWidget(XmaxValue, 1, 4, 1, 1);

        YmaxValue = new QLineEdit(Options);
        YmaxValue->setObjectName(QString::fromUtf8("YmaxValue"));

        gridLayout->addWidget(YmaxValue, 2, 4, 1, 1);

        ZmaxValue = new QLineEdit(Options);
        ZmaxValue->setObjectName(QString::fromUtf8("ZmaxValue"));

        gridLayout->addWidget(ZmaxValue, 3, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 2, 1);

        tabWidget->addTab(Options, QString());
        Start_Program = new QWidget();
        Start_Program->setObjectName(QString::fromUtf8("Start_Program"));
        sizePolicy.setHeightForWidth(Start_Program->sizePolicy().hasHeightForWidth());
        Start_Program->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(Start_Program);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        StartProgramHeadline = new QLabel(Start_Program);
        StartProgramHeadline->setObjectName(QString::fromUtf8("StartProgramHeadline"));

        gridLayout_4->addWidget(StartProgramHeadline, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(10, -1, 10, -1);
        SafetyCheck = new QCheckBox(Start_Program);
        SafetyCheck->setObjectName(QString::fromUtf8("SafetyCheck"));
        SafetyCheck->setEnabled(true);

        verticalLayout_2->addWidget(SafetyCheck);

        CoordinateLabel = new QLabel(Start_Program);
        CoordinateLabel->setObjectName(QString::fromUtf8("CoordinateLabel"));

        verticalLayout_2->addWidget(CoordinateLabel);

        CoordinateShowLabel = new QLabel(Start_Program);
        CoordinateShowLabel->setObjectName(QString::fromUtf8("CoordinateShowLabel"));

        verticalLayout_2->addWidget(CoordinateShowLabel);

        GetCoordinates = new QPushButton(Start_Program);
        GetCoordinates->setObjectName(QString::fromUtf8("GetCoordinates"));

        verticalLayout_2->addWidget(GetCoordinates);

        StartRobot = new QPushButton(Start_Program);
        StartRobot->setObjectName(QString::fromUtf8("StartRobot"));
        sizePolicy1.setHeightForWidth(StartRobot->sizePolicy().hasHeightForWidth());
        StartRobot->setSizePolicy(sizePolicy1);
        StartRobot->setMinimumSize(QSize(200, 0));

        verticalLayout_2->addWidget(StartRobot);

        verticalSpacer_3 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        TimestampLabelProgram = new QLabel(Start_Program);
        TimestampLabelProgram->setObjectName(QString::fromUtf8("TimestampLabelProgram"));

        verticalLayout_2->addWidget(TimestampLabelProgram);


        gridLayout_4->addLayout(verticalLayout_2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        ProgramImage = new QLabel(Start_Program);
        ProgramImage->setObjectName(QString::fromUtf8("ProgramImage"));
        sizePolicy2.setHeightForWidth(ProgramImage->sizePolicy().hasHeightForWidth());
        ProgramImage->setSizePolicy(sizePolicy2);
        ProgramImage->setScaledContents(true);
        ProgramImage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(ProgramImage, 1, 0, 2, 1);

        tabWidget->addTab(Start_Program, QString());

        verticalLayout_4->addWidget(tabWidget);

        MainWindow->setCentralWidget(MainMenu);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 948, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        ConsoleWindow = new QDockWidget(MainWindow);
        ConsoleWindow->setObjectName(QString::fromUtf8("ConsoleWindow"));
        ConsoleWindow->setEnabled(true);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        gridLayout_6 = new QGridLayout(dockWidgetContents_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        InfoConsole = new QTextBrowser(dockWidgetContents_2);
        InfoConsole->setObjectName(QString::fromUtf8("InfoConsole"));

        gridLayout_6->addWidget(InfoConsole, 0, 0, 1, 1);

        ConsoleWindow->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, ConsoleWindow);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menubar->addAction(menuView->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionSave_Image_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionProject_Infos);
        menuView->addAction(actionOpen_Console);

        retranslateUi(MainWindow);
        QObject::connect(OpenConsoleButton, SIGNAL(clicked()), ConsoleWindow, SLOT(show()));
        QObject::connect(actionOpen_Console, SIGNAL(triggered()), ConsoleWindow, SLOT(show()));
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        //QObject::connect(FindCamera, SIGNAL(clicked()), this, SLOT(onFindCameraClicked()));
        //QObject::connect(FindCamera, SIGNAL(clicked()), CameraIP, SLOT(clear()));

        QObject::connect(FindCamera, &QPushButton::clicked, this,  [&]() {onFindCameraClicked();});
        QObject::connect(SaveImage, &QPushButton::clicked, this,  [&]() {imwrite("./1.png", cs->latestImage);});
        //QObject::connect(MainWindow, &QMainWindow::destroyed, this, [&]() {runCameraStream = false;});

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "KukaVision visual driven grasping", nullptr));
        actionSave_Image_as->setText(QCoreApplication::translate("MainWindow", "Save Image as", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionProject_Infos->setText(QCoreApplication::translate("MainWindow", "Project-Infos", nullptr));
        actionOpen_Console->setText(QCoreApplication::translate("MainWindow", "Open Console", nullptr));
        Coordinates->setText(QCoreApplication::translate("MainWindow", "Coordinates", nullptr));
        Checking->setText(QCoreApplication::translate("MainWindow", "Checking", nullptr));
        Outlines->setText(QCoreApplication::translate("MainWindow", "Outlines", nullptr));
        StartCameraView->setText(QCoreApplication::translate("MainWindow", "Start CameraView", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Stopp CameraView", nullptr));
        SaveImage->setText(QCoreApplication::translate("MainWindow", "Save Image", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        LiveCameraView->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/example.png\" width=\"1200\"/></p></body></html>", nullptr));
        CameraViewHeadline->setText(QCoreApplication::translate("MainWindow", "Filters", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CameraView), QCoreApplication::translate("MainWindow", "Camera-View", nullptr));
        RobotOptions->setText(QCoreApplication::translate("MainWindow", "Robot-Options", nullptr));
        IPLabel->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        PortLabel->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        ZOffsetLabel->setText(QCoreApplication::translate("MainWindow", "Z-Offset", nullptr));
        ZOffsetFinalLabel->setText(QCoreApplication::translate("MainWindow", "Z-Offset Final", nullptr));
        CameraOptionsLabel->setText(QCoreApplication::translate("MainWindow", "Camera-Options", nullptr));
        CameraIPLabel->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        ExposureLabel->setText(QCoreApplication::translate("MainWindow", "Exposure", nullptr));
        FPSLiveViewLabel->setText(QCoreApplication::translate("MainWindow", "FPS for Live-View", nullptr));
        label_15->setText(QString());
        TriggerOn->setText(QCoreApplication::translate("MainWindow", "Flip Image ", nullptr));
        BiningLabel->setText(QCoreApplication::translate("MainWindow", "Bining", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Gain", nullptr));
        FindCameraLabel->setText(QCoreApplication::translate("MainWindow", "Find the IP and Port of Cameras in the network", nullptr));
        FindCamera->setText(QCoreApplication::translate("MainWindow", "Find Camera", nullptr));
        OpenConsoleButton->setText(QCoreApplication::translate("MainWindow", "Open Console", nullptr));
        FolderDialogButton->setText(QCoreApplication::translate("MainWindow", "Folder", nullptr));
        DataSavePathLabel->setText(QCoreApplication::translate("MainWindow", "Imagedata save path", nullptr));
        YminLabel->setText(QCoreApplication::translate("MainWindow", "Y min", nullptr));
        YmaxLabel->setText(QCoreApplication::translate("MainWindow", "Y max", nullptr));
        WorkingAreaLabel->setText(QCoreApplication::translate("MainWindow", "Working-Area", nullptr));
        XminLabel->setText(QCoreApplication::translate("MainWindow", "X min", nullptr));
        ZminLabel->setText(QCoreApplication::translate("MainWindow", "Z min", nullptr));
        ZmaxLabel->setText(QCoreApplication::translate("MainWindow", "Z max", nullptr));
        XmaxLabel->setText(QCoreApplication::translate("MainWindow", "X max", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Options), QCoreApplication::translate("MainWindow", "Options", nullptr));
        StartProgramHeadline->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        SafetyCheck->setText(QCoreApplication::translate("MainWindow", "Safety Check", nullptr));
        CoordinateLabel->setText(QCoreApplication::translate("MainWindow", "Coordinates", nullptr));
        CoordinateShowLabel->setText(QCoreApplication::translate("MainWindow", "X Y Z A B C", nullptr));
        GetCoordinates->setText(QCoreApplication::translate("MainWindow", "Get Coordinates", nullptr));
        StartRobot->setText(QCoreApplication::translate("MainWindow", "Start Robot", nullptr));
        TimestampLabelProgram->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        ProgramImage->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\"example.png\" width=\"1200\" /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Start_Program), QCoreApplication::translate("MainWindow", "Start Program", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        ConsoleWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Console", nullptr));
    } // retranslateUi

    bool runCameraStream;


private:
    std::future<void> f;
    CameraStream *cs;


};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWBAJAYS_H

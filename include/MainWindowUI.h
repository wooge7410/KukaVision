/********************************************************************************
** Form generated from reading UI file 'KukaVisionUIV1FkSYUb.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef KUKAVISIONUIV1FKSYUB_H
#define KUKAVISIONUIV1FKSYUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:

    // TODO Options Struct Object -> holds currently acitve Setting

    QAction *actionSave_Image_as;
    QAction *actionExit;
    QAction *actionProject_Infos;
    QAction *actionOpen_Console;
    QWidget *mainMenuWidget;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *cameraViewWidget;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer;
    QLabel *liveCameraViewLabel;
    QVBoxLayout *cameraViewVerticalLayout;
    QCheckBox *coordinatesCheckBox;
    QCheckBox *checkingCheckBox;
    QCheckBox *outlinesCheckBox;
    QPushButton *startCameraViewButton;
    QPushButton *stoppCameraViewButton;
    QPushButton *saveImageButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *cameraViewTimestampLabel;
    QLabel *cameraViewHeadlineLabel;
    QLabel *cameraViewInfoLabel;
    QWidget *optionsWidget;
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout;
    QLabel *robotOptionsLabel;
    QSpacerItem *horizontalSpacer_4;
    QLabel *robotIPLabel;
    QLineEdit *robotIPLineEdit;
    QLabel *robotPortLabel;
    QLineEdit *robotPortLineEdit;
    QLabel *zOffsetLabel;
    QLineEdit *zOffsetLneEdit;
    QLabel *zOffsetFinalLabel;
    QLineEdit *zOffsetFinalLineEdit;
    QFormLayout *cameraOptionsLayout;
    QLabel *cameraOptionsLabel;
    QSpacerItem *horizontalSpacer_5;
    QLabel *cameraIPLabel;
    QLineEdit *cameraIPLineEdit;
    QLabel *exposureLabel;
    QLineEdit *exposureLineEdit;
    QLabel *fpsLiveViewLabel;
    QLineEdit *fpsLiveViewLineEdit;
    QLabel *emptyCameraOptionsLabel;
    QCheckBox *triggerOnCheckBox;
    QSpacerItem *verticalSpacer;
    QLabel *biningLabel;
    QLabel *gainLabel;
    QLineEdit *biningValueLineEdit;
    QLineEdit *gainValueLineEdit;
    QGridLayout *cameraOptions2Layout;
    QLabel *findCameraLabel;
    QSpacerItem *verticalSpacer_5;
    QFrame *dividerCameraOptionsline;
    QLineEdit *dataSavePathLineEdit;
    QPushButton *findCameraButton;
    QPushButton *openConsoleButton;
    QPushButton *folderDialogButton;
    QLabel *dataSavePathLabel;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *workingAreagridLayout;
    QLabel *yminLabel;
    QLineEdit *zminValueLineEdit;
    QLabel *ymaxLabel;
    QLabel *workingAreaLabel;
    QLineEdit *xminValueLineEdit;
    QLineEdit *yminValueLineEdit;
    QLabel *xminLabel;
    QLabel *zminLabel;
    QLabel *zmaxLabel;
    QLabel *xmaxLabel;
    QLineEdit *xmaxValueLineEdit;
    QLineEdit *ymaxValueLineedit;
    QLineEdit *zmaxValueLineEdit;
    QWidget *start_ProgramWidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *safetyCheckCheckBox;
    QLabel *coordinateLabel;
    QLabel *coordinateShowLabel;
    QPushButton *getCoordinatesButton;
    QPushButton *startRobotButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *timestampProgramLabel;
    QLabel *programImageLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *startProgramHeadlineLabel;
    QLabel *startProgramStatusColorLabel;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuView;
    QStatusBar *statusbar;
    QDockWidget *consoleWindowDockWidget;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_6;
    QTextBrowser *infoConsoleTextBrowser;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(968, 663);
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
        mainMenuWidget = new QWidget(MainWindow);
        mainMenuWidget->setObjectName(QString::fromUtf8("mainMenuWidget"));
        sizePolicy.setHeightForWidth(mainMenuWidget->sizePolicy().hasHeightForWidth());
        mainMenuWidget->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(mainMenuWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget = new QTabWidget(mainMenuWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        cameraViewWidget = new QWidget();
        cameraViewWidget->setObjectName(QString::fromUtf8("cameraViewWidget"));
        sizePolicy.setHeightForWidth(cameraViewWidget->sizePolicy().hasHeightForWidth());
        cameraViewWidget->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(cameraViewWidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);

        liveCameraViewLabel = new QLabel(cameraViewWidget);
        liveCameraViewLabel->setObjectName(QString::fromUtf8("liveCameraViewLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(liveCameraViewLabel->sizePolicy().hasHeightForWidth());
        liveCameraViewLabel->setSizePolicy(sizePolicy1);
        liveCameraViewLabel->setScaledContents(true);
        liveCameraViewLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_5->addWidget(liveCameraViewLabel, 1, 0, 2, 1);

        cameraViewVerticalLayout = new QVBoxLayout();
        cameraViewVerticalLayout->setSpacing(5);
        cameraViewVerticalLayout->setObjectName(QString::fromUtf8("cameraViewVerticalLayout"));
        cameraViewVerticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        cameraViewVerticalLayout->setContentsMargins(10, -1, 10, -1);
        coordinatesCheckBox = new QCheckBox(cameraViewWidget);
        coordinatesCheckBox->setObjectName(QString::fromUtf8("coordinatesCheckBox"));

        cameraViewVerticalLayout->addWidget(coordinatesCheckBox);

        checkingCheckBox = new QCheckBox(cameraViewWidget);
        checkingCheckBox->setObjectName(QString::fromUtf8("checkingCheckBox"));
        checkingCheckBox->setEnabled(true);
        checkingCheckBox->setMinimumSize(QSize(0, 0));

        cameraViewVerticalLayout->addWidget(checkingCheckBox);

        outlinesCheckBox = new QCheckBox(cameraViewWidget);
        outlinesCheckBox->setObjectName(QString::fromUtf8("outlinesCheckBox"));

        cameraViewVerticalLayout->addWidget(outlinesCheckBox);

        startCameraViewButton = new QPushButton(cameraViewWidget);
        startCameraViewButton->setObjectName(QString::fromUtf8("startCameraViewButton"));

        cameraViewVerticalLayout->addWidget(startCameraViewButton);

        stoppCameraViewButton = new QPushButton(cameraViewWidget);
        stoppCameraViewButton->setObjectName(QString::fromUtf8("stoppCameraViewButton"));

        cameraViewVerticalLayout->addWidget(stoppCameraViewButton);

        saveImageButton = new QPushButton(cameraViewWidget);
        saveImageButton->setObjectName(QString::fromUtf8("saveImageButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(saveImageButton->sizePolicy().hasHeightForWidth());
        saveImageButton->setSizePolicy(sizePolicy2);
        saveImageButton->setMinimumSize(QSize(200, 0));

        cameraViewVerticalLayout->addWidget(saveImageButton);

        verticalSpacer_2 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        cameraViewVerticalLayout->addItem(verticalSpacer_2);

        cameraViewTimestampLabel = new QLabel(cameraViewWidget);
        cameraViewTimestampLabel->setObjectName(QString::fromUtf8("cameraViewTimestampLabel"));

        cameraViewVerticalLayout->addWidget(cameraViewTimestampLabel);


        gridLayout_5->addLayout(cameraViewVerticalLayout, 2, 1, 1, 1);

        cameraViewHeadlineLabel = new QLabel(cameraViewWidget);
        cameraViewHeadlineLabel->setObjectName(QString::fromUtf8("cameraViewHeadlineLabel"));

        gridLayout_5->addWidget(cameraViewHeadlineLabel, 1, 1, 1, 1);

        cameraViewInfoLabel = new QLabel(cameraViewWidget);
        cameraViewInfoLabel->setObjectName(QString::fromUtf8("cameraViewInfoLabel"));

        gridLayout_5->addWidget(cameraViewInfoLabel, 3, 0, 1, 1);

        tabWidget->addTab(cameraViewWidget, QString());
        optionsWidget = new QWidget();
        optionsWidget->setObjectName(QString::fromUtf8("optionsWidget"));
        sizePolicy.setHeightForWidth(optionsWidget->sizePolicy().hasHeightForWidth());
        optionsWidget->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(optionsWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(-1, -1, 10, -1);
        robotOptionsLabel = new QLabel(optionsWidget);
        robotOptionsLabel->setObjectName(QString::fromUtf8("robotOptionsLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, robotOptionsLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(0, QFormLayout::FieldRole, horizontalSpacer_4);

        robotIPLabel = new QLabel(optionsWidget);
        robotIPLabel->setObjectName(QString::fromUtf8("robotIPLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, robotIPLabel);

        robotIPLineEdit = new QLineEdit(optionsWidget);
        robotIPLineEdit->setObjectName(QString::fromUtf8("robotIPLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, robotIPLineEdit);

        robotPortLabel = new QLabel(optionsWidget);
        robotPortLabel->setObjectName(QString::fromUtf8("robotPortLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, robotPortLabel);

        robotPortLineEdit = new QLineEdit(optionsWidget);
        robotPortLineEdit->setObjectName(QString::fromUtf8("robotPortLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, robotPortLineEdit);

        zOffsetLabel = new QLabel(optionsWidget);
        zOffsetLabel->setObjectName(QString::fromUtf8("zOffsetLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, zOffsetLabel);

        zOffsetLneEdit = new QLineEdit(optionsWidget);
        zOffsetLneEdit->setObjectName(QString::fromUtf8("zOffsetLneEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, zOffsetLneEdit);

        zOffsetFinalLabel = new QLabel(optionsWidget);
        zOffsetFinalLabel->setObjectName(QString::fromUtf8("zOffsetFinalLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, zOffsetFinalLabel);

        zOffsetFinalLineEdit = new QLineEdit(optionsWidget);
        zOffsetFinalLineEdit->setObjectName(QString::fromUtf8("zOffsetFinalLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, zOffsetFinalLineEdit);


        gridLayout_3->addLayout(formLayout, 1, 0, 1, 1);

        cameraOptionsLayout = new QFormLayout();
        cameraOptionsLayout->setObjectName(QString::fromUtf8("cameraOptionsLayout"));
        cameraOptionsLayout->setContentsMargins(-1, 20, 10, -1);
        cameraOptionsLabel = new QLabel(optionsWidget);
        cameraOptionsLabel->setObjectName(QString::fromUtf8("cameraOptionsLabel"));

        cameraOptionsLayout->setWidget(0, QFormLayout::LabelRole, cameraOptionsLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        cameraOptionsLayout->setItem(0, QFormLayout::FieldRole, horizontalSpacer_5);

        cameraIPLabel = new QLabel(optionsWidget);
        cameraIPLabel->setObjectName(QString::fromUtf8("cameraIPLabel"));

        cameraOptionsLayout->setWidget(1, QFormLayout::LabelRole, cameraIPLabel);

        cameraIPLineEdit = new QLineEdit(optionsWidget);
        cameraIPLineEdit->setObjectName(QString::fromUtf8("cameraIPLineEdit"));

        cameraOptionsLayout->setWidget(1, QFormLayout::FieldRole, cameraIPLineEdit);

        exposureLabel = new QLabel(optionsWidget);
        exposureLabel->setObjectName(QString::fromUtf8("exposureLabel"));

        cameraOptionsLayout->setWidget(2, QFormLayout::LabelRole, exposureLabel);

        exposureLineEdit = new QLineEdit(optionsWidget);
        exposureLineEdit->setObjectName(QString::fromUtf8("exposureLineEdit"));

        cameraOptionsLayout->setWidget(2, QFormLayout::FieldRole, exposureLineEdit);

        fpsLiveViewLabel = new QLabel(optionsWidget);
        fpsLiveViewLabel->setObjectName(QString::fromUtf8("fpsLiveViewLabel"));

        cameraOptionsLayout->setWidget(3, QFormLayout::LabelRole, fpsLiveViewLabel);

        fpsLiveViewLineEdit = new QLineEdit(optionsWidget);
        fpsLiveViewLineEdit->setObjectName(QString::fromUtf8("fpsLiveViewLineEdit"));

        cameraOptionsLayout->setWidget(3, QFormLayout::FieldRole, fpsLiveViewLineEdit);

        emptyCameraOptionsLabel = new QLabel(optionsWidget);
        emptyCameraOptionsLabel->setObjectName(QString::fromUtf8("emptyCameraOptionsLabel"));

        cameraOptionsLayout->setWidget(6, QFormLayout::LabelRole, emptyCameraOptionsLabel);

        triggerOnCheckBox = new QCheckBox(optionsWidget);
        triggerOnCheckBox->setObjectName(QString::fromUtf8("triggerOnCheckBox"));

        cameraOptionsLayout->setWidget(6, QFormLayout::FieldRole, triggerOnCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        cameraOptionsLayout->setItem(7, QFormLayout::LabelRole, verticalSpacer);

        biningLabel = new QLabel(optionsWidget);
        biningLabel->setObjectName(QString::fromUtf8("biningLabel"));

        cameraOptionsLayout->setWidget(4, QFormLayout::LabelRole, biningLabel);

        gainLabel = new QLabel(optionsWidget);
        gainLabel->setObjectName(QString::fromUtf8("gainLabel"));

        cameraOptionsLayout->setWidget(5, QFormLayout::LabelRole, gainLabel);

        biningValueLineEdit = new QLineEdit(optionsWidget);
        biningValueLineEdit->setObjectName(QString::fromUtf8("biningValueLineEdit"));

        cameraOptionsLayout->setWidget(4, QFormLayout::FieldRole, biningValueLineEdit);

        gainValueLineEdit = new QLineEdit(optionsWidget);
        gainValueLineEdit->setObjectName(QString::fromUtf8("gainValueLineEdit"));

        cameraOptionsLayout->setWidget(5, QFormLayout::FieldRole, gainValueLineEdit);


        gridLayout_3->addLayout(cameraOptionsLayout, 2, 0, 1, 1);

        cameraOptions2Layout = new QGridLayout();
        cameraOptions2Layout->setObjectName(QString::fromUtf8("cameraOptions2Layout"));
        cameraOptions2Layout->setContentsMargins(10, 20, 10, -1);
        findCameraLabel = new QLabel(optionsWidget);
        findCameraLabel->setObjectName(QString::fromUtf8("findCameraLabel"));
        findCameraLabel->setWordWrap(true);

        cameraOptions2Layout->addWidget(findCameraLabel, 1, 0, 1, 2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        cameraOptions2Layout->addItem(verticalSpacer_5, 6, 1, 1, 1);

        dividerCameraOptionsline = new QFrame(optionsWidget);
        dividerCameraOptionsline->setObjectName(QString::fromUtf8("dividerCameraOptionsline"));
        dividerCameraOptionsline->setFrameShape(QFrame::HLine);
        dividerCameraOptionsline->setFrameShadow(QFrame::Sunken);

        cameraOptions2Layout->addWidget(dividerCameraOptionsline, 2, 0, 1, 2);

        dataSavePathLineEdit = new QLineEdit(optionsWidget);
        dataSavePathLineEdit->setObjectName(QString::fromUtf8("dataSavePathLineEdit"));

        cameraOptions2Layout->addWidget(dataSavePathLineEdit, 4, 0, 1, 1);

        findCameraButton = new QPushButton(optionsWidget);
        findCameraButton->setObjectName(QString::fromUtf8("findCameraButton"));
        sizePolicy2.setHeightForWidth(findCameraButton->sizePolicy().hasHeightForWidth());
        findCameraButton->setSizePolicy(sizePolicy2);
        findCameraButton->setMinimumSize(QSize(200, 0));

        cameraOptions2Layout->addWidget(findCameraButton, 0, 0, 1, 1);

        openConsoleButton = new QPushButton(optionsWidget);
        openConsoleButton->setObjectName(QString::fromUtf8("openConsoleButton"));
        sizePolicy2.setHeightForWidth(openConsoleButton->sizePolicy().hasHeightForWidth());
        openConsoleButton->setSizePolicy(sizePolicy2);
        openConsoleButton->setMinimumSize(QSize(200, 0));

        cameraOptions2Layout->addWidget(openConsoleButton, 6, 0, 1, 1);

        folderDialogButton = new QPushButton(optionsWidget);
        folderDialogButton->setObjectName(QString::fromUtf8("folderDialogButton"));

        cameraOptions2Layout->addWidget(folderDialogButton, 4, 1, 1, 1);

        dataSavePathLabel = new QLabel(optionsWidget);
        dataSavePathLabel->setObjectName(QString::fromUtf8("dataSavePathLabel"));

        cameraOptions2Layout->addWidget(dataSavePathLabel, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        cameraOptions2Layout->addItem(verticalSpacer_4, 5, 0, 1, 1);


        gridLayout_3->addLayout(cameraOptions2Layout, 2, 1, 1, 1);

        workingAreagridLayout = new QGridLayout();
        workingAreagridLayout->setObjectName(QString::fromUtf8("workingAreagridLayout"));
        yminLabel = new QLabel(optionsWidget);
        yminLabel->setObjectName(QString::fromUtf8("yminLabel"));

        workingAreagridLayout->addWidget(yminLabel, 2, 1, 1, 1);

        zminValueLineEdit = new QLineEdit(optionsWidget);
        zminValueLineEdit->setObjectName(QString::fromUtf8("zminValueLineEdit"));

        workingAreagridLayout->addWidget(zminValueLineEdit, 3, 2, 1, 1);

        ymaxLabel = new QLabel(optionsWidget);
        ymaxLabel->setObjectName(QString::fromUtf8("ymaxLabel"));

        workingAreagridLayout->addWidget(ymaxLabel, 2, 3, 1, 1);

        workingAreaLabel = new QLabel(optionsWidget);
        workingAreaLabel->setObjectName(QString::fromUtf8("workingAreaLabel"));

        workingAreagridLayout->addWidget(workingAreaLabel, 0, 1, 1, 1);

        xminValueLineEdit = new QLineEdit(optionsWidget);
        xminValueLineEdit->setObjectName(QString::fromUtf8("xminValueLineEdit"));

        workingAreagridLayout->addWidget(xminValueLineEdit, 1, 2, 1, 1);

        yminValueLineEdit = new QLineEdit(optionsWidget);
        yminValueLineEdit->setObjectName(QString::fromUtf8("yminValueLineEdit"));

        workingAreagridLayout->addWidget(yminValueLineEdit, 2, 2, 1, 1);

        xminLabel = new QLabel(optionsWidget);
        xminLabel->setObjectName(QString::fromUtf8("xminLabel"));

        workingAreagridLayout->addWidget(xminLabel, 1, 1, 1, 1);

        zminLabel = new QLabel(optionsWidget);
        zminLabel->setObjectName(QString::fromUtf8("zminLabel"));

        workingAreagridLayout->addWidget(zminLabel, 3, 1, 1, 1);

        zmaxLabel = new QLabel(optionsWidget);
        zmaxLabel->setObjectName(QString::fromUtf8("zmaxLabel"));

        workingAreagridLayout->addWidget(zmaxLabel, 3, 3, 1, 1);

        xmaxLabel = new QLabel(optionsWidget);
        xmaxLabel->setObjectName(QString::fromUtf8("xmaxLabel"));

        workingAreagridLayout->addWidget(xmaxLabel, 1, 3, 1, 1);

        xmaxValueLineEdit = new QLineEdit(optionsWidget);
        xmaxValueLineEdit->setObjectName(QString::fromUtf8("xmaxValueLineEdit"));

        workingAreagridLayout->addWidget(xmaxValueLineEdit, 1, 4, 1, 1);

        ymaxValueLineedit = new QLineEdit(optionsWidget);
        ymaxValueLineedit->setObjectName(QString::fromUtf8("ymaxValueLineedit"));

        workingAreagridLayout->addWidget(ymaxValueLineedit, 2, 4, 1, 1);

        zmaxValueLineEdit = new QLineEdit(optionsWidget);
        zmaxValueLineEdit->setObjectName(QString::fromUtf8("zmaxValueLineEdit"));

        workingAreagridLayout->addWidget(zmaxValueLineEdit, 3, 4, 1, 1);


        gridLayout_3->addLayout(workingAreagridLayout, 0, 1, 2, 1);

        tabWidget->addTab(optionsWidget, QString());
        start_ProgramWidget = new QWidget();
        start_ProgramWidget->setObjectName(QString::fromUtf8("start_ProgramWidget"));
        sizePolicy.setHeightForWidth(start_ProgramWidget->sizePolicy().hasHeightForWidth());
        start_ProgramWidget->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(start_ProgramWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(10, -1, 10, -1);
        safetyCheckCheckBox = new QCheckBox(start_ProgramWidget);
        safetyCheckCheckBox->setObjectName(QString::fromUtf8("safetyCheckCheckBox"));
        safetyCheckCheckBox->setEnabled(true);

        verticalLayout_2->addWidget(safetyCheckCheckBox);

        coordinateLabel = new QLabel(start_ProgramWidget);
        coordinateLabel->setObjectName(QString::fromUtf8("coordinateLabel"));

        verticalLayout_2->addWidget(coordinateLabel);

        coordinateShowLabel = new QLabel(start_ProgramWidget);
        coordinateShowLabel->setObjectName(QString::fromUtf8("coordinateShowLabel"));

        verticalLayout_2->addWidget(coordinateShowLabel);

        getCoordinatesButton = new QPushButton(start_ProgramWidget);
        getCoordinatesButton->setObjectName(QString::fromUtf8("getCoordinatesButton"));

        verticalLayout_2->addWidget(getCoordinatesButton);

        startRobotButton = new QPushButton(start_ProgramWidget);
        startRobotButton->setObjectName(QString::fromUtf8("startRobotButton"));
        sizePolicy2.setHeightForWidth(startRobotButton->sizePolicy().hasHeightForWidth());
        startRobotButton->setSizePolicy(sizePolicy2);
        startRobotButton->setMinimumSize(QSize(200, 0));

        verticalLayout_2->addWidget(startRobotButton);

        verticalSpacer_3 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        timestampProgramLabel = new QLabel(start_ProgramWidget);
        timestampProgramLabel->setObjectName(QString::fromUtf8("timestampProgramLabel"));

        verticalLayout_2->addWidget(timestampProgramLabel);


        gridLayout_4->addLayout(verticalLayout_2, 2, 1, 1, 1);

        programImageLabel = new QLabel(start_ProgramWidget);
        programImageLabel->setObjectName(QString::fromUtf8("programImageLabel"));
        sizePolicy1.setHeightForWidth(programImageLabel->sizePolicy().hasHeightForWidth());
        programImageLabel->setSizePolicy(sizePolicy1);
        programImageLabel->setScaledContents(true);
        programImageLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(programImageLabel, 1, 0, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startProgramHeadlineLabel = new QLabel(start_ProgramWidget);
        startProgramHeadlineLabel->setObjectName(QString::fromUtf8("startProgramHeadlineLabel"));
        startProgramHeadlineLabel->setAutoFillBackground(true);
        startProgramHeadlineLabel->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(startProgramHeadlineLabel);

        startProgramStatusColorLabel = new QLabel(start_ProgramWidget);
        startProgramStatusColorLabel->setObjectName(QString::fromUtf8("startProgramStatusColorLabel"));
        startProgramStatusColorLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(224, 27, 36);"));
        startProgramStatusColorLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(startProgramStatusColorLabel);


        gridLayout_4->addLayout(horizontalLayout, 0, 1, 2, 1);

        tabWidget->addTab(start_ProgramWidget, QString());

        verticalLayout_4->addWidget(tabWidget);

        MainWindow->setCentralWidget(mainMenuWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 968, 22));
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
        consoleWindowDockWidget = new QDockWidget(MainWindow);
        consoleWindowDockWidget->setObjectName(QString::fromUtf8("consoleWindowDockWidget"));
        consoleWindowDockWidget->setEnabled(true);
        consoleWindowDockWidget->setAutoFillBackground(false);
        consoleWindowDockWidget->setAllowedAreas(Qt::BottomDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        gridLayout_6 = new QGridLayout(dockWidgetContents_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        infoConsoleTextBrowser = new QTextBrowser(dockWidgetContents_2);
        infoConsoleTextBrowser->setObjectName(QString::fromUtf8("infoConsoleTextBrowser"));

        gridLayout_6->addWidget(infoConsoleTextBrowser, 0, 0, 1, 1);

        consoleWindowDockWidget->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, consoleWindowDockWidget);

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
        QObject::connect(openConsoleButton, SIGNAL(clicked()), consoleWindowDockWidget, SLOT(show()));
        QObject::connect(actionOpen_Console, SIGNAL(triggered()), consoleWindowDockWidget, SLOT(show()));
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

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
        liveCameraViewLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/example.png\" width=\"1200\"/></p></body></html>", nullptr));
        coordinatesCheckBox->setText(QCoreApplication::translate("MainWindow", "Coordinates", nullptr));
        checkingCheckBox->setText(QCoreApplication::translate("MainWindow", "Checking", nullptr));
        outlinesCheckBox->setText(QCoreApplication::translate("MainWindow", "Outlines", nullptr));
        startCameraViewButton->setText(QCoreApplication::translate("MainWindow", "Start CameraView", nullptr));
        stoppCameraViewButton->setText(QCoreApplication::translate("MainWindow", "Stopp CameraView", nullptr));
        saveImageButton->setText(QCoreApplication::translate("MainWindow", "Save Image", nullptr));
        cameraViewTimestampLabel->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        cameraViewHeadlineLabel->setText(QCoreApplication::translate("MainWindow", "Filters", nullptr));
        cameraViewInfoLabel->setText(QCoreApplication::translate("MainWindow", "Camera-FPS : -- Draw-FPS: --", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(cameraViewWidget), QCoreApplication::translate("MainWindow", "Camera-View", nullptr));
        robotOptionsLabel->setText(QCoreApplication::translate("MainWindow", "Robot-Options", nullptr));
        robotIPLabel->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        robotPortLabel->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        zOffsetLabel->setText(QCoreApplication::translate("MainWindow", "Z-Offset", nullptr));
        zOffsetFinalLabel->setText(QCoreApplication::translate("MainWindow", "Z-Offset Final", nullptr));
        cameraOptionsLabel->setText(QCoreApplication::translate("MainWindow", "Camera-Options", nullptr));
        cameraIPLabel->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        exposureLabel->setText(QCoreApplication::translate("MainWindow", "Exposure", nullptr));
        fpsLiveViewLabel->setText(QCoreApplication::translate("MainWindow", "FPS for Live-View", nullptr));
        emptyCameraOptionsLabel->setText(QString());
        triggerOnCheckBox->setText(QCoreApplication::translate("MainWindow", "Flip Image ", nullptr));
        biningLabel->setText(QCoreApplication::translate("MainWindow", "Bining", nullptr));
        gainLabel->setText(QCoreApplication::translate("MainWindow", "Gain", nullptr));
        findCameraLabel->setText(QCoreApplication::translate("MainWindow", "Find the IP and Port of Cameras in the network", nullptr));
        findCameraButton->setText(QCoreApplication::translate("MainWindow", "Find Camera", nullptr));
        openConsoleButton->setText(QCoreApplication::translate("MainWindow", "Open Console", nullptr));
        folderDialogButton->setText(QCoreApplication::translate("MainWindow", "Folder", nullptr));
        dataSavePathLabel->setText(QCoreApplication::translate("MainWindow", "Imagedata save path", nullptr));
        yminLabel->setText(QCoreApplication::translate("MainWindow", "Y min", nullptr));
        ymaxLabel->setText(QCoreApplication::translate("MainWindow", "Y max", nullptr));
        workingAreaLabel->setText(QCoreApplication::translate("MainWindow", "Working-Area", nullptr));
        xminLabel->setText(QCoreApplication::translate("MainWindow", "X min", nullptr));
        zminLabel->setText(QCoreApplication::translate("MainWindow", "Z min", nullptr));
        zmaxLabel->setText(QCoreApplication::translate("MainWindow", "Z max", nullptr));
        xmaxLabel->setText(QCoreApplication::translate("MainWindow", "X max", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(optionsWidget), QCoreApplication::translate("MainWindow", "Options", nullptr));
        safetyCheckCheckBox->setText(QCoreApplication::translate("MainWindow", "Safety Check", nullptr));
        coordinateLabel->setText(QCoreApplication::translate("MainWindow", "Coordinates", nullptr));
        coordinateShowLabel->setText(QCoreApplication::translate("MainWindow", "X Y Z A B C", nullptr));
        getCoordinatesButton->setText(QCoreApplication::translate("MainWindow", "Get Coordinates", nullptr));
        startRobotButton->setText(QCoreApplication::translate("MainWindow", "Start Robot", nullptr));
        timestampProgramLabel->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        programImageLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/example.png\" width=\"1200\" /></p></body></html>", nullptr));
        startProgramHeadlineLabel->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        startProgramStatusColorLabel->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(start_ProgramWidget), QCoreApplication::translate("MainWindow", "Start Program", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        consoleWindowDockWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "Console", nullptr));
        infoConsoleTextBrowser->setPlaceholderText(QCoreApplication::translate("MainWindow", "Example-Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KUKAVISIONUIV1FKSYUB_H

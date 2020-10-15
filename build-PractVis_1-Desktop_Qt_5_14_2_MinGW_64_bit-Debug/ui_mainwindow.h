/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *SettingsGroup;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *slideRGBLayout;
    QSlider *slideR;
    QSlider *slideG;
    QCheckBox *redCheckBox;
    QCheckBox *greenCheckBox;
    QSlider *slideB;
    QCheckBox *blueCheckBox;
    QPushButton *resetSliders;
    QLabel *checkBoxLabel;
    QFormLayout *formLayout;
    QLabel *brightLabel;
    QSpinBox *brightSpin;
    QCheckBox *monoNeg;
    QSpinBox *negFloorSpin;
    QCheckBox *thresholdBox;
    QSpinBox *thresholdSpin;
    QCheckBox *quantizationBox;
    QSpinBox *quantizationSpin;
    QCheckBox *solarizationBox;
    QCheckBox *lowFreqBox;
    QCheckBox *highFreqBox;
    QCheckBox *medianBox;
    QSpinBox *medianSpin;
    QCheckBox *gaussBox;
    QSpinBox *gaussSpin;
    QGroupBox *contrastBox;
    QFormLayout *formLayout_2;
    QLabel *contrastLabel;
    QCheckBox *contrastUpCheck;
    QSpinBox *contrastLower;
    QSpinBox *ContrastUpper;
    QGroupBox *gammaBox;
    QHBoxLayout *horizontalLayout_2;
    QSlider *gammaSlide;
    QPushButton *gammaReset;
    QCheckBox *changedCheck;
    QLabel *histogramLabel;
    QSpacerItem *verticalSpacer;
    QPushButton *changePhoto;
    QVBoxLayout *photoLayout;
    QGraphicsView *graphicsView;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(948, 781);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background: lightgray;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        SettingsGroup = new QGroupBox(centralwidget);
        SettingsGroup->setObjectName(QString::fromUtf8("SettingsGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsGroup->sizePolicy().hasHeightForWidth());
        SettingsGroup->setSizePolicy(sizePolicy);
        SettingsGroup->setMinimumSize(QSize(0, 0));
        SettingsGroup->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(SettingsGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        slideRGBLayout = new QFormLayout();
        slideRGBLayout->setObjectName(QString::fromUtf8("slideRGBLayout"));
        slideRGBLayout->setContentsMargins(-1, -1, -1, 10);
        slideR = new QSlider(SettingsGroup);
        slideR->setObjectName(QString::fromUtf8("slideR"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(slideR->sizePolicy().hasHeightForWidth());
        slideR->setSizePolicy(sizePolicy1);
        slideR->setMinimumSize(QSize(100, 0));
        slideR->setMaximumSize(QSize(16777215, 16777215));
        slideR->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 1px solid #bbb;\n"
"background: white;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #e66, stop: 1 #fbb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #fbb, stop: 1 #f55);\n"
"border: 1px solid #777;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: #fff;\n"
"border: 1px solid #777;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #e66, stop: 1 #fbb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #fbb, stop: 1 #f55);\n"
"border: 1px solid #777;\n"
"width: 13px;\n"
"margin-top: -2px;\n"
"margin-bottom: -2px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: qlineargradient(x1: 0, y1"
                        ": 0,    x2: 0, y2: 1,\n"
"    stop: 0 #e66, stop: 1 #fbb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #fbb, stop: 1 #f55);\n"
"border: 1px solid #444;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #e66, stop: 1 #fbb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #fbb, stop: 1 #f55);\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #e66, stop: 1 #fbb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #fbb, stop: 1 #f55);\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #e66, stop: 1 #fbb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #fbb, stop: 1 #f55);\n"
"bor"
                        "der: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        slideR->setValue(30);
        slideR->setOrientation(Qt::Horizontal);

        slideRGBLayout->setWidget(0, QFormLayout::LabelRole, slideR);

        slideG = new QSlider(SettingsGroup);
        slideG->setObjectName(QString::fromUtf8("slideG"));
        sizePolicy1.setHeightForWidth(slideG->sizePolicy().hasHeightForWidth());
        slideG->setSizePolicy(sizePolicy1);
        slideG->setMinimumSize(QSize(100, 0));
        slideG->setMaximumSize(QSize(16777215, 16777215));
        slideG->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 1px solid #bbb;\n"
"background: white;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #6e6, stop: 1 #bfb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bfb, stop: 1 #5f5);\n"
"border: 1px solid #777;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: #fff;\n"
"border: 1px solid #777;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #6e6, stop: 1 #bfb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bfb, stop: 1 #5f5);\n"
"border: 1px solid #777;\n"
"width: 13px;\n"
"margin-top: -2px;\n"
"margin-bottom: -2px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: qlineargradient(x1: 0, y1"
                        ": 0,    x2: 0, y2: 1,\n"
"    stop: 0 #6e6, stop: 1 #bfb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bfb, stop: 1 #5f5);\n"
"border: 1px solid #444;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #6e6, stop: 1 #bfb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bfb, stop: 1 #5f5);\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #6e6, stop: 1 #bfb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bfb, stop: 1 #5f5);\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #6e6, stop: 1 #bfb);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bfb, stop: 1 #5f5);\n"
"bor"
                        "der: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        slideG->setValue(59);
        slideG->setOrientation(Qt::Horizontal);

        slideRGBLayout->setWidget(1, QFormLayout::LabelRole, slideG);

        redCheckBox = new QCheckBox(SettingsGroup);
        redCheckBox->setObjectName(QString::fromUtf8("redCheckBox"));
        sizePolicy1.setHeightForWidth(redCheckBox->sizePolicy().hasHeightForWidth());
        redCheckBox->setSizePolicy(sizePolicy1);
        redCheckBox->setChecked(true);

        slideRGBLayout->setWidget(0, QFormLayout::FieldRole, redCheckBox);

        greenCheckBox = new QCheckBox(SettingsGroup);
        greenCheckBox->setObjectName(QString::fromUtf8("greenCheckBox"));
        sizePolicy1.setHeightForWidth(greenCheckBox->sizePolicy().hasHeightForWidth());
        greenCheckBox->setSizePolicy(sizePolicy1);
        greenCheckBox->setChecked(true);

        slideRGBLayout->setWidget(1, QFormLayout::FieldRole, greenCheckBox);

        slideB = new QSlider(SettingsGroup);
        slideB->setObjectName(QString::fromUtf8("slideB"));
        sizePolicy1.setHeightForWidth(slideB->sizePolicy().hasHeightForWidth());
        slideB->setSizePolicy(sizePolicy1);
        slideB->setMinimumSize(QSize(100, 0));
        slideB->setMaximumSize(QSize(16777215, 16777215));
        slideB->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 1px solid #bbb;\n"
"background: white;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #66e, stop: 1 #bbf);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bbf, stop: 1 #55f);\n"
"border: 1px solid #777;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: #fff;\n"
"border: 1px solid #777;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #66e, stop: 1 #bbf);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bbf, stop: 1 #55f);\n"
"border: 1px solid #777;\n"
"width: 13px;\n"
"margin-top: -2px;\n"
"margin-bottom: -2px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: qlineargradient(x1: 0, y1"
                        ": 0,    x2: 0, y2: 1,\n"
"    stop: 0 #66e, stop: 1 #bbf);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bbf, stop: 1 #55f);\n"
"border: 1px solid #444;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #66e, stop: 1 #bbf);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bbf, stop: 1 #55f);\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #66e, stop: 1 #bbf);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bbf, stop: 1 #55f);\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #66e, stop: 1 #bbf);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bbf, stop: 1 #55f);\n"
"bor"
                        "der: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        slideB->setValue(11);
        slideB->setOrientation(Qt::Horizontal);

        slideRGBLayout->setWidget(2, QFormLayout::LabelRole, slideB);

        blueCheckBox = new QCheckBox(SettingsGroup);
        blueCheckBox->setObjectName(QString::fromUtf8("blueCheckBox"));
        sizePolicy1.setHeightForWidth(blueCheckBox->sizePolicy().hasHeightForWidth());
        blueCheckBox->setSizePolicy(sizePolicy1);
        blueCheckBox->setChecked(true);

        slideRGBLayout->setWidget(2, QFormLayout::FieldRole, blueCheckBox);

        resetSliders = new QPushButton(SettingsGroup);
        resetSliders->setObjectName(QString::fromUtf8("resetSliders"));
        sizePolicy1.setHeightForWidth(resetSliders->sizePolicy().hasHeightForWidth());
        resetSliders->setSizePolicy(sizePolicy1);

        slideRGBLayout->setWidget(3, QFormLayout::LabelRole, resetSliders);


        verticalLayout_2->addLayout(slideRGBLayout);

        checkBoxLabel = new QLabel(SettingsGroup);
        checkBoxLabel->setObjectName(QString::fromUtf8("checkBoxLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBoxLabel->sizePolicy().hasHeightForWidth());
        checkBoxLabel->setSizePolicy(sizePolicy2);
        checkBoxLabel->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(checkBoxLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(-1, -1, -1, 0);
        brightLabel = new QLabel(SettingsGroup);
        brightLabel->setObjectName(QString::fromUtf8("brightLabel"));
        sizePolicy2.setHeightForWidth(brightLabel->sizePolicy().hasHeightForWidth());
        brightLabel->setSizePolicy(sizePolicy2);

        formLayout->setWidget(0, QFormLayout::LabelRole, brightLabel);

        brightSpin = new QSpinBox(SettingsGroup);
        brightSpin->setObjectName(QString::fromUtf8("brightSpin"));
        sizePolicy1.setHeightForWidth(brightSpin->sizePolicy().hasHeightForWidth());
        brightSpin->setSizePolicy(sizePolicy1);
        brightSpin->setMinimum(-255);
        brightSpin->setMaximum(255);

        formLayout->setWidget(0, QFormLayout::FieldRole, brightSpin);

        monoNeg = new QCheckBox(SettingsGroup);
        monoNeg->setObjectName(QString::fromUtf8("monoNeg"));
        sizePolicy1.setHeightForWidth(monoNeg->sizePolicy().hasHeightForWidth());
        monoNeg->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::LabelRole, monoNeg);

        negFloorSpin = new QSpinBox(SettingsGroup);
        negFloorSpin->setObjectName(QString::fromUtf8("negFloorSpin"));
        sizePolicy1.setHeightForWidth(negFloorSpin->sizePolicy().hasHeightForWidth());
        negFloorSpin->setSizePolicy(sizePolicy1);
        negFloorSpin->setMaximum(255);
        negFloorSpin->setValue(128);

        formLayout->setWidget(1, QFormLayout::FieldRole, negFloorSpin);

        thresholdBox = new QCheckBox(SettingsGroup);
        thresholdBox->setObjectName(QString::fromUtf8("thresholdBox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, thresholdBox);

        thresholdSpin = new QSpinBox(SettingsGroup);
        thresholdSpin->setObjectName(QString::fromUtf8("thresholdSpin"));
        sizePolicy1.setHeightForWidth(thresholdSpin->sizePolicy().hasHeightForWidth());
        thresholdSpin->setSizePolicy(sizePolicy1);
        thresholdSpin->setMaximum(255);
        thresholdSpin->setValue(128);

        formLayout->setWidget(2, QFormLayout::FieldRole, thresholdSpin);

        quantizationBox = new QCheckBox(SettingsGroup);
        quantizationBox->setObjectName(QString::fromUtf8("quantizationBox"));
        sizePolicy1.setHeightForWidth(quantizationBox->sizePolicy().hasHeightForWidth());
        quantizationBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(3, QFormLayout::LabelRole, quantizationBox);

        quantizationSpin = new QSpinBox(SettingsGroup);
        quantizationSpin->setObjectName(QString::fromUtf8("quantizationSpin"));
        sizePolicy1.setHeightForWidth(quantizationSpin->sizePolicy().hasHeightForWidth());
        quantizationSpin->setSizePolicy(sizePolicy1);
        quantizationSpin->setMinimum(2);
        quantizationSpin->setMaximum(255);
        quantizationSpin->setValue(2);

        formLayout->setWidget(3, QFormLayout::FieldRole, quantizationSpin);

        solarizationBox = new QCheckBox(SettingsGroup);
        solarizationBox->setObjectName(QString::fromUtf8("solarizationBox"));
        sizePolicy1.setHeightForWidth(solarizationBox->sizePolicy().hasHeightForWidth());
        solarizationBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::LabelRole, solarizationBox);

        lowFreqBox = new QCheckBox(SettingsGroup);
        lowFreqBox->setObjectName(QString::fromUtf8("lowFreqBox"));
        sizePolicy1.setHeightForWidth(lowFreqBox->sizePolicy().hasHeightForWidth());
        lowFreqBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(5, QFormLayout::LabelRole, lowFreqBox);

        highFreqBox = new QCheckBox(SettingsGroup);
        highFreqBox->setObjectName(QString::fromUtf8("highFreqBox"));
        sizePolicy1.setHeightForWidth(highFreqBox->sizePolicy().hasHeightForWidth());
        highFreqBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(5, QFormLayout::FieldRole, highFreqBox);

        medianBox = new QCheckBox(SettingsGroup);
        medianBox->setObjectName(QString::fromUtf8("medianBox"));
        sizePolicy1.setHeightForWidth(medianBox->sizePolicy().hasHeightForWidth());
        medianBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(6, QFormLayout::LabelRole, medianBox);

        medianSpin = new QSpinBox(SettingsGroup);
        medianSpin->setObjectName(QString::fromUtf8("medianSpin"));
        sizePolicy1.setHeightForWidth(medianSpin->sizePolicy().hasHeightForWidth());
        medianSpin->setSizePolicy(sizePolicy1);
        medianSpin->setMinimum(3);
        medianSpin->setSingleStep(2);
        medianSpin->setValue(3);

        formLayout->setWidget(6, QFormLayout::FieldRole, medianSpin);

        gaussBox = new QCheckBox(SettingsGroup);
        gaussBox->setObjectName(QString::fromUtf8("gaussBox"));
        sizePolicy1.setHeightForWidth(gaussBox->sizePolicy().hasHeightForWidth());
        gaussBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(7, QFormLayout::LabelRole, gaussBox);

        gaussSpin = new QSpinBox(SettingsGroup);
        gaussSpin->setObjectName(QString::fromUtf8("gaussSpin"));
        sizePolicy1.setHeightForWidth(gaussSpin->sizePolicy().hasHeightForWidth());
        gaussSpin->setSizePolicy(sizePolicy1);
        gaussSpin->setMinimum(3);
        gaussSpin->setMaximum(19);
        gaussSpin->setSingleStep(2);

        formLayout->setWidget(7, QFormLayout::FieldRole, gaussSpin);


        verticalLayout_2->addLayout(formLayout);

        contrastBox = new QGroupBox(SettingsGroup);
        contrastBox->setObjectName(QString::fromUtf8("contrastBox"));
        formLayout_2 = new QFormLayout(contrastBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        contrastLabel = new QLabel(contrastBox);
        contrastLabel->setObjectName(QString::fromUtf8("contrastLabel"));
        sizePolicy2.setHeightForWidth(contrastLabel->sizePolicy().hasHeightForWidth());
        contrastLabel->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, contrastLabel);

        contrastUpCheck = new QCheckBox(contrastBox);
        contrastUpCheck->setObjectName(QString::fromUtf8("contrastUpCheck"));
        sizePolicy1.setHeightForWidth(contrastUpCheck->sizePolicy().hasHeightForWidth());
        contrastUpCheck->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, contrastUpCheck);

        contrastLower = new QSpinBox(contrastBox);
        contrastLower->setObjectName(QString::fromUtf8("contrastLower"));
        sizePolicy1.setHeightForWidth(contrastLower->sizePolicy().hasHeightForWidth());
        contrastLower->setSizePolicy(sizePolicy1);
        contrastLower->setMaximum(255);
        contrastLower->setSingleStep(1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, contrastLower);

        ContrastUpper = new QSpinBox(contrastBox);
        ContrastUpper->setObjectName(QString::fromUtf8("ContrastUpper"));
        sizePolicy1.setHeightForWidth(ContrastUpper->sizePolicy().hasHeightForWidth());
        ContrastUpper->setSizePolicy(sizePolicy1);
        ContrastUpper->setMaximum(255);
        ContrastUpper->setSingleStep(1);
        ContrastUpper->setValue(255);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, ContrastUpper);


        verticalLayout_2->addWidget(contrastBox);

        gammaBox = new QGroupBox(SettingsGroup);
        gammaBox->setObjectName(QString::fromUtf8("gammaBox"));
        horizontalLayout_2 = new QHBoxLayout(gammaBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gammaSlide = new QSlider(gammaBox);
        gammaSlide->setObjectName(QString::fromUtf8("gammaSlide"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(gammaSlide->sizePolicy().hasHeightForWidth());
        gammaSlide->setSizePolicy(sizePolicy3);
        gammaSlide->setMaximumSize(QSize(16777215, 16));
        gammaSlide->setStyleSheet(QString::fromUtf8(""));
        gammaSlide->setMinimum(-10);
        gammaSlide->setMaximum(10);
        gammaSlide->setPageStep(1);
        gammaSlide->setOrientation(Qt::Horizontal);
        gammaSlide->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_2->addWidget(gammaSlide);

        gammaReset = new QPushButton(gammaBox);
        gammaReset->setObjectName(QString::fromUtf8("gammaReset"));
        sizePolicy1.setHeightForWidth(gammaReset->sizePolicy().hasHeightForWidth());
        gammaReset->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(gammaReset);


        verticalLayout_2->addWidget(gammaBox);

        changedCheck = new QCheckBox(SettingsGroup);
        changedCheck->setObjectName(QString::fromUtf8("changedCheck"));
        sizePolicy1.setHeightForWidth(changedCheck->sizePolicy().hasHeightForWidth());
        changedCheck->setSizePolicy(sizePolicy1);
        changedCheck->setChecked(true);

        verticalLayout_2->addWidget(changedCheck);


        verticalLayout->addWidget(SettingsGroup);

        histogramLabel = new QLabel(centralwidget);
        histogramLabel->setObjectName(QString::fromUtf8("histogramLabel"));

        verticalLayout->addWidget(histogramLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        changePhoto = new QPushButton(centralwidget);
        changePhoto->setObjectName(QString::fromUtf8("changePhoto"));
        sizePolicy1.setHeightForWidth(changePhoto->sizePolicy().hasHeightForWidth());
        changePhoto->setSizePolicy(sizePolicy1);
        changePhoto->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(changePhoto);


        horizontalLayout->addLayout(verticalLayout);

        photoLayout = new QVBoxLayout();
        photoLayout->setObjectName(QString::fromUtf8("photoLayout"));
        photoLayout->setSizeConstraint(QLayout::SetNoConstraint);
        photoLayout->setContentsMargins(10, -1, -1, -1);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{\n"
"border: 0px;\n"
"background: lightgray;\n"
"}"));

        photoLayout->addWidget(graphicsView);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        photoLayout->addItem(horizontalSpacer);


        horizontalLayout->addLayout(photoLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 948, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        SettingsGroup->setTitle(QCoreApplication::translate("MainWindow", "Monochrome settings", nullptr));
        redCheckBox->setText(QString());
        greenCheckBox->setText(QString());
        blueCheckBox->setText(QString());
        resetSliders->setText(QCoreApplication::translate("MainWindow", "Reset sliders", nullptr));
        checkBoxLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body  style=\"line-height:0\n"
"\"><p align=\"center\">Checkboxes are responsible</p><p align=\"center\">for the monochrome component</p></body></html>", nullptr));
        brightLabel->setText(QCoreApplication::translate("MainWindow", "Brightness:", nullptr));
        brightSpin->setSuffix(QString());
        monoNeg->setText(QCoreApplication::translate("MainWindow", "Negative", nullptr));
        thresholdBox->setText(QCoreApplication::translate("MainWindow", "Threshold", nullptr));
        quantizationBox->setText(QCoreApplication::translate("MainWindow", "Quantization", nullptr));
        solarizationBox->setText(QCoreApplication::translate("MainWindow", "Solarization", nullptr));
        lowFreqBox->setText(QCoreApplication::translate("MainWindow", "Low", nullptr));
        highFreqBox->setText(QCoreApplication::translate("MainWindow", "High frequency", nullptr));
        medianBox->setText(QCoreApplication::translate("MainWindow", "Median filter", nullptr));
        gaussBox->setText(QCoreApplication::translate("MainWindow", "Gauss filter", nullptr));
        contrastBox->setTitle(QCoreApplication::translate("MainWindow", "Contrast", nullptr));
        contrastLabel->setText(QCoreApplication::translate("MainWindow", "Increase", nullptr));
        contrastUpCheck->setText(QString());
        gammaBox->setTitle(QCoreApplication::translate("MainWindow", "Gamma", nullptr));
        gammaReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        changedCheck->setText(QCoreApplication::translate("MainWindow", "Display changed", nullptr));
        histogramLabel->setText(QCoreApplication::translate("MainWindow", "Histogram", nullptr));
        changePhoto->setText(QCoreApplication::translate("MainWindow", "Choose photo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

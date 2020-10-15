/********************************************************************************
** Form generated from reading UI file 'histograph.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAPH_H
#define UI_HISTOGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_histoGraph
{
public:
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *histoGraph)
    {
        if (histoGraph->objectName().isEmpty())
            histoGraph->setObjectName(QString::fromUtf8("histoGraph"));
        histoGraph->resize(400, 300);
        horizontalLayout = new QHBoxLayout(histoGraph);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        retranslateUi(histoGraph);

        QMetaObject::connectSlotsByName(histoGraph);
    } // setupUi

    void retranslateUi(QDialog *histoGraph)
    {
        histoGraph->setWindowTitle(QCoreApplication::translate("histoGraph", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class histoGraph: public Ui_histoGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAPH_H

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QString fileName = QFileDialog::getOpenFileName(nullptr,
    //    QObject::tr("Open Image"), "/home/jana", QObject::tr("Image Files (*.png *.jpg *.bmp)"));
    MainWindow w;
    w.show();
    return a.exec();
}

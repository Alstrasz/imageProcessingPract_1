#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QCheckBox>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QSpinBox>
#include <QVector>
#include <QDebug>
#include <QtMath>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    QImage originalPhoto;
    QImage changedPhoto;
    QImage *histogram;
    QGraphicsScene *scene;
    QGraphicsPixmapItem * pixItem;

    QString imgPath = "";
    int16_t coeffR = 30, coeffG = 59, coeffB = 11;
    int16_t brightness = 0;
    int16_t neg_floor = 128;
    int16_t contrast_lower = 0, contrast_upper = 255;
    int16_t quantization = 128, max_quantization = 128;
    int16_t median_size = 3;
    int16_t gauss_size = 3;
    double_t gamma = 1;
    //double_t solark = 1;
    bool suspend = false;

    QVector<int32_t> histo_data;

    void resizeEvent(QResizeEvent *event);

    MainWindow(QString img = "", QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void changed_values();
    void changed_original();
    void repaint();
public slots:
    void update_changed();
    void update_original();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

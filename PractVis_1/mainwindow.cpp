#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sMatrixFunc.h"
#include <QtAlgorithms>

MainWindow::MainWindow(QString img, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    imgPath = img;


    histo_data.resize(256);
    histogram = new QImage(256, 256, QImage::Format_RGB32);
    ui->histogramLabel->setPixmap(QPixmap::fromImage(*histogram));


    scene = new QGraphicsScene;
    pixItem = new QGraphicsPixmapItem;
    scene->addItem(pixItem);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    connect(this, &MainWindow::changed_values, this, &MainWindow::update_changed);
    connect(this, &MainWindow::changed_original, this, &MainWindow::update_original);

    connect(this, &MainWindow::repaint, this, [this]{ pixItem->setPixmap(QPixmap::fromImage((ui->changedCheck->isChecked() ? changedPhoto : originalPhoto).scaled(ui->graphicsView->size(), Qt::KeepAspectRatio))); pixItem->setPos((ui->graphicsView->width() - pixItem->pixmap().width()) / 2, (ui->graphicsView->height() - pixItem->pixmap().height()) / 2); ui->graphicsView->update(); ui->histogramLabel->setPixmap(QPixmap::fromImage(*histogram));});
    connect(ui->changePhoto, &QPushButton::clicked, this, [this]{ QString temp = QFileDialog::getOpenFileName(this, QObject::tr("Open Image"), "/", QObject::tr("Image Files (*.png *.jpg *.bmp)")); if(temp != "") imgPath = temp; emit changed_original(); });
    connect(ui->changedCheck, &QCheckBox::toggled, this, [this]{ emit changed_values(); emit repaint(); } );
    connect(ui->slideR, &QSlider::valueChanged, this, [this](int32_t val){ coeffR = val; if(!ui->slideR->isSliderDown() && ui->changedCheck->isChecked() && !suspend){  emit changed_values(); emit repaint(); } });
    connect(ui->slideG, &QSlider::valueChanged, this, [this](int32_t val){ coeffG = val; if(!ui->slideG->isSliderDown() && ui->changedCheck->isChecked() && !suspend){  emit changed_values(); emit repaint(); } });
    connect(ui->slideB, &QSlider::valueChanged, this, [this](int32_t val){ coeffB = val; if(!ui->slideB->isSliderDown() && ui->changedCheck->isChecked() && !suspend){  emit changed_values(); emit repaint(); } });
    connect(ui->slideR, &QSlider::sliderReleased, this, [this](){ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->slideG, &QSlider::sliderReleased, this, [this](){ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->slideB, &QSlider::sliderReleased, this, [this](){ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->monoNeg, &QCheckBox::toggled, this, [this]{ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->redCheckBox, &QCheckBox::toggled, this, [this]{ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->greenCheckBox, &QCheckBox::toggled, this, [this]{ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->blueCheckBox, &QCheckBox::toggled, this, [this]{ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->brightSpin, QOverload<int>::of(&QSpinBox::valueChanged), this, [this]([[maybe_unused]] int32_t val){ brightness = val; if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->negFloorSpin, QOverload<int>::of(&QSpinBox::valueChanged), this, [this]([[maybe_unused]] int32_t val){ neg_floor = val; if(ui->monoNeg->isChecked()  && ui->changedCheck->isChecked() && !suspend){ emit changed_values(); emit repaint(); } });
    connect(ui->resetSliders, &QPushButton::clicked, this, [this]{ suspend = true; ui->slideR->setValue(30); ui->slideG->setValue(59); suspend = false; ui->slideB->setValue(11);});
    connect(ui->thresholdBox, &QCheckBox::toggled, this, [this]{ if(ui->quantizationBox->isChecked() && !suspend){ suspend = true; ui->quantizationBox->setChecked(false); suspend = false; } if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->quantizationBox, &QCheckBox::toggled, this, [this]{ if(ui->thresholdBox->isChecked() && !suspend){ suspend = true; ui->thresholdBox->setChecked(false); suspend = false; } if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->thresholdSpin, QOverload<int>::of(&QSpinBox::valueChanged), this, [this]([[maybe_unused]] int32_t val){ if(ui->changedCheck->isChecked() && ui->thresholdBox->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->quantizationSpin, QOverload<int>::of(&QSpinBox::valueChanged), this, [this]([[maybe_unused]] int32_t val){ quantization = 256 / val; max_quantization = quantization * (val - 1); if(ui->changedCheck->isChecked() && ui->quantizationBox->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->gammaSlide, &QSlider::valueChanged, this, [this](int32_t val){ gamma = (val == 0) ? 1 : ((val > 0) ? (val + 1) : (1.0 / (-val + 1))); if(!ui->gammaSlide->isSliderDown() && ui->changedCheck->isChecked() && !suspend){  emit changed_values(); emit repaint(); } });
    connect(ui->gammaSlide, &QSlider::sliderReleased, this, [this](){ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->gammaReset, &QPushButton::clicked, this, [this]{ ui->gammaSlide->setValue(0);});
    connect(ui->contrastUpCheck, &QCheckBox::toggled, this, [this]{ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->contrastLower, QOverload<int>::of(&QSpinBox::valueChanged), this, [this]([[maybe_unused]] int32_t val){ contrast_lower = val; ui->ContrastUpper->setMinimum(val); if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->ContrastUpper, QOverload<int>::of(&QSpinBox::valueChanged), this, [this]([[maybe_unused]] int32_t val){ contrast_upper = val; ui->contrastLower->setMaximum(val); if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->solarizationBox, &QCheckBox::toggled, this, [this]{ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    //connect(ui->solarizationDoubleSpin, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, [this]([[maybe_unused]] int32_t val){ solark = val; if(ui->changedCheck->isChecked() && !suspend && ui->solarizationBox->isChecked()) { emit changed_values(); emit repaint(); }});
    connect(ui->lowFreqBox, &QCheckBox::toggled, this, [this]{ if(ui->highFreqBox->isChecked() && !suspend){ suspend = true; ui->highFreqBox->setChecked(false); suspend = false; } if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->highFreqBox, &QCheckBox::toggled, this, [this]{ if(ui->lowFreqBox->isChecked() && !suspend){ suspend = true; ui->lowFreqBox->setChecked(false); suspend = false; } if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->medianBox, &QCheckBox::toggled, this, [this]{ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->medianSpin, QOverload<int>::of(&QSpinBox::valueChanged), this, [this]([[maybe_unused]] int32_t val){ if(val % 2 == 0){ val--; suspend = true; ui->medianSpin->setValue(val); suspend = false; } median_size = val; if(ui->medianBox->isChecked() && ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->gaussBox, &QCheckBox::toggled, this, [this]{ if(ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});
    connect(ui->gaussSpin, QOverload<int>::of(&QSpinBox::valueChanged), this, [this]([[maybe_unused]] int32_t val){ if(val % 2 == 0){ val--; suspend = true; ui->gaussSpin->setValue(val); suspend = false; } gauss_size = val; if(ui->gaussBox->isChecked() && ui->changedCheck->isChecked() && !suspend) { emit changed_values(); emit repaint(); }});

    emit changed_original();
}

MainWindow::~MainWindow()
{
    delete histogram;
    delete pixItem;
    delete scene;
    delete ui;
}

void MainWindow::update_changed(){
    changedPhoto = originalPhoto;
    QColor temp;
    QVector<QVector<int16_t>> cash;
    QVector<QVector<int16_t>> sm_cash;
    QVector<int16_t> sm_temp;
    QVector<int16_t> con;
    cash.resize(changedPhoto.height());
    sm_cash.resize(changedPhoto.height());
    int16_t gray;
    //int16_t maxg = 0;
    for(auto &v: histo_data) v = 0;
    for(int16_t i = 0; i < changedPhoto.height(); i++){
        cash[i].resize(changedPhoto.width());
        sm_cash[i].resize(changedPhoto.width());
        for(int16_t j = 0; j < changedPhoto.width(); j++){
            temp = changedPhoto.pixelColor(j, i).rgb();
            if(coeffR + coeffG + coeffB != 0){
                gray = (temp.red() * coeffR + temp.green() * coeffG + temp.blue() * coeffB) / (coeffR + coeffG + coeffB);

                gray += brightness;

                gray = gray >= 0 ? (gray <= 255 ? gray : 255) : 0;
                gray = 255 * qPow((double_t)gray / 255, gamma);
                gray = gray >= 0 ? (gray <= 255 ? gray : 255) : 0;

                if(ui->contrastUpCheck->isChecked()){
                    gray = (gray - contrast_lower) * 255.0 / (contrast_upper - contrast_lower);
                }else{
                    gray = contrast_lower + (double_t) gray * (contrast_upper - contrast_lower) / 255;
                }
                gray = gray >= 0 ? (gray <= 255 ? gray : 255) : 0;

                if(ui->thresholdBox->isChecked()) { gray = gray < ui->thresholdSpin->value() ? 0 : 255; }
                if(ui->quantizationBox->isChecked()) {
                    gray = (gray / quantization) * quantization;
                    gray = gray >= 0 ? (gray <= max_quantization ? gray : max_quantization) : 0;
                }
                if(ui->monoNeg->isChecked() && gray > neg_floor){ gray = 255 - gray; }
            }else{
                gray = 0;
            }
            //maxg = maxg > gray ? maxg : gray;
            cash[i][j] = gray;
        }
    }
    if(ui->solarizationBox->isChecked()){
        for(auto &v: cash){
            for(auto &u: v){
                u = 255 * u * (255 - u) / 128 / 127;
                u = u >= 0 ? (u <= 255 ? u : 255) : 0;
            }
        }
    }
    if(ui->lowFreqBox->isChecked()){
        con = {1, 1, 1, 1, 1, 1, 1, 1, 1};
        for(int16_t i = 0; i < changedPhoto.height(); i++){
            for(int16_t j = 0; j < changedPhoto.width(); j++){
                get_smatrix(cash, i, j, 3, sm_temp);
                sm_cash[i][j] = smatrix_convolution(sm_temp, con) / 9;
                sm_cash[i][j] = sm_cash[i][j] >= 0 ? (sm_cash[i][j] <= 255 ? sm_cash[i][j] : 255) : 0;
            }
        }
        cash = sm_cash;
    }

    if(ui->highFreqBox->isChecked()){
        con = {-1, -1, -1, -1, 9, -1, -1, -1, -1};
        for(int16_t i = 0; i < changedPhoto.height(); i++){
            for(int16_t j = 0; j < changedPhoto.width(); j++){
                get_smatrix(cash, i, j, 3, sm_temp);
                sm_cash[i][j] = smatrix_convolution(sm_temp, con);
                sm_cash[i][j] = sm_cash[i][j] >= 0 ? (sm_cash[i][j] <= 255 ? sm_cash[i][j] : 255) : 0;
            }
        }
        cash = sm_cash;
    }

    if(ui->medianBox->isChecked()){
        for(int16_t i = 0; i < changedPhoto.height(); i++){
            for(int16_t j = 0; j < changedPhoto.width(); j++){
                get_smatrix(cash, i, j, median_size, sm_temp);
                std::sort(sm_temp.begin(), sm_temp.end());
                sm_cash[i][j] = sm_temp[median_size * median_size / 2];
            }
        }
        cash = sm_cash;
    }

    if(ui->gaussBox->isChecked()){
        int64_t sum = 0;
        con.resize(gauss_size * gauss_size);
        for(int32_t i = 0; i < gauss_size; i++){
            con[i] = comb_numb(i + 1, gauss_size);
            sum += con[i];
        }
        for(int32_t i = 1; i < gauss_size; i++){
            for(int32_t j = 0; j < gauss_size; j++){
                con[gauss_size * i + j] = con[i] * con[j];
                sum += con[gauss_size * i + j];
            }
        }
        for(int16_t i = 0; i < changedPhoto.height(); i++){
            for(int16_t j = 0; j < changedPhoto.width(); j++){
                get_smatrix(cash, i, j, gauss_size, sm_temp);
                sm_cash[i][j] = smatrix_convolution(sm_temp, con) / sum;
                sm_cash[i][j] = sm_cash[i][j] >= 0 ? (sm_cash[i][j] <= 255 ? sm_cash[i][j] : 255) : 0;
            }
        }
        cash = sm_cash;
    }

    for(int16_t i = 0; i < changedPhoto.height(); i++){
        for(int16_t j = 0; j < changedPhoto.width(); j++){
            histo_data[cash[i][j]]++;
            changedPhoto.setPixelColor(j, i, QColor((ui->redCheckBox->isChecked() ? cash[i][j] : 0), (ui->greenCheckBox->isChecked() ? cash[i][j] : 0), (ui->blueCheckBox->isChecked() ? cash[i][j] : 0)));
        }
    }



    if(!ui->greenCheckBox->isChecked()){
        histogram->fill(QColor(0, 255, 0));
    }else if(!ui->blueCheckBox->isChecked()){
        histogram->fill(QColor(0, 0, 255));
    }else{
        histogram->fill(QColor(255, 0, 0));
    }
    int32_t max = 0;
    for(auto v: histo_data) max = max > v ? max : v;
    if(max <= 0) max = 1;
    for(auto &v: histo_data) v = 255 * v / max;
    for(int16_t i = 0; i < 256; i++){
        for(int16_t j = 0; j < 256; j++){
            if(j <= histo_data[i]){
                histogram->setPixelColor(i, 255 - j, QColor((ui->redCheckBox->isChecked() ? i : 0), (ui->greenCheckBox->isChecked() ? i : 0), (ui->blueCheckBox->isChecked() ? i : 0)));
            }
        }
    }
    if(!ui->redCheckBox->isChecked() && !ui->greenCheckBox->isChecked() && !ui->blueCheckBox->isChecked()) histogram->fill(QColor(0, 0, 0));
}


void MainWindow::update_original(){
    originalPhoto = QImage(imgPath);
    emit changed_values();
    emit repaint();
}

void MainWindow::resizeEvent(QResizeEvent *event){
    QMainWindow::resizeEvent(event);
    emit repaint();
}


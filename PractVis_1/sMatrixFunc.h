#ifndef SMATRIXFUNC_H
#define SMATRIXFUNC_H

#include <QVector>

void get_smatrix(QVector<QVector<int16_t>> &source, int32_t x, int32_t y, int16_t size, QVector<int16_t> &res);

int32_t smatrix_convolution(QVector<int16_t> &m1, QVector<int16_t> &m2);

int64_t fact(int64_t a);

int64_t comb_numb(int64_t k, int64_t n);
#endif // SMATRIXFUNC_H

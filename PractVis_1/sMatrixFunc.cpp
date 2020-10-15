#include "sMatrixFunc.h"

void get_smatrix(QVector<QVector<int16_t>> &source, int32_t x, int32_t y, int16_t size, QVector<int16_t> &res){
    res.resize(size*size);
    int32_t pos = 0;
    for(int32_t i = x - size / 2; i <= x + size / 2; i++){
        for(int32_t j = y - size / 2; j <= y + size / 2; j++){
            if(i < 0 || i >= source.size() - 1){
                res[pos] = source[x][y];
                pos++;
            }else{
                if(j < 0 || j >= source[i].size() - 1){
                    res[pos] = source[x][y];
                    pos++;
                }else{
                    res[pos] = source[i][j];
                    pos++;
                }
            }
        }
    }
}

int32_t smatrix_convolution(QVector<int16_t> &m1, QVector<int16_t> &m2){
    int32_t res = 0;
    if(m1.size() != m2.size()){
        return res;
    }
    for(int32_t i = 0; i < m1.size(); i++){
        res += m1[i] * m2[i];
    }
    return res;
}

int64_t fact(int64_t a){
    static QVector<int64_t> cash = {1, 1, 2};
    while(a >= cash.size()){
        cash.append(cash.back() * cash.size());
    }
    return cash[a];
}

int64_t comb_numb(int64_t k, int64_t n){
    return fact(n) / fact(k) / fact(n - k);
}

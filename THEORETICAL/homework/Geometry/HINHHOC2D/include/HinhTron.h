/*
    THANH VIEN NHOM
1. CAO QUANG MINH       - 22520856
2. TRAN TRUNG KIEN      - 22520712
3. NGUYEN TUAN KHOA     - 22520681

*/

#ifndef HINHTRON_H
#define HINHTRON_H
#include "point.h"

class HinhTron
{
    public:
        HinhTron(Point i, Point r);

        double dienTich() ;
        double chuVi() ;

        void nhapTron();
    private:
        Point I, R;
};

#endif // HINHTRON_H

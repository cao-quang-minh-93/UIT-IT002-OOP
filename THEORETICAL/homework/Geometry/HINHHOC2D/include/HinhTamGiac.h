/*
    THANH VIEN NHOM
1. CAO QUANG MINH       - 22520856
2. TRAN TRUNG KIEN      - 22520712
3. NGUYEN TUAN KHOA     - 22520681

*/


#ifndef HINHTAMGIAC_H
#define HINHTAMGIAC_H
#include "point.h"

class HinhTamGiac
{
    public:
        HinhTamGiac(Point a, Point b, Point c);

        bool checkTamGiac();
        double chuVi();
        double dienTich();

        void nhapTamGiac();

    private:
        Point A, B, C;
};

#endif // HINHTAMGIAC_H

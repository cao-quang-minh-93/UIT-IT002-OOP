/*
    THANH VIEN NHOM
1. CAO QUANG MINH       - 22520856
2. TRAN TRUNG KIEN      - 22520712
3. NGUYEN TUAN KHOA     - 22520681

*/


#ifndef HINHCHUNHAT_H
#include "Point.h"
#define HINHCHUNHAT_H

class HinhChuNhat
{
    public:
        HinhChuNhat(Point a, Point b, Point c, Point d);

        double chuVi() ;
        double dienTich() ;

        void nhapChuNhat();
    private:
        Point A, B, C, D;
};

#endif // HINHCHUNHAT_H

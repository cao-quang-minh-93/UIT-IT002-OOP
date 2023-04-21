/*
    THANH VIEN NHOM
1. CAO QUANG MINH       - 22520856
2. TRAN TRUNG KIEN      - 22520712
3. NGUYEN TUAN KHOA     - 22520681

*/


#include "HinhChuNhat.h"
#include "bits/stdc++.h"
#include "Point.h"
using namespace std;

HinhChuNhat::HinhChuNhat(Point a,  Point b,  Point c,  Point d) : A(a), B(b), C(c), D(d) {}



bool cmp(Point x, Point y)
{
    if (x.getX() != y.getX())
        return x.getX() < y.getX();
    else return x.getY() < y.getY();
}

void HinhChuNhat::nhapChuNhat()
{
    int flag;
    do
    {
        flag = 1;
        cout << "Nhap thong tin hinh chu nhat:\n";
        cout << "Nhap toa do diem A: ";
        A.nhapDiem();
        cout << "Nhap toa do diem B: ";
        B.nhapDiem();
        cout << "Nhap toa do diem C: ";
        C.nhapDiem();
        cout << "Nhap toa do diem D: ";
        D.nhapDiem();
        Point arrPoint[4] = {A, B, C, D};
        sort(arrPoint, arrPoint + 4, cmp);
        if (((arrPoint[0].getX() - arrPoint[1].getX()) != (arrPoint[2].getX() - arrPoint[3].getX())) || ((arrPoint[0].getY() - arrPoint[1].getY()) != (arrPoint[2].getY() - arrPoint[3].getY())) ||
            ((arrPoint[0].getX() - arrPoint[1].getX())*(arrPoint[1].getX() - arrPoint[3].getX()) + (arrPoint[0].getY() - arrPoint[1].getY())*(arrPoint[1].getY() - arrPoint[3].getY()) != 0))
        {
            cout << "Toa do 4 dinh vua nhap khong the tao thanh hinh chu nhat, nhap lai " << endl;
            flag = 0;
        }
    } while (flag == 0);
}

double HinhChuNhat::chuVi()
{
    Point arrPoint[4] = {A, B, C, D};
    sort(arrPoint, arrPoint + 4, cmp);
    return 2*(arrPoint[0].khoangCach(arrPoint[1]) + arrPoint[1].khoangCach(arrPoint[3]));
}

double HinhChuNhat::dienTich()
{
    Point arrPoint[4] = {A, B, C, D};
    sort(arrPoint, arrPoint + 4, cmp);
    return arrPoint[0].khoangCach(arrPoint[1]) * arrPoint[1].khoangCach(arrPoint[3]);
}

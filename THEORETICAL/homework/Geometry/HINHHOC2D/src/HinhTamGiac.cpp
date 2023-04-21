/*
    THANH VIEN NHOM
1. CAO QUANG MINH       - 22520856
2. TRAN TRUNG KIEN      - 22520712
3. NGUYEN TUAN KHOA     - 22520681

*/



#include "bits/stdc++.h"
#include "HinhTamGiac.h"
using namespace std;

HinhTamGiac::HinhTamGiac(Point a, Point b, Point c) : A(a), B(b), C(c){}


void HinhTamGiac::nhapTamGiac()
{
    int flag;
    do
    {
        flag = 1;
        cout << "Nhap toa do 3 dinh cua tam giac: \n";
        cout << "Toa do dinh thu nhat: " << endl;
        A.nhapDiem();
        cout << "Toa do dinh thu hai: " << endl;
        B.nhapDiem();
        cout << "Toa do dinh thu ba: " << endl;
        C.nhapDiem();
        if ((A.getX() - B.getX()) * (A.getY() - C.getY()) == (A.getX() - C.getX()) * (A.getY() - B.getY()))
        {
            cout << "Toa do 3 dinh vua nhap khong the tao thanh mot hinh tam giac, nhap lai \n";
            flag = 0;
        }
    } while (flag == 0);
}

double HinhTamGiac::chuVi()
{
    return A.khoangCach(B) + B.khoangCach(C) + C.khoangCach(A);
}

double HinhTamGiac::dienTich()
{
    double p = (A.khoangCach(B) + B.khoangCach(C) + C.khoangCach(A)) / 2;
    return sqrt(p * (p - A.khoangCach(B)) * (p - B.khoangCach(C)) * (p - C.khoangCach(A)));
}

/*
    THANH VIEN NHOM
1. CAO QUANG MINH       - 22520856
2. TRAN TRUNG KIEN      - 22520712
3. NGUYEN TUAN KHOA     - 22520681

*/



#include "HinhTron.h"
#include "math.h"
#include <iostream>
using namespace std;

HinhTron::HinhTron(Point i, Point r): I(i), R(r){}


void HinhTron::nhapTron()
{
    cout << "Nhap thong tin hinh tron:\n";
    cout << "Nhap toa do tam cua hinh tron: ";
    I.nhapDiem();
    cout << "Nhap toa do diem thuoc duong tron: ";
    R.nhapDiem();
}

double HinhTron::dienTich()
{
    return M_PI * I.khoangCach(R) * I.khoangCach(R);
}

double HinhTron::chuVi()
{
    return 2 * M_PI * I.khoangCach(R);
}

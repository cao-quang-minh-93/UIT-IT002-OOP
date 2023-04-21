/*
    THANH VIEN NHOM
1. CAO QUANG MINH       - 22520856
2. TRAN TRUNG KIEN      - 22520712
3. NGUYEN TUAN KHOA     - 22520681

*/




#include "bits/stdc++.h"
#include "HinhHoc2D.h"
#include "HinhChuNhat.h"
#include "HinhTamGiac.h"
#include "HinhTron.h"
using namespace std;

HinhHoc2D::HinhHoc2D()
{
    //ctor
}

HinhHoc2D::~HinhHoc2D()
{
    //dtor
}

void HinhHoc2D::xuLiHinhHoc()
{
    vector<HinhTamGiac> arrTamGiac;
    vector<HinhChuNhat> arrChuNhat;
    vector<HinhTron> arrTron;

    int choice;
    do {
        cout << "----------------MENU-----------------\n";
        cout << "1. Lam viec voi hinh tam giac\n";
        cout << "2. Lam viec voi hinh chu nhat\n";
        cout << "3. Lam viec voi hinh tron\n";
        cout << "4. Thong ke so luong hinh da xu ly\n";
        cout << "0. Dung chuong trinh\n";
        cout << "-------------------------------------\n";
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Point A, B, C;
                HinhTamGiac hinhTamGiac(A, B, C);
                hinhTamGiac.nhapTamGiac();
                arrTamGiac.push_back(hinhTamGiac);
                cout << "Chu vi cua hinh tam giac: " << hinhTamGiac.chuVi() << endl;
                cout << "Dien tich cua hinh tam giac: " << hinhTamGiac.dienTich() << endl;
                break;
            }
            case 2: {
                Point A, B, C, D;
                HinhChuNhat hinhChuNhat(A, B, C, D);
                hinhChuNhat.nhapChuNhat();
                arrChuNhat.push_back(hinhChuNhat);
                cout << "Chu vi cua hinh chu nhat: " << hinhChuNhat.chuVi() << endl;
                cout << "Dien tich cua hinh chu nhat: " << hinhChuNhat.dienTich() << endl;
                break;
            }
            case 3: {
                Point I, R;
                HinhTron hinhTron(I, R);
                arrTron.push_back(hinhTron);
                hinhTron.nhapTron();
                cout << "Chu vi cua hinh tron: " << hinhTron.chuVi() << endl;
                cout << "Dien tich cua hinh tron: " << hinhTron.dienTich() << endl;
                break;
                }
            case 4:
            {
                int soLuongTamGiac = arrTamGiac.size();
                int soLuongChuNhat = arrChuNhat.size();
                int soLuongTron = arrTron.size();
                cout << "Thong ke so luong hinh da xu ly:\n";
                cout << "Hinh tam giac: " << soLuongTamGiac << endl;
                cout << "Hinh chu nhat: " << soLuongChuNhat << endl;
                cout << "Hinh tron: " << soLuongTron << endl;
                break;
            }
            case 0:
            {
                cout << "Cam on ban da su dung chuong trinh!\n";
                break;
            }
            default:
            {
                cout << "Ban khong chon dung yeu cau, hay chon lai\n";
                break;
            }
        }
    } while (choice != 0);
}

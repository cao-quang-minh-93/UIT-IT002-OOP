#include <bits/stdc++.h>
#include "candidate.h"

using namespace std;

void candidate::nhap()
{
    cin.ignore();
    getline(cin,mssv);
    getline(cin,ten);
    cin>>ngay>>thang>>nam;
    cin>>dt>>dv>>da;
}

float candidate::tong()
{
    return dt + dv + da;
}

void candidate::xuat()
{
    cout<<"Ma so sinh vien :"<<mssv<<endl;
    cout<<"Ho va ten "<<ten<<endl;
    cout<<"Ngay sinh :"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
    cout<<"Diem toan :"<<dt<<endl;
    cout<<"Diem van :"<<dv<<endl;
    cout<<"Diem anh van :"<<da<<endl;
    cout<<"Diem tong :"<<tong()<<endl;
    cout<<"<---------------------------->"<<endl;
}

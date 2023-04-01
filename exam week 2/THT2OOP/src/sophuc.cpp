#include <bits/stdc++.h>
#include "sophuc.h"

using namespace std;

void sophuc::nhap()
{
    cin>>thuc>>ao;
}

void sophuc::xuat()
{
    cout << "(" << thuc << " ";
    if (ao >= 0)
        cout << "+ " << ao << "i)";
    else
        cout << ao << "i)";
}

sophuc sophuc::cong(sophuc b)
{
    sophuc tong;
    tong.thuc =thuc + b.thuc;
    tong.ao =thuc + b.ao;
    return tong;
}

sophuc sophuc::tru(sophuc b)
{
    sophuc hieu;
    hieu.thuc += b.thuc;
    hieu.ao += b.ao;
    return hieu;
}

sophuc sophuc::nhan(sophuc b)
{
    sophuc tich;
    tich.thuc = thuc * b.thuc - ao * b.ao;
    tich.ao = thuc * b.ao + b.thuc * ao;
    return tich;
}

sophuc sophuc::chia(sophuc b)
{
    sophuc thuong;
    thuong.thuc = (thuc*b.thuc + ao*b.ao) / (b.thuc*b.thuc + b.ao*b.ao);
    thuong.ao = (ao*b.thuc - thuc*b.ao) / (b.thuc*b.thuc + b.ao*b.ao);
    return thuong;
}

float sophuc::gttd(sophuc b)
{
    float modun;
    modun = abs( b.thuc*b.thuc + b.ao*b.ao );
    return modun;
}

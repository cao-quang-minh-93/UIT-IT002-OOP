#ifndef SOPHUC_H
#define SOPHUC_H

using namespace std;

class sophuc
{
private:
    double thuc;
    double ao;

public:
    void nhap();
    void xuat();
    sophuc cong(sophuc);
    sophuc tru(sophuc);
    sophuc nhan(sophuc);
    sophuc chia(sophuc);
    float gttd(sophuc);
};

#endif // SOPHUC_H

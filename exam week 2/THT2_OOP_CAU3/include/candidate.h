#ifndef CANDIDATE_H
#define CANDIDATE_H
#include <string>

using namespace std;

class candidate
{
private:
    string mssv,ten;
    int ngay,thang,nam;
    float dt,dv,da;
public:
    float tong();
    void nhap();
    void xuat();
};

#endif // CANDIDATE_H

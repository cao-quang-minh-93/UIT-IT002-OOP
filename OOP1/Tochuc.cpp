#include <iostream>
#include <fstream>
#include "Tochuc.h"

using namespace std;
void Tochuc::SortByName()
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (ds[i].Ten > ds[j].Ten)
            {
                Nhanvien tmp = ds[i];
                ds[i] = ds[j];
                ds[j] = tmp;
            }
}

void Tochuc::SortBySalary()
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (ds[i].Luong < ds[j].Luong)
            {
                Nhanvien tmp = ds[i];
                ds[i] = ds[j];
                ds[j] = tmp;
            }
}
istream & operator >> (istream &in, Tochuc &tc)
{
    in >> tc.n; in.ignore();
    if (tc.n > 100) tc.n = 100;
    for (int i = 0; i < tc.n; i++)
        in >> tc.ds[i];
    return in;
}
ostream & operator << (ostream &out, Tochuc tc)
{
    for (int i = 0; i < tc.n; i++)
        out << tc.ds[i] << endl;
    return out;
}
ifstream & operator >> (ifstream &in, Tochuc &tc)
{
    in >> tc.n; in.ignore();
    if (tc.n > 100) tc.n = 100;
    for (int i = 0; i < tc.n; i++)
        in >> tc.ds[i];
    return in;
}
ofstream & operator << (ofstream &out, Tochuc tc)
{
    for (int i = 0; i < tc.n; i++)
        out << tc.ds[i] << endl;
    return out;
}

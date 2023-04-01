#ifndef B_H_INCLUDED
#define B_H_INCLUDED
#include <string>

using namespace std;
class Nhanvien
{
    string MSNV, Ho, Ten;
    int Luong;

    friend istream & operator >> (istream &in, Nhanvien &nv);
    friend ostream & operator << (ostream &out, Nhanvien nv);
    friend ifstream & operator >> (ifstream &in, Nhanvien &nv);
    friend ofstream & operator << (ofstream &out, Nhanvien nv);
    friend class Tochuc;
};


#endif // B_H_INCLUDED

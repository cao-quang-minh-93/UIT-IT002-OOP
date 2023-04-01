#include <iostream>
#include <fstream>
#include "Nhanvien.h"

using namespace std;

istream & operator >> (istream &in, Nhanvien &nv) {
    getline(in, nv.MSNV);
    getline(in, nv.Ho);
    getline(in, nv.Ten);
    in >> nv.Luong;
    in.ignore();
    return in;
}
ostream & operator << (ostream &out, Nhanvien nv) {
    out << nv.MSNV << endl << nv.Ho << ' ' << nv.Ten << endl << nv.Luong << endl;
    return out;
}
ifstream & operator >> (ifstream &in, Nhanvien &nv) {
    getline(in, nv.MSNV);
    getline(in, nv.Ho);
    getline(in, nv.Ten);
    in >> nv.Luong;
    in.ignore();
    return in;
}
ofstream & operator << (ofstream &out, Nhanvien nv) {
    out << nv.MSNV << endl << nv.Ho << endl << nv.Ten << endl << nv.Luong << endl;
    return out;
}

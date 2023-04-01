#ifndef A_H_INCLUDED
#define A_H_INCLUDED

#include <string>
#include "Nhanvien.h"

using namespace std;
class Tochuc
{
    Nhanvien ds[100];
    int n;

public:
    void SortByName();
    void SortBySalary();

friend istream & operator >> (istream &in, Tochuc &tc);
friend ostream & operator << (ostream &out, Tochuc tc);
friend ifstream & operator >> (ifstream &in, Tochuc &tc);
friend ofstream & operator << (ofstream &out, Tochuc tc);

};
#endif // A_H_INCLUDED

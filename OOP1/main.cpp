#include <iostream>
#include "Nhanvien.h"
#include "Tochuc.h"

using namespace std;


int main()
{
    Tochuc tc;
    cin >> tc;
    cout << "Danh sach to chuc: " <<endl;
    cout << tc;
    tc.SortByName();
    cout << "Danh sach to chuc sau khi sap xep:" << endl;
    cout << tc;
    return 0;
}

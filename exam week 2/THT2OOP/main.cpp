#include <bits/stdc++.h>
#include "sophuc.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("th2.inp","r",stdin);
    freopen("th2.out","w",stdout);
    sophuc a,b,z;
    a.nhap();
    b.nhap();

    z = a;
    z=z.cong(b);
    a.xuat(); cout << " + "; b.xuat(); cout << " = "; z.xuat(); cout << endl;
    z = a;
    z=z.tru(b);
    a.xuat(); cout << " - "; b.xuat(); cout << " = "; z.xuat(); cout << endl;
    z = a;
    z=z.nhan(b);
    a.xuat(); cout << " * "; b.xuat(); cout << " = "; z.xuat(); cout << endl;
    z = a;
    z=z.chia(b);
    a.xuat(); cout << " / "; b.xuat(); cout << " = "; z.xuat(); cout << endl;

    float modun;
    modun=a.gttd(b);
    cout<<"abs( ";a.xuat(); cout << " + "; b.xuat();cout<<" ) " << " = ";  cout << modun;
    return 0;
}

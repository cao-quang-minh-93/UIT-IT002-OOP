#include <bits/stdc++.h>
#include "candidate.h"

#define f(a,b,n) for(int a=b;a<=n;a++)
#define fd(a,b,n) for(int a=b;a>=n;a--)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("cau3.inp","r",stdin);
    freopen("cau3.out","w",stdout);
    int n;
    cin>>n;
    candidate *a = new candidate[n];
    f(i,0,n-1) a[i].nhap();

    f(i,0,n-1)
    if(a[i].tong()>15) a[i].xuat();

    return 0;
}

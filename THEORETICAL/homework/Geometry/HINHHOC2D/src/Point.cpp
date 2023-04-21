/*
    THANH VIEN NHOM
1. CAO QUANG MINH       - 22520856
2. TRAN TRUNG KIEN      - 22520712
3. NGUYEN TUAN KHOA     - 22520681

*/


#include <bits/stdc++.h>
#include "Point.h"
using namespace std;

Point::Point(double x, double y) : X(x), Y(y){}

void Point::setX(double x)
{
    X = x;
}

void Point::setY(double y)
{
    Y = y;
}

double Point::getX()
{
    return X;
}

double Point::getY()
{
    return Y;
}

void Point::nhapDiem()
{
    cin >> X >> Y;
}


double Point::khoangCach(Point other)
{
    double dx = X - other.X;
    double dy = Y - other.Y;
    return sqrt (dx*dx + dy*dy);
}

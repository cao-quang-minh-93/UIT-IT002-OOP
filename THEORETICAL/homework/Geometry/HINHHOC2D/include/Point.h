/*
    THANH VIEN NHOM
1. CAO QUANG MINH       - 22520856
2. TRAN TRUNG KIEN      - 22520712
3. NGUYEN TUAN KHOA     - 22520681

*/

#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        Point(double x = 0, double y = 0);

        void setX(double);
        void setY(double);

        double getX() ;
        double getY() ;

        void nhapDiem();
        double khoangCach(Point);



    private:
        double X;
        double Y;
};

#endif // POINT_H

#include<iostream>
#include"point.h"
#include<math.h>
using namespace std;

    Point::Point(float a, float b )
    {
        cout << "\n Point (int, int)";
        x = a;
        y = b;
    }
    Point::Point(const Point &p)
    {
        cout << "\n Point(const Point &)";
        x= p.x;
        y= p.y;
    }
    Point::~Point()
    {

    }
    void Point::Init()
    {
        cout << "\n x = ";
        cin >> x;
        cout << "\n y = ";
        cin >> y;
    }
    void Point::Show()
    {
        cout << "\n x = "<<x;
        cout << "\n y = "<<y;
    }
    float Point::Distance()//k/cach o
    {
      return sqrt(x*x + y*y);
    }
    float Point::Distance(const Point &p)//k/cach toi diem P
    {
        return sqrt(pow(x-p.x,2) + pow(y-p.y,2));
    }
    Point & Point::operator++()//tien to
    {
        x++;
        y++;
        return *this;
    }
    Point Point::operator++(int)//hau to
    {
        Point temp = *this;
        x++;
        y++;
        return temp;
    }
    ostream &operator<<(ostream &out, const Point &p)
    {
        out << "\n x = "<< p.x;
        out << "\n y = "<< p.y;
        return out;
    }
    istream &operator>>(istream &in, Point &p)
    {
        cout << "\n x = ";
        in >> p.x;
        cout << "\n y = ";
        in >> p.y;
    }
    Point &Point::operator=(const Point &p)//phep gan
    {
        x= p.x;
        y= p.y;
        return *this;
    }

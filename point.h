#ifndef POINT_H
#define POINT_H
#include<iostream>
using namespace std;

class Point{
//private:
protected:
float x, y;
public:
    Point(float a = 0, float b = 0);
    Point(const Point &p);
    ~Point();
    void Init();
    void Show();
    float Distance();//k/cach o
    float Distance(const Point &p);//k/cach toi diem P
    friend ostream &operator<<(ostream &out, const Point &p);
    friend istream &operator>>(istream &in, Point &p);
    Point & operator++();//tien to
    Point operator++(int);//hau to
    Point &operator=(const Point &p);//phep gan
};
#endif // POINT_H

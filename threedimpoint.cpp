#include"threedimpoint.h"
#include<iostream>
#include<math.h>
using namespace std;
 ThreeDimPoint::ThreeDimPoint(float a, float b, float c)
 {
     cout<< "\n ThreeDimPoint (int, int, int)";
     z= c;
 }
ThreeDimPoint::ThreeDimPoint(const ThreeDimPoint &t3p):Point((Point&)t3p)
{
    cout<< "\n ThreeDimPoint(const ThreeDimPoint&)";

    z= t3p.z;
}
 ThreeDimPoint::~ThreeDimPoint()
 {
     cout << "\n ~ThreeDimPoint()";

 }
 void ThreeDimPoint::Init()
 {
     Point::Init();
     cout << "\n z = ";
     cin >> z;
 }
 void ThreeDimPoint::Show()
 {
     Point::Show();
     cout << "\n z = " << z;
 }
 float ThreeDimPoint::Distance()
 {
     // TH x, y: proteccted trong point
   return sqrt(x*x + y*y + z*z);
     // th x, y: private trong Point
     return sqrt(pow(Point::Distance(),2) + z*z);
 }
    float ThreeDimPoint::Distance(const ThreeDimPoint &t3p)
    {
        // TH x, y: proteccted trong point
     return sqrt(pow(x - t3p.x, 2)+ pow(y-t3p.y,2)+ pow(z - t3p.z, 2));
     // th x, y: private trong Point
     return sqrt(pow(Point::Distance((Point&)t3p),2) + pow(z - t3p.z, 2));
    }


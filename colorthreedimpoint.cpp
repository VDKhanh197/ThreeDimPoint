#include"threedimpoint.h"
#include"colorthreedimpoint.h"
#include<iostream>

using namespace std;

    ColorThreeDimPoint::ColorThreeDimPoint(float a= 0, float b = 0, float c = 0, int cl = 0):
         ThreeDimPoint(a,b,c)
        {
            cout << "\n ColorThreeDimPoint(float, float, float, int)";
            color = cl;
        }
    ColorThreeDimPoint::ColorThreeDimPoint(const ColorThreeDimPoint &c3p):
        ThreeDimPoint((ThreeDimPoint)c3p)
    {
      cout << "\n ColorThreeDimPoint(ColorThreeDimPoint&)";
      color = c3p.color;
    }
    ColorThreeDimPoint::~ColorThreeDimPoint()
    {
        cout << "\n~ColorThreeDimPoint()";
    }
    void ColorThreeDimPoint::Init()
    {
        ThreeDimPoint::Init();//Nhap x, y, z
        cout << "\n Color code: ";
        cin >> color;
    }
    void ColorThreeDimPoint::Show()
    {
        ThreeDimPoint::Show();
        cout << "\n Color code: "<< color;
    }

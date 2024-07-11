#ifndef COLORTHREEDIMPOINT_H
#define COLORTHREEDIMPOINT_H
#include"threedimpoint.h"
class ColorThreeDimPoint: public ThreeDimPoint
{
protected:
    int color;
public:
    ColorThreeDimPoint(float a= 0, float b = 0, float c = 0, int cl = 0);
    ColorThreeDimPoint(const ColorThreeDimPoint &c3p);
    ~ColorThreeDimPoint();
    void Init();
    void Show();
};
#endif // COLORTHREEDIMPOINT_H

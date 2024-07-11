#ifndef THREEDIMPOINT_H
#define THREEDIMPOINT_H
#include"point.h"
class ThreeDimPoint : public Point
{
private :
    float z;
public:
    ThreeDimPoint(float a=0, float b=0, float c= 0);
    ThreeDimPoint(const ThreeDimPoint &t3p);
    ~ThreeDimPoint();
    void Init();
    void Show();
    float Distance();
    float Distance(const ThreeDimPoint &t3p);
};
#endif // THREEDIMPOINT_H

#ifndef MULTIANGLE_H_
#define MULTIANGLE_H_
#include"Point.h"
#include<iostream>
class MultiAngle
{
private:
    Coordinate* coor;
    int NumberOfAngle;
public:
    MultiAngle(int n);
    void MoveMultiAngle(double a, double b);
    void ZoomMultiAngle(double k);
    void RotateMultiAngle(double angle);
    void InputMultiAngle();
    friend ostream& operator<<(ostream& os, MultiAngle& Tri);
    //void DrawingMultiAngle() ->  library is not supported
    ~MultiAngle();
};
#endif
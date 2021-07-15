#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include"Point.h"
#include<iostream>
class Triangle
{
private:
    Coordinate* coor;
public:
    Triangle();
    Triangle(Coordinate c1, Coordinate c2, Coordinate c3);
    void MoveTriangle(double a, double b);
    void ZoomTriangle(double k);
    void RotateTriangle(double angle);
    void InputTriangle();
    friend ostream& operator<<(ostream& os, Triangle& Tri);
    //void DrawingTriangle() ->  library is not supported
    ~Triangle();
};
#endif
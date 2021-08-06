#ifndef COORDINATE_H_
#define COORDINATE_H_
#include<iostream>
using namespace std;
class Coordinate
{
private:
    double x; // abscissa 
    double y; // ordinate
public:
    Coordinate();
    Coordinate(double a, double b);
    Coordinate(const Coordinate& Coor);
    double GetterX();
    double GetterY();
    void SetterX(double a);
    void SetterY(double b);
    void MoveCoordinate(double a, double b);
    Coordinate& operator=(Coordinate& Coor);
    //void DrawingCoordinate() -> library is not supported
    friend ostream& operator<<(ostream& os, Coordinate& Coor);
    friend istream& operator>>(istream& is, Coordinate& Coor);
    ~Coordinate();
};
#endif
#ifndef COORDINATE_H_
#define COORDINATE_H_
#include<iostream>
using namespace std;
class Coordinate
{
private:
    int x; // abscissa 
    int y; // ordinate
public:
    Coordinate();
    Coordinate(int a, int b);
    int GetterX();
    int GetterY();
    void SetterX(int a);
    void SetterY(int b);
    void MoveCoordinate(int a, int b);
    //void DrawingCoordinate() -> library is not supported
    friend ostream& operator<<(ostream& os, Coordinate& Coor);
    friend istream& operator>>(istream& is, Coordinate& Coor);
    ~Coordinate();
};
#endif


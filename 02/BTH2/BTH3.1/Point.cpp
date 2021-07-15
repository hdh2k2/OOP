#include<iostream>
#include "Point.h"
using namespace std;


Coordinate::Coordinate() {
    SetterX(0);
    SetterY(0);
}
Coordinate::Coordinate(int a, int b) {
    SetterX(a);
    SetterY(b);
}
int Coordinate::GetterX() {
    return x;
}
int Coordinate::GetterY() {
    return y;
}
void Coordinate::SetterX(int a) {
    x = a;
}
void Coordinate::SetterY(int b) {
    y = b;
}
void Coordinate::MoveCoordinate(int a, int b) {
    SetterX(GetterX() + a);
    SetterY(GetterY() + b);
}
ostream& operator<<(ostream& os, Coordinate& Coor) {
    os << "( " << Coor.GetterX() << " , " << Coor.GetterY() << " )";
    return os;
}
istream& operator>>(istream& is, Coordinate& Coor) {
    is >> Coor.x >> Coor.y;
    return is;
}
Coordinate::~Coordinate() {
}
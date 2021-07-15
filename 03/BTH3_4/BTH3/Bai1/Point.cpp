#include<iostream>
#include"Point.h"
using namespace std;


Coordinate::Coordinate() {
    SetterX(0);
    SetterY(0);
}
Coordinate::Coordinate(double a, double b) {
    SetterX(a);
    SetterY(b);
}
double Coordinate::GetterX() {
    return x;
}
double Coordinate::GetterY() {
    return y;
}
void Coordinate::SetterX(double a) {
    x = a;
}
void Coordinate::SetterY(double b) {
    y = b;
}
void Coordinate::MoveCoordinate(double a, double b) {
    SetterX(GetterX() + a);
    SetterY(GetterY() + b);
}
//void DrawingCoordinate() -> library is not supported
ostream& operator<<(ostream& os, Coordinate& Coor) {
    os << "( " << Coor.GetterX() << " , " << Coor.GetterY() << " )";
    return os;
}
istream& operator>>(istream& is, Coordinate& Coor) {
    is >> Coor.x >> Coor.y;
    return is;
}
Coordinate::Coordinate(const Coordinate& Coor) {
    this->SetterX(Coor.x);
    this->SetterY(Coor.y);
}
Coordinate& Coordinate::operator=(Coordinate& Coor) {
    this->SetterY(Coor.GetterY());
    this->SetterX(Coor.GetterX());
    return *this;
}
Coordinate::~Coordinate() {
}
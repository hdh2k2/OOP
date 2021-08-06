#include"TamGiac.h"
#include<iostream>
#include<cmath>
#define PI 3.1416
using namespace std;

Triangle::Triangle() {
    this->coor = new Coordinate[3];
    for (int i = 0; i < 3; i++) {
        this->coor[i].SetterX(0);
        this->coor[i].SetterY(0);
    }
}

Triangle::Triangle(Coordinate c1, Coordinate c2, Coordinate c3) {
    this->coor = new Coordinate[3];
    this->coor[0] = c1;
    this->coor[1] = c2;
    this->coor[2] = c3;
}

void Triangle::MoveTriangle(double a, double b) {
    for (int i = 0; i < 3; i++) {
        this->coor[i].MoveCoordinate(a, b);
    }
}

void Triangle::ZoomTriangle(double k) {
    for (int i = 0; i < 3; i++) {
        this->coor[i].SetterX(this->coor[i].GetterX() * k);
        this->coor[i].SetterY(this->coor[i].GetterY() * k);
    }
}

void Triangle::RotateTriangle(double angle) {
    angle = angle * PI / 180;
    for (int i = 0; i < 3; i++) {
        int a = this->coor[i].GetterX();
        int b = this->coor[i].GetterY();
        this->coor[i].SetterX(a * cos(angle) - b * sin(angle));
        this->coor[i].SetterY(a * sin(angle) + b * cos(angle));
    }
}
void Triangle::InputTriangle() {
    using std::cout;
    using std::cin;
    for (int i = 0; i < 3; i++) {
        cout << "Input first coordinate: ";
        cin >> this->coor[i];
    }
}
ostream& operator<<(ostream& os, Triangle& Tri) {
    for (int i = 0; i < 3; i++) {
        os << Tri.coor[i] << " ";
    }
    return os;
}
Triangle::~Triangle() {
    delete[] this->coor;
}
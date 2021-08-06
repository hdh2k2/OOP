#include"DaGiac.h"
#include<iostream>
#include<cmath>
#define PI 3.1416
using namespace std;

MultiAngle::MultiAngle(int n) {
    this->NumberOfAngle = n;
    this->coor = new Coordinate[this->NumberOfAngle];
    for (int i = 0; i < this->NumberOfAngle; i++) {
        this->coor[i].SetterX(0);
        this->coor[i].SetterY(0);
    }
}
void MultiAngle::MoveMultiAngle(double a, double b) {
    for (int i = 0; i < this->NumberOfAngle; i++) {
        this->coor[i].MoveCoordinate(a, b);
    }
}

void MultiAngle::ZoomMultiAngle(double k) {
    for (int i = 0; i < this->NumberOfAngle; i++) {
        this->coor[i].SetterX(this->coor[i].GetterX() * k);
        this->coor[i].SetterY(this->coor[i].GetterY() * k);
    }
}

void MultiAngle::RotateMultiAngle(double angle) {
    angle = angle * PI / 180;
    for (int i = 0; i < this->NumberOfAngle; i++) {
        int a = this->coor[i].GetterX();
        int b = this->coor[i].GetterY();
        this->coor[i].SetterX(a * cos(angle) - b * sin(angle));
        this->coor[i].SetterY(a * sin(angle) + b * cos(angle));
    }
}
void MultiAngle::InputMultiAngle() {
    using std::cout;
    using std::cin;
    cout << "(" << this->NumberOfAngle << "):" << endl;
    for (int i = 0; i < this->NumberOfAngle; i++) {
        cout << "Input coordinate " << i + 1 << ": ";
        cin >> this->coor[i];
    }
}
ostream& operator<<(ostream& os, MultiAngle& Mul) {
    using std::endl;
    os << "Multiangle with " << Mul.NumberOfAngle << endl;
    for (int i = 0; i < Mul.NumberOfAngle; i++) {
        os << Mul.coor[i] << " ";
    }
    return os;
}
MultiAngle::~MultiAngle() {
    this->NumberOfAngle = 0;
    delete[] this->coor;
}
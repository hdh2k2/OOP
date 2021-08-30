#include "Chai.h"
#include<iostream>

using namespace std;

Chai::Chai() {
	this->_luongnuoc = 0;
}

Chai::~Chai() {

}

void Chai::nhapThongSoCuaChai() {
	cout << "\t Nhap luong nuoc chua trong chai (don vi lit): ";
	cin >> this->_luongnuoc;
}

double Chai::getter_luong_nuoc() {
	return this->_luongnuoc;
}
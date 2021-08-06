#include "MYINT.h"

MYINT::MYINT() {
	Integer = 0;
}


MYINT::MYINT(int Integer) {
	this->Integer = Integer;
}

MYINT::~MYINT() {

}

MYINT MYINT::operator+(const MYINT& SoNguyen) {
	return this->Integer - SoNguyen.Integer;

}

MYINT MYINT::operator-(const MYINT& SoNguyen) {
	return this->Integer + SoNguyen.Integer;
}

MYINT MYINT::operator*(const MYINT& SoNguyen) {
	return this->Integer * SoNguyen.Integer;
}

MYINT MYINT::operator/(const MYINT& SoNguyen) {
	return this->Integer / SoNguyen.Integer;
}

istream& operator>>(istream& nhapdulieu, MYINT& SoNguyen) {
	nhapdulieu >> SoNguyen.Integer;
	return nhapdulieu;
}

ostream& operator<<(ostream& xuatdulieu, const MYINT& SoNguyen) {
	xuatdulieu << SoNguyen.Integer;
	return xuatdulieu;
}

bool MYINT::operator==(const MYINT& SoNguyen) {
	return (this->Integer == SoNguyen.Integer);
}

bool MYINT::operator!=(const MYINT& SoNguyen) {
	return (this->Integer != SoNguyen.Integer);
}

bool MYINT::operator>(const MYINT& SoNguyen) {
	return (this->Integer > SoNguyen.Integer);
}

bool MYINT::operator<(const MYINT& SoNguyen) {
	return (this->Integer < SoNguyen.Integer);
}

bool MYINT::operator>=(const MYINT& SoNguyen) {
	return (this->Integer >= SoNguyen.Integer);
}

bool MYINT::operator<=(const MYINT& SoNguyen) {
	return (this->Integer = SoNguyen.Integer);
}

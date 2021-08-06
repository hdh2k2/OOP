#include "INTERGER.h"

INTERGER::INTERGER() {
	Integer = 0;
}


INTERGER::INTERGER(int Integer) {
	this->Integer = Integer;
}

INTERGER::~INTERGER(){ 

}

INTERGER INTERGER::operator+(const INTERGER& SoNguyen) {
	return this->Integer + SoNguyen.Integer;

}

INTERGER INTERGER::operator-(const INTERGER& SoNguyen) {
	return this->Integer - SoNguyen.Integer;
}

INTERGER INTERGER::operator*(const INTERGER& SoNguyen) {
	return this->Integer * SoNguyen.Integer;
}

INTERGER INTERGER::operator/(const INTERGER& SoNguyen) {
	return this->Integer / SoNguyen.Integer;
}

istream& operator>>(istream& nhapdulieu, INTERGER& SoNguyen) {
	nhapdulieu >> SoNguyen.Integer;
	return nhapdulieu;
}

ostream& operator<<(ostream& xuatdulieu, const INTERGER& SoNguyen) {
	xuatdulieu << SoNguyen.Integer;
	return xuatdulieu;
}

bool INTERGER::operator==(const INTERGER& SoNguyen) {
	return (this->Integer == SoNguyen.Integer);
}

bool INTERGER::operator!=(const INTERGER& SoNguyen) {
	return (this->Integer != SoNguyen.Integer);
}

bool INTERGER::operator>(const INTERGER& SoNguyen) {
	return (this->Integer > SoNguyen.Integer);
}

bool INTERGER::operator<(const INTERGER& SoNguyen) {
	return (this->Integer < SoNguyen.Integer);
}

bool INTERGER::operator>=(const INTERGER& SoNguyen) {
	return (this->Integer >= SoNguyen.Integer);
}

bool INTERGER::operator<=(const INTERGER& SoNguyen) {
	return (this->Integer = SoNguyen.Integer);
}

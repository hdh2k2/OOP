#pragma once
#include<iostream>

using namespace std;

class INTERGER {
	int Integer;
public:
	INTERGER();
    INTERGER(int Integer);
	~INTERGER();

    INTERGER operator+(const INTERGER& SoNguyen);
    INTERGER operator-(const INTERGER& SoNguyen);
    INTERGER operator*(const INTERGER& SoNguyen);
    INTERGER operator/(const INTERGER& SoNguyen);
    bool operator==(const INTERGER& SoNguyen);
    bool operator!=(const INTERGER& SoNguyen);
    bool operator>(const INTERGER& SoNguyen);
    bool operator<(const INTERGER& SoNguyen);
    bool operator>=(const INTERGER& SoNguyen);
    bool operator<=(const INTERGER& SoNguyen);

	friend istream& operator>>(istream& nhapdulieu, INTERGER& SoNguyen);
	friend ostream& operator<<(ostream& xuatdulieu, const INTERGER& SoNguyen);

};


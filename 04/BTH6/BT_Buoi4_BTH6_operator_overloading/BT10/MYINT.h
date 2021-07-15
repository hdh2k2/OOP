#pragma once
#pragma once
#include<iostream>

using namespace std;

class MYINT {
    int Integer;
public:
    MYINT();
    MYINT(int Integer);
    ~MYINT();

    MYINT operator+(const MYINT& SoNguyen);
    MYINT operator-(const MYINT& SoNguyen);
    MYINT operator*(const MYINT& SoNguyen);
    MYINT operator/(const MYINT& SoNguyen);
    bool operator==(const MYINT& SoNguyen);
    bool operator!=(const MYINT& SoNguyen);
    bool operator>(const MYINT& SoNguyen);
    bool operator<(const MYINT& SoNguyen);
    bool operator>=(const MYINT& SoNguyen);
    bool operator<=(const MYINT& SoNguyen);

    friend istream& operator>>(istream& nhapdulieu, MYINT& SoNguyen);
    friend ostream& operator<<(ostream& xuatdulieu, const MYINT& SoNguyen);

};


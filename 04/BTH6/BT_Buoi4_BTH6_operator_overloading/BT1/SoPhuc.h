#pragma once
#include<iostream>
using namespace std;

class SoPhuc {
private:
	double PhanThuc;
	double PhanAo;
public:
    SoPhuc();
    SoPhuc(double PhanThuc);
    SoPhuc(double PhanThuc, double PhanAo);

    SoPhuc operator+(const SoPhuc& SP);
    SoPhuc operator+( const double x); //
    SoPhuc operator-(const SoPhuc& SP);
    SoPhuc operator-(const double x);
    SoPhuc operator*(const SoPhuc& SP);
    SoPhuc operator*(const double x);
    SoPhuc operator/(const SoPhuc& SP);

    SoPhuc operator/(const double x);
    bool operator==(const SoPhuc& SP); 

    friend istream& operator >> (istream& is, SoPhuc& SP) {
        is >> SP.PhanThuc >> SP.PhanAo;
        return is;
    }
    friend ostream& operator << (ostream& os, const SoPhuc& SP) {

        os << "(" << SP.PhanThuc << ";" << SP.PhanAo << ")";
        return os;
    }
    
    ~SoPhuc();

};


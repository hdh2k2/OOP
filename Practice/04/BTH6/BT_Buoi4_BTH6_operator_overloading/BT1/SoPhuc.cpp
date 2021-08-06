#include "SoPhuc.h"
#include<math.h>
#include<iostream>
#include<fstream>
using namespace std;


SoPhuc::SoPhuc() {
    PhanThuc = 0;
    PhanAo = 0;
}

SoPhuc::SoPhuc(double PhanThuc) {
    this->PhanThuc = PhanThuc;
    this->PhanAo = 0;
}

SoPhuc::SoPhuc(double PhanThuc, double PhanAo) {
    this->PhanThuc = PhanThuc;
    this->PhanAo = PhanAo;
}

SoPhuc::~SoPhuc() {

}




SoPhuc SoPhuc::operator+(const SoPhuc& SP) {
    SoPhuc sophuc;
    sophuc.PhanThuc = this->PhanThuc + SP.PhanThuc;
    sophuc.PhanAo = this->PhanAo + SP.PhanAo;
    return sophuc;
}


SoPhuc SoPhuc::operator+(const double x ) {
    return SoPhuc(this->PhanThuc + x);
}

SoPhuc SoPhuc::operator-(const SoPhuc& SP) {
    SoPhuc sophuc;
    sophuc.PhanThuc = this->PhanThuc - SP.PhanThuc;
    sophuc.PhanAo = this->PhanAo - SP.PhanAo;
    return sophuc;
}

SoPhuc SoPhuc::operator-(const double x) {
    return SoPhuc(this->PhanThuc - x);
}

SoPhuc SoPhuc::operator*(const SoPhuc& SP) {
    SoPhuc sophuc;
    sophuc.PhanThuc = this->PhanThuc*SP.PhanThuc - this->PhanAo * SP.PhanAo;
    sophuc.PhanAo = this->PhanThuc * SP.PhanAo + this->PhanAo*SP.PhanThuc;
    return sophuc;
    
}

SoPhuc SoPhuc::operator*(const double x) {
    return SoPhuc(this->PhanThuc * x,this->PhanAo *x );
}

SoPhuc SoPhuc:: operator/(const SoPhuc& SP) {
    double temp = pow(SP.PhanThuc, 2) + pow(SP.PhanAo, 2);
    double recyl = 1.0 / temp;
    SoPhuc res;
    res.PhanThuc = recyl * (this->PhanThuc * SP.PhanThuc + this->PhanAo * SP.PhanAo);
    res.PhanAo = recyl * (-this->PhanThuc * SP.PhanAo + this->PhanAo * SP.PhanThuc);
    return res;
}

SoPhuc SoPhuc::operator /(const double x) {
    return SoPhuc(this->PhanThuc / x, this->PhanAo / x);

}

bool SoPhuc::operator==(const SoPhuc& SP) { // Neu tra ve false thi hai so phuc khac nhau
    return ((this->PhanThuc == SP.PhanThuc) && (this->PhanAo == SP.PhanAo));
}


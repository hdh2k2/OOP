#include<iostream>
#include "PhanSo.h"
#include<math.h>
using namespace std;
PHANSO::PHANSO() {
    TuSo = 0;
    MauSo = 1;
}
void PHANSO::RutGon() {
    int ucln;
    int a = abs(TuSo);
    int b = abs(MauSo);
    if (a == 0) {
        TuSo = 0;
        MauSo = b;
    }
    
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    ucln = a;
    
    TuSo /= ucln;
    MauSo /= ucln;
}
PHANSO::~PHANSO() {
}
PHANSO PHANSO::operator+(const PHANSO& Ps) {
    PHANSO res;
    res.TuSo = this->TuSo * Ps.MauSo + Ps.TuSo * this->MauSo;
    res.MauSo = this->MauSo * Ps.MauSo;
    res.RutGon();
    return res;
}

// Tong cua 1 phan so voi 1 so thuc
PHANSO PHANSO::operator+(double x) {
    PHANSO res;
    res.TuSo = this->TuSo * 1 + x * this->MauSo;
    res.MauSo = this->MauSo ;
    res.RutGon();
    return res;
}

PHANSO PHANSO::operator-(const PHANSO& Ps) {
    PHANSO res;
    res.TuSo = this->TuSo * Ps.MauSo - Ps.TuSo * this->MauSo;
    res.MauSo = this->MauSo * Ps.MauSo;
    res.RutGon();
    return res;
}

// Hieu cua 1 phan so voi 1 so thuc
PHANSO PHANSO::operator-(double& x) {
    PHANSO res;
    res.TuSo = this->TuSo * 1 - x * this->MauSo;
    res.MauSo = this->MauSo;
    res.RutGon();
    return res;
}

PHANSO PHANSO::operator*(const PHANSO& Ps) {
    PHANSO res;
    res.TuSo = this->TuSo * Ps.TuSo;
    res.MauSo = this->MauSo * Ps.MauSo;
    res.RutGon();
    return res;
}

// Tich cua 1 phan so voi 1 so thuc
PHANSO PHANSO::operator*(double& x) {
    PHANSO res;
    res.TuSo = this->TuSo * x;
    res.MauSo = this->MauSo;
    res.RutGon();
    return res;
}

PHANSO PHANSO::operator/(const PHANSO& Ps) {
    PHANSO res;
    res.TuSo = this->TuSo * Ps.MauSo;
    res.MauSo = this->MauSo * Ps.TuSo;
    res.RutGon();
    return res;
}

// Thuong cua 1 phan so voi 1 so thuc
PHANSO PHANSO::operator/(double& x) {
    PHANSO res;
    res.TuSo = this->TuSo * 1 ;
    res.MauSo = this->MauSo*x;
    res.RutGon();
    return res;
}

bool PHANSO::operator==(const PHANSO& Ps) {
    return (this->TuSo * Ps.MauSo - this->MauSo * Ps.TuSo  == 0);
}
bool PHANSO::operator!=(const PHANSO& Ps) {
    return (this->TuSo * Ps.MauSo - this->MauSo * Ps.TuSo != 0);
}
bool PHANSO::operator>(const PHANSO& Ps) {
    int MauQuyDong = this->MauSo * Ps.MauSo;
    if (MauQuyDong > 0)
        return this->TuSo * Ps.MauSo > Ps.TuSo * this->MauSo;
    return this->TuSo * Ps.MauSo <= Ps.TuSo * this->MauSo;
}
bool PHANSO::operator<(const PHANSO& Ps) {
    int MauQuyDong = this->MauSo * Ps.MauSo;
    if (MauQuyDong > 0)
        return this->TuSo * Ps.MauSo < Ps.TuSo * this->MauSo;
    return this->TuSo * Ps.MauSo >= Ps.TuSo * this->MauSo;
}
bool PHANSO::operator>=(const PHANSO& Ps) {
    int MauQuyDong = this->MauSo * Ps.MauSo;
    if (MauQuyDong > 0)
        return this->TuSo * Ps.MauSo >= Ps.TuSo * this->MauSo;
    return this->TuSo * Ps.MauSo < Ps.TuSo * this->MauSo;
}
bool PHANSO::operator<=(const PHANSO& Ps) {
    int MauQuyDong = this->MauSo * Ps.MauSo;
    if (MauQuyDong > 0)
        return this->TuSo * Ps.MauSo <= Ps.TuSo * this->MauSo;
    return this->TuSo * Ps.MauSo > Ps.TuSo * this->MauSo;
}
ostream& operator<<(ostream& os, const PHANSO& Ps) {
    if (Ps.TuSo == 0) {
        os << 0 << "\n";
    }
    else
        if (Ps.MauSo == 0)
            os << "PhanSo khong xac dinh" << "\n";
        else
            if (Ps.MauSo == 1)
                os << Ps.TuSo << "\n";
            else
                os << Ps.TuSo << "/" << Ps.MauSo;
    return os;
}
istream& operator>>(istream& is, PHANSO& Ps) {
    cout << "Nhap tu so: ";
    is >> Ps.TuSo;
    cout << "Nhap mau so: ";
    is >> Ps.MauSo;
    return is;
}
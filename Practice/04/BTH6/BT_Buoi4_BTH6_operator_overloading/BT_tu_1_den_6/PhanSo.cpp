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
PHANSO PHANSO::operator+(int x) {
    PHANSO res;
    res.TuSo = this->TuSo * 1 + x * this->MauSo;
    res.MauSo = this->MauSo;
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
PHANSO PHANSO::operator-(int& x) {
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
PHANSO PHANSO::operator*(int& x) {
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
PHANSO PHANSO::operator/(int& x) {
    PHANSO res;
    res.TuSo = this->TuSo * 1;
    res.MauSo = this->MauSo * x;
    res.RutGon();
    return res;
}

bool PHANSO::operator==(const PHANSO& Ps) {
    return (this->TuSo * Ps.MauSo - this->MauSo * Ps.TuSo == 0);
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
        return this->TuSo * Ps.MauSo < Ps.TuSo* this->MauSo;
    return this->TuSo * Ps.MauSo >= Ps.TuSo * this->MauSo;
}
bool PHANSO::operator>=(const PHANSO& Ps) {
    int MauQuyDong = this->MauSo * Ps.MauSo;
    if (MauQuyDong > 0)
        return this->TuSo * Ps.MauSo >= Ps.TuSo * this->MauSo;
    return this->TuSo * Ps.MauSo < Ps.TuSo* this->MauSo;
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

void PHANSO::Run() {
    PHANSO ps1;
    cout << "-- Nhap Phan So 1 -- " << endl;
    cin >> ps1;
    PHANSO ps2;
    cout << "-- Nhap Phan So 2 -- " << endl;
    cin >> ps2;
    cout << endl << "- Phan So 1 la: " << ps1 << endl;
    cout << "- Phan So 2 la: " << ps2 << endl << endl;
    PHANSO hieu, tong, tich, thuong;
    hieu = ps1 - ps2;
    tong = ps1 + ps2; //ps1.Cong(ps2); 
    tich = ps1 * ps2;
    thuong = ps1 / ps2;
#if 1
    PHANSO Hieu, Tong, Tich, Thuong;
    int x;
    cout << "Moi ban nhap 1 so thuc ma ban muon tinh tong, hieu, tich, thuong ( x phai khac 0 thi moi thuc hien duoc phep chia ) : ";
    cin >> x;
    Hieu = ps1 - x;
    Tong = ps1 + x;
    Tich = ps1 * x;
    Thuong = ps1 / x;

    cout << "\n- Hieu giua phan so 1 va so thuc x la: " << Hieu << endl;
    cout << "- Tong 2 phan so 1 va so thuc x la: " << Tong << endl;
    cout << "- Tich 2 phan so 1 va so thuc x la: " << Tich << endl;
    cout << "- Thuong 2 phan so 1 va so thuc x la: " << Thuong << endl;
#endif // Đoạn code em đã thêm vào để tính tổng, hiệu, tích, thương
    cout << "- Hieu 2 phan so la: " << hieu << endl;
    cout << "- Tong 2 phan so la: " << tong << endl;
    cout << "- Tich 2 phan so la: " << tich << endl;
    cout << "- Thuong 2 phan so la: " << thuong << endl;
    cout << endl << " --- So sanh hai phan so ---" << endl;
    cout << "- ps1 == ps2 : " << (ps1 == ps2) << endl;
    cout << "- ps1 != ps2 : " << (ps1 != ps2) << endl;
    cout << "- ps1 > ps2 : " << (ps1 > ps2) << endl;
    cout << "- ps1 < ps2 : " << (ps1 < ps2) << endl;
    cout << "- ps1 >= ps2 : " << (ps1 >= ps2) << endl;
    cout << "- ps1 <= ps2 : " << (ps1 <= ps2) << endl;
}
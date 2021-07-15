#pragma once
#include<iostream>
using namespace std;
class PHANSO {
private:
    int TuSo;
    int MauSo;
public:
    PHANSO();
    void RutGon();
    PHANSO operator+(const PHANSO& Ps);
    PHANSO operator+(int x); //
    PHANSO operator-(const PHANSO& Ps);
    PHANSO operator-(int& x);
    PHANSO operator*(const PHANSO& Ps);
    PHANSO operator*(int& x);
    PHANSO operator/(const PHANSO& Ps);
    PHANSO operator/(int& x);
    bool operator==(const PHANSO& Ps);
    bool operator!=(const PHANSO& Ps);
    bool operator>(const PHANSO& Ps);
    bool operator<(const PHANSO& Ps);
    bool operator>=(const PHANSO& Ps);
    bool operator<=(const PHANSO& Ps);

    void Run();
    friend ostream& operator<<(ostream& os, const PHANSO& Ps);
    friend istream& operator>>(istream& is, PHANSO& Ps);
    ~PHANSO();
};
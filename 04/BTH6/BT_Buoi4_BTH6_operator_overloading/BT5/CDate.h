#pragma once
#include<iostream>

using namespace std;

class CDate {
private:
    int ngay, thang, nam;
    bool daNhap;



    int SoNgayCuaThang() {
        switch (this->thang) {
        case 4: case 6: case 9: case 11: {
            return 30;
        }
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
            return 31;
        }
        case 2: {
            if (LeapYear()) {
                return 29;
            }
            return 28;
        }
        }
    }
public:
    CDate();
    CDate(int ngay, int thang, int nam);
    ~CDate();
    bool KiemTraDaNhap();
    void Nhap();
    void Xuat();
    bool LeapYear();
    void operator++();
    void operator--();
    void TeseUP(int obj);
    void TeseDOWN(int obj);
    CDate operator+( int x); //
    CDate operator-( int x);
    int64_t operator-( CDate& Date);
    int64_t Chuyen_Ngay_Thang_Nam_Thang_Ngay();


    friend istream& operator>>(istream& is, CDate& Date);
    friend ostream& operator <<(ostream& os, const CDate& Date);
    CDate TimNgayKeTiep();

};


#pragma once
#include<iostream>

using namespace std;

class CTimeSpan {
private:
private:
	int Gio;
	int Phut;
	int Giay;
public:
    CTimeSpan();
    ~CTimeSpan();
    CTimeSpan(int Giay);
    CTimeSpan(int Phut, int Giay);
    CTimeSpan(int Gio, int Phut, int Giay);
    CTimeSpan DinhDang();
    CTimeSpan operator+(const CTimeSpan& ThoiGian);
    CTimeSpan operator++();
    CTimeSpan operator--();
    CTimeSpan operator+(const int x); //
    CTimeSpan operator-(const CTimeSpan& ThoiGian);
    CTimeSpan operator-(const int x);
   
    bool operator==(const CTimeSpan& ThoiGian);
    bool operator!=(const CTimeSpan& ThoiGian);
    bool operator>(const CTimeSpan& ThoiGian);
    bool operator<(const CTimeSpan& ThoiGian);
    bool operator>=(const CTimeSpan& ThoiGian);
    bool operator<=(const CTimeSpan& ThoiGian);
    void Run();
	friend istream& operator>>(istream& is, CTimeSpan& ThoiGian);
	friend ostream& operator <<(ostream& os, const CTimeSpan& ThoiGian);

};


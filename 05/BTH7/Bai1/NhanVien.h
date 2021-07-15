#pragma once
#include<iostream>
#include"Time.h"
#include<string>

using namespace std;

class NhanVien {
protected:
	string HoTen;
	Time NgaySinh;
	double Luong = 0;
public:
	//double getter();
	//void setter(double Luong);
	virtual void input();
	virtual void output();
	virtual double Tinh_Tien_Luong() = 0;
	NhanVien();
	~NhanVien();
};


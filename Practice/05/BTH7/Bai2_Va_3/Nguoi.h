#pragma once
#include<iostream>
#include "NoiLamViec.h"


using namespace std;

class Nguoi {
protected:
	string HoTen;
	string DiaChi;
	int NamSinh;
public:
	virtual void input();
	virtual void output();
	///friend class NoiLamViec;

	Nguoi();
	~Nguoi();
};


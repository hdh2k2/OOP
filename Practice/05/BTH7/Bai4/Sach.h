#pragma once
#include<iostream>
#include<string>

using namespace std;

class Sach {
protected:
	string LoaiSach;
	string TenSach;
	string NoiDung;
	double GiaBan;
public:
	Sach();
	~Sach();
	virtual string getter_LoaiSach() = 0;
	virtual void input();
	virtual	void output();


};


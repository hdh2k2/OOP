#pragma once
#include<iostream>

using namespace std;
class NgheNghiep {
protected:
	string Nghenghiep;
public:
	NgheNghiep();
	~NgheNghiep();
	virtual string getterNgheNghiep() = 0;
	virtual void setterNgheNghiep(string Nghenghiep) = 0;
};


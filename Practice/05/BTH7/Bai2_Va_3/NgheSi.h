#pragma once
#include"NgheNghiep.h"
#include"Nguoi.h"
#include"NoiLamViec.h"
class NgheSi :public NoiLamViec, public Nguoi, public NgheNghiep {
protected:
	string The_Loai;
	int So_Show_Da_Dien;
public:
	void input();
	void output();
	string getterNgheNghiep();
	void setterNgheNghiep(string Nghenghiep);
	NgheSi();
	~NgheSi();
};


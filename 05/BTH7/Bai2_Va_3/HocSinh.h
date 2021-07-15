#pragma once
#include"Library.h"
#include"NgheNghiep.h"
#include"Nguoi.h"
#include"NoiLamViec.h"

class HocSinh :public Nguoi, public NoiLamViec, public NgheNghiep {
private:
	double Diem_Trung_Binh;
public:
	void input();
	void output();

	string getterNgheNghiep();
	void setterNgheNghiep(string Nghenghiep);
	HocSinh();
	~HocSinh();
};


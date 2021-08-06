#pragma once
#include"Library.h"
#include"NgheNghiep.h"
#include"Nguoi.h"
#include"NoiLamViec.h"

class SinhVien :public Nguoi, public NoiLamViec, public NgheNghiep {
private:
	string Ma_Sinh_Vien;
	double Diem_Trung_Binh;
public:
	void input();
	void output();

	string getterNgheNghiep();
	void setterNgheNghiep(string Nghenghiep);
	SinhVien();
	~SinhVien();
};


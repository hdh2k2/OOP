#pragma once
#include"NgheNghiep.h"
#include"Nguoi.h"
#include"NoiLamViec.h"
class CongNhan :public NoiLamViec, public Nguoi, public NgheNghiep {
private:
	double Luong_Co_Ban;
	int So_Ngay_Phep;
	int So_Nam_Kinh_Nghiem;
public:
	void input();
	void output();
	//ool KT_Nghe_Nghiep();
	//string SET_Nghe_Nghiep();
	string getterNgheNghiep();
	void setterNgheNghiep(string Nghenghiep);
	CongNhan();
	~CongNhan();

};


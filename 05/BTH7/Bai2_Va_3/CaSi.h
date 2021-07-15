#pragma once
#include"NgheNghiep.h"
#include"Nguoi.h"
#include"NoiLamViec.h"
class CaSi :public NoiLamViec, public Nguoi, public NgheNghiep {
protected:
	string Dong_Nhac;
	int So_Show_Da_Dien;
	int So_Album_Da_Ra_Mat = 0;
public:
	void input();
	void output();
	//ool KT_Nghe_Nghiep();
	//string SET_Nghe_Nghiep();
	string getterNgheNghiep();
	void setterNgheNghiep(string Nghenghiep);
	CaSi();
	~CaSi();
};


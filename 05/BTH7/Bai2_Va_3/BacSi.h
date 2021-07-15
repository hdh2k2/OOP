#pragma once
#include"NgheNghiep.h"
#include"Nguoi.h"
#include"NoiLamViec.h"
class BacSi :public NoiLamViec, public Nguoi, public NgheNghiep {
private:
	string Khoa_Chuyen_Mon;
	int So_Nam_Chua_Benh;
public:
	void input();
	void output();
	//ool KT_Nghe_Nghiep();
	//string SET_Nghe_Nghiep();
	string getterNgheNghiep();
	void setterNgheNghiep(string Nghenghiep);
	BacSi();
	~BacSi();
};


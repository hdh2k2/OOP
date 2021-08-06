#pragma once
#include"GiaSuc.h"

class Bo:public GiaSuc{
private:
public:
	Bo();
	~Bo();
	bool KiemTraSua();
	void input();
	void output();
	bool KiemTraTenGiaSuc();

	bool KiemTraSoConDuocSinhRa();
	double SoLitSuaMaGiaSucChoSau1LuaSinh();
	int SoConDuocSinh_Ra();
};


#pragma once
#include"GiaSuc.h"

class Cuu:public GiaSuc{
private:
public:
	Cuu();
	~Cuu();
	bool KiemTraSua();
	void input();
	void output();
	bool KiemTraTenGiaSuc();

	bool KiemTraSoConDuocSinhRa();
	double SoLitSuaMaGiaSucChoSau1LuaSinh();
	int SoConDuocSinh_Ra();
};


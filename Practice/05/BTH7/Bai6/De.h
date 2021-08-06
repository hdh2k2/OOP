#pragma once
#include"GiaSuc.h"
class De :public GiaSuc{
private:
public:
	De();
	~De();
	bool KiemTraSua();
	void input();
	void output();
	bool KiemTraTenGiaSuc();

	bool KiemTraSoConDuocSinhRa();
	double SoLitSuaMaGiaSucChoSau1LuaSinh();
	int SoConDuocSinh_Ra();
};


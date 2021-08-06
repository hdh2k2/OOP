#pragma once
#include<iostream>
#include<string>

using namespace std;

class GiaSuc {
protected:
	string TenGiaSuc;
	int SoConDuocSinhRa = 0;
	double So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh = 0;
public:
	GiaSuc();
	~GiaSuc();
	virtual bool KiemTraSoConDuocSinhRa() = 0;
	virtual bool KiemTraSua() = 0;
	virtual void input() = 0;
	virtual void output() = 0;
	virtual bool KiemTraTenGiaSuc() = 0;
	virtual double SoLitSuaMaGiaSucChoSau1LuaSinh() = 0;

	virtual int SoConDuocSinh_Ra() = 0;
};


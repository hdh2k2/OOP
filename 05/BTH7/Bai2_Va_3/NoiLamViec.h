#pragma once
#include"Library.h"
using namespace std;
class NoiLamViec {
protected:
	string Noi_Lam_Viec;
public:
	NoiLamViec();
	~NoiLamViec();
	virtual void input();
	virtual void output();
	bool IsNLV(string noilamviec);
	bool IsNLV();
	string Res();
	void Setter(string Noi_Lam_Viec);
	friend class Nguoi;
};


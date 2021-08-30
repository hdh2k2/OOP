#pragma once
#include"Chai.h"

class ChaiHinhHopChuNhat:public Chai{
private:
	double _chieudai;
	double _chieurong;
	double _chieucao;
public:
	ChaiHinhHopChuNhat();
	~ChaiHinhHopChuNhat();
	double getter_dien_tich_toan_phan();
	double getter_dien_tich_xung_quanh();
	void nhapThongSoCuaChai();
};


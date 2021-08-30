#pragma once
#include"Chai.h"

class ChaiHinhTruTron:public Chai {
private:
	double _bankinhday;
	double _chieucao;
public:
	ChaiHinhTruTron();
	~ChaiHinhTruTron();
	double getter_dien_tich_toan_phan();
	double getter_dien_tich_xung_quanh();
	void nhapThongSoCuaChai();
};


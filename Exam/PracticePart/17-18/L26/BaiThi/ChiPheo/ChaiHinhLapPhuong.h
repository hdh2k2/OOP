#pragma once
#include"Chai.h"

class ChaiHinhLapPhuong:public Chai{
private:
	double _dodaimotcanh;
public:
	ChaiHinhLapPhuong();
	~ChaiHinhLapPhuong();
	double getter_dien_tich_toan_phan();
	double getter_dien_tich_xung_quanh();
	void nhapThongSoCuaChai();;
};


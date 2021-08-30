#pragma once
#include"DatDai.h"

class DatPhiNongNghiep:public DatDai{
protected:
public:
	DatPhiNongNghiep();
	~DatPhiNongNghiep();
	double GetterDienTichDat();
	void NhapThongTinDat();
	void XuatThongTinDat();
};


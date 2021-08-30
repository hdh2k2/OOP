#pragma once
#include"DatDai.h"

class DatNongNghiep:public DatDai{
protected:
	int ThoiHanSuDungDat;
public:
	DatNongNghiep();
	~DatNongNghiep();
	double GetterDienTichDat();
	void NhapThongTinDat();
	void XuatThongTinDat();
};


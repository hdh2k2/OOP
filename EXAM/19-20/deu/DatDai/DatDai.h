#pragma once
#include"Nguoi.h"
#include<string>
#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;


class DatDai{
protected:
	double DienTichDat;

public:
	DatDai();
	~DatDai();
	virtual double GetterDienTichDat() = 0;
	virtual void NhapThongTinDat() = 0;
	virtual void XuatThongTinDat() = 0;
};


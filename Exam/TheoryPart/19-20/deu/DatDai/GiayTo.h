#pragma once
#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;

class GiayTo {
protected:
	wstring loaigiayto;
public:
	GiayTo();
	~GiayTo();
	virtual wstring GetterLoaiGiayTo() = 0;
	virtual void NhapThongTinGiayTo(wstring loaigiayto) = 0;
	virtual void XuatThongTinGiayTo(wstring loaigiayto) = 0;
	virtual double TinhTienThue() = 0;
};


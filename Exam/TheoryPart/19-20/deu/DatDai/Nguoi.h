#pragma once
#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;

class Nguoi{
private:

	wstring HoTen;
	int NamSinh;
	wstring CMND;
	wstring DiaChiThuongTru;
public:
	Nguoi();
	~Nguoi();
	void NhapThongTin();
	void XuatThongTin();
};


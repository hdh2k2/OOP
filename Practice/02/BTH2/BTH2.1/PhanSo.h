#pragma once
#include<iostream>

using namespace std;

class PhanSo {
private:
	int iTuSo, iMauSo;
public:

	void NhapPhanSo(PhanSo& a);
	void XuatPhanSo(PhanSo a);
	void RutGon(int& iTuSo, int& iMauSo);
	void fixNhap(int& n);
	void fixNhapTu(int& n);
	void fixMauso(int& n);
	void XuLyXuat(PhanSo& K);
	PhanSo Tong(PhanSo& b);
	PhanSo Hieu(PhanSo& b);
	PhanSo Tich(PhanSo& b);
	PhanSo Thuong(PhanSo& b);

};


#include "PhanSo.h"
#include<iostream>
#include <typeinfo>
using namespace std;



void PhanSo::fixNhap(int& n) {
	while (!cin >> n) {
		//if (!cin >> n) {
		cout << "Nhap sai dinh dang. \nMoi ban nhap lai!\n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
		//goto nhap;
	}

}

void PhanSo::fixMauso(int& n) {
	while ((!cin >> n) || (n == 0)) {
		//if (!cin >> n) {
		cout << "Nhap sai dinh dang. \nMoi ban nhap lai!\n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> n;
		//goto nhap;
	}
}

void PhanSo::NhapPhanSo(PhanSo& a) {
	cout << "Moi ban nhap tu so: ";
	cin >> a.iTuSo;
	fixNhap(a.iTuSo);
	cout << "Moi ban nhap mau so: ";
	cin >> a.iMauSo;
	fixMauso(a.iMauSo);
}


void PhanSo::XuLyXuat(PhanSo& K)
{
	int w = K.iTuSo * K.iMauSo;
	if (w < 0)
	{
		K.iMauSo = abs(K.iMauSo);
		K.iTuSo = w / K.iMauSo;
	}
	if (K.iTuSo != 0)
		if (K.iTuSo % K.iMauSo == 0)
			cout << K.iTuSo / K.iMauSo;
		else

			cout << K.iTuSo << "/" << K.iMauSo;
	else
		cout << "0";
}



int GCD(int a, int b)
{
	if (b == 0)
		return a;
	return GCD(b, a % b);
}

void PhanSo::RutGon(int& iTuSo, int& iMauSo)
{
	int w = GCD(iTuSo, iMauSo);
	iTuSo /= w;
	iMauSo /= w;

}



void PhanSo::XuatPhanSo(PhanSo c) {
	RutGon(c.iTuSo, c.iMauSo);
	XuLyXuat(c);
}

PhanSo PhanSo::Tong(PhanSo& b) {
	PhanSo c;
	c.iTuSo = this->iTuSo * b.iMauSo + this->iMauSo * b.iTuSo;
	c.iMauSo = this->iMauSo * b.iMauSo;
	return c;

}

PhanSo PhanSo::Hieu(PhanSo& b) {
	PhanSo c;
	c.iTuSo = this->iTuSo * b.iMauSo - this->iMauSo * b.iTuSo;
	c.iMauSo = this->iMauSo * b.iMauSo;
	return c;

}

PhanSo PhanSo::Tich(PhanSo& b) {
	PhanSo c;
	c.iTuSo = this->iTuSo * b.iTuSo;
	c.iMauSo = this->iMauSo * b.iMauSo;
	return c;

}

PhanSo PhanSo::Thuong(PhanSo& b) {
	PhanSo c;
	if (b.iTuSo == 0) {
		cout << "Khong co phep chia cho 0.";
		exit(1);
	}
	else {
		c.iTuSo = this->iTuSo * b.iMauSo;
		c.iMauSo = this->iMauSo * b.iTuSo;

	}
	return c;


}

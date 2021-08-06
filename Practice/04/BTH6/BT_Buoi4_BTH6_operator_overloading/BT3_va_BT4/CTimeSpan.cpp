#include "CTimeSpan.h"
#include<iostream>

using namespace std;

CTimeSpan::CTimeSpan() {
	Gio = Phut = Giay = 0;

}

CTimeSpan::~CTimeSpan() {

}

CTimeSpan::CTimeSpan(int Giay) {
	this->Giay = Giay;
	this->Phut = 0;
	this->Gio = 0;
}


CTimeSpan::CTimeSpan(int Phut, int Giay) {
	this->Giay = Giay;
	this->Phut = Phut;
	this->Gio = 0;
}

CTimeSpan::CTimeSpan(int Gio, int Phut, int Giay) {
	this->Giay = Giay;
	this->Phut = Phut;
	this->Gio = Gio;
}

istream& operator >>(istream& is, CTimeSpan& ThoiGian) {
	is >> ThoiGian.Gio >> ThoiGian.Phut >> ThoiGian.Giay;
	while (ThoiGian.Gio < 0 || ThoiGian.Phut < 0 || ThoiGian.Giay < 0) {
		cout << "Moi ban nhap lai!!!\nSo gio, phut hoac giay khong duoc la so am !!!\nMoi ban nhap lan luot gio, phut, giay: ";
		is >> ThoiGian.Gio >> ThoiGian.Phut >> ThoiGian.Giay;
	}

	return is;
}

ostream& operator <<(ostream& os, const CTimeSpan& ThoiGian) {
	if (ThoiGian.Gio >= 0 && ThoiGian.Phut >= 0 && ThoiGian.Giay >= 0) {
		if (ThoiGian.Giay != 0)
			os << ThoiGian.Gio << " gio " << ThoiGian.Phut << " phut " << ThoiGian.Giay << " giay ";
		else
			os << ThoiGian.Gio << " gio " << ThoiGian.Phut << " phut ";
	}
	else if (ThoiGian.Gio >= 0 && ThoiGian.Phut >= 0 && ThoiGian.Giay < 0) {
		if (ThoiGian.Giay > -60)
			os << ThoiGian.Gio << " gio " << ThoiGian.Phut << " phut kem " << -ThoiGian.Giay << " giay ";
		else if (ThoiGian.Giay == -60)
			os << ThoiGian.Gio << " gio " << ThoiGian.Phut + 1;
		else if (ThoiGian.Giay < -60) {
			int temp = -ThoiGian.Giay / 60;
			os << ThoiGian.Gio << " gio " << ThoiGian.Phut - temp << " phut kem " << -ThoiGian.Giay % 60 << " giay ";
		}
	}

	return os;
}


CTimeSpan CTimeSpan::operator+(const CTimeSpan& ThoiGian) {
	CTimeSpan res;
	res.Giay = this->Giay + ThoiGian.Giay;
	res.Phut = this->Phut + ThoiGian.Phut;
	res.Gio = this->Gio + ThoiGian.Gio;

	CTimeSpan Res;
	Res.Gio = 0;
	Res.Phut = 0;
	Res.Giay = res.Gio * 3600 + res.Phut * 60 + res.Giay;
	Res.DinhDang();
	return Res;
}
/*
CTimeSpan CTimeSpan::operator++() {
	CTimeSpan res;
	res.Giay = this->Giay + 1;
	res.Phut = this->Phut;
	res.Gio = this->Gio;
	res.DinhDang();
	return res;
}

CTimeSpan CTimeSpan::operator--() {
	CTimeSpan res;
	res.Giay = this->Giay - 1;
	res.Phut = this->Phut;
	res.Gio = this->Gio;
	res.DinhDang();
	return res;
}*/

CTimeSpan CTimeSpan::operator-(const CTimeSpan& ThoiGian) {
	CTimeSpan res;
	res.Giay = this->Giay - ThoiGian.Giay;
	res.Phut = this->Phut - ThoiGian.Phut;
	res.Gio = this->Gio - ThoiGian.Gio;

	CTimeSpan Res;
	Res.Gio = 0;
	Res.Phut = 0;
	Res.Giay = res.Gio * 3600 + res.Phut * 60 + res.Giay;
	Res.DinhDang();
	return Res;
}

CTimeSpan CTimeSpan::operator+(const int x) {
	CTimeSpan res;
	res.Giay = this->Giay + x;
	res.Phut = this->Phut;
	res.Gio = this->Gio;

	CTimeSpan Res;
	Res.Gio = 0;
	Res.Phut = 0;
	Res.Giay = res.Gio * 3600 + res.Phut * 60 + res.Giay;
	if (Res.Giay >= 0) {
		Res.DinhDang();
		return Res;
	}

	else if (Res.Giay < 0) {
		CTimeSpan RES;
		RES.Gio = 0;
		RES.Phut = 0;
		RES.Giay = -Res.Giay;
		RES.DinhDang();
		return RES;
	}
	//return Res;
}

CTimeSpan CTimeSpan::operator-(const int x) {
	CTimeSpan res;
	res.Giay = this->Giay - x;
	res.Phut = this->Phut;
	res.Gio = this->Gio;

	CTimeSpan Res;
	Res.Gio = 0;
	Res.Phut = 0;
	Res.Giay = res.Gio * 3600 + res.Phut * 60 + res.Giay;
	if (Res.Giay >= 0) {
		Res.DinhDang();
		return Res;
	}

	else if (Res.Giay < 0) {
		CTimeSpan RES;
		RES.Gio = 0;
		RES.Phut = 0;
		RES.Giay = -Res.Giay;
		RES.DinhDang();
		return RES;
	}
}

bool CTimeSpan::operator==(const CTimeSpan& ThoiGian) {
	return (this->Gio == ThoiGian.Gio && this->Phut == ThoiGian.Phut && this->Giay == ThoiGian.Giay);
}

bool CTimeSpan::operator>(const CTimeSpan& ThoiGian) {
	CTimeSpan test1 = CTimeSpan(0, 0, this->Gio * 3600 + this->Phut * 60 + this->Giay );
	CTimeSpan test2 = CTimeSpan(0, 0, ThoiGian.Gio * 3600 + ThoiGian.Phut * 60 + ThoiGian.Giay );
	if (test1.Giay > test2.Giay)
		return true;
	return false;

}


CTimeSpan CTimeSpan::operator++() {
	this->Giay++;
	this->DinhDang();
	return *this;
}

CTimeSpan CTimeSpan::operator--() {
	this->Giay--;
	this->DinhDang();
	return *this;
}


bool CTimeSpan::operator>=(const CTimeSpan& ThoiGian) {
	CTimeSpan test1 = CTimeSpan(0, 0, this->Gio * 3600 + this->Phut * 60 + this->Giay);
	CTimeSpan test2 = CTimeSpan(0, 0, ThoiGian.Gio * 3600 + ThoiGian.Phut * 60 + ThoiGian.Giay);
	if (test1.Giay >= test2.Giay)
		return true;
	return false;

}

bool CTimeSpan::operator<(const CTimeSpan& ThoiGian) {
	CTimeSpan test1 = CTimeSpan(0, 0, this->Gio * 3600 + this->Phut * 60 + this->Giay);
	CTimeSpan test2 = CTimeSpan(0, 0, ThoiGian.Gio * 3600 + ThoiGian.Phut * 60 + ThoiGian.Giay);
	if (test1.Giay < test2.Giay)
		return true;
	return false;

}



bool CTimeSpan::operator<=(const CTimeSpan& ThoiGian) {
	CTimeSpan test1 = CTimeSpan(0, 0, this->Gio * 3600 + this->Phut * 60 + this->Giay);
	CTimeSpan test2 = CTimeSpan(0, 0, ThoiGian.Gio * 3600 + ThoiGian.Phut * 60 + ThoiGian.Giay);
	if (test1.Giay <= test2.Giay)
		return true;
	return false;

}

bool CTimeSpan::operator!=(const CTimeSpan& ThoiGian) {
	return (this->Gio != ThoiGian.Gio || this->Phut != ThoiGian.Phut || this->Giay != ThoiGian.Giay);
}

CTimeSpan CTimeSpan::DinhDang() {
	int d = 0;
	int s = 0;
	while (this->Giay > 60) {
		this->Giay = this->Giay - 60;
		d++;
	}

	this->Phut += d;

	while (this->Phut > 60) {
		this->Phut = this->Phut - 60;
		s++;
	}
	this->Gio += s;
	while (this->Gio > 24) {
		this->Gio = this->Gio - 24;
	}
	if (this->Giay == 60) {
		this->Giay = 0;
		this->Phut = this->Phut + 1;
		this->Gio = this->Gio;
	}

	return *this;
}




void CTimeSpan::Run() {
	CTimeSpan x;
	CTimeSpan y;
	cout << "Moi ban nhap lan luot gio, phut, giay ( ngan cach boi dau cach ) cua thoi gian thu nhat: ";
	cin >> x;
	cout << "Moi ban nhap lan luot gio, phut, giay ( ngan cach boi dau cach ) cua thoi gian thu nhat: ";
	cin >> y;

	cout << "\nMoi ban nhap 1 so nguyen x bieu thi cho so giay ma ban muon cong hoac tru voi thoi gian thu nhat: ";
	int t;
	cin >> t;
	cout << "Tong hai thoi gian la: " << x + y;
	cout << "\nHieu hai thoi gian la: " << x - y;
	

	cout << "\nTong giua thoi gian thu nhat va 1 so nguyen (bieu thi giay ) la: " << x + t;
	cout << "\nHieu giua thoi gian thu nhat va 1 so nguyen (bieu thi giay ) la: " << x - t;

	cout << "\n\nThoi gian thu nhat bang thoi gian thu hai: " << (x == y);
	cout << "\nThoi gian thu nhat khac thoi gian thu hai: " << (x != y);
	cout << "\nThoi gian thu nhat lon hon thoi gian thu hai: " << (x > y);
	cout << "\nThoi gian thu nhat be hon thoi gian thu hai: " << (x < y);
	cout << "\nThoi gian thu nhat lon hon hoac bang thoi gian thu hai: " << (x >= y);
	cout << "\nThoi gian thu nhat be hon hoac bang thoi gian thu hai: " << (x <= y);


	cout << "\n\nThoi gian thu nhat sau khi them 1 giay: " << ++x;
	cout << "\nThoi gian thu nhat sau khi bot 1 giay: " << -- --x;
	cout << "\nThoi gian thu hai sau khi them 1 giay: " << ++y;
	cout << "\nThoi gian thu hai sau khi them 1 giay: " << -- --y;
}
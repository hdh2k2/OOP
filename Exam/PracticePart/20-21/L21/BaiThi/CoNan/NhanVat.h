#pragma once
#include "VuAn.h"
#include <iostream>
#include <string>

using namespace std;

enum PhanLoai {
	isConan, isGin, isVodka, isKorn, isThanhVienBiAn, isNguoiMatQua, ChuaXacDinh
};

class NhanVat{
protected:
	int _chisoxuathien;
	int _luongmau;
	int _sucmanh;
	PhanLoai _loainhanvat;

public:
	NhanVat();
	~NhanVat();

	int getterLuongMau();
	int getterSucManh();
	PhanLoai _phanloai_NhanVat();

	int getterChiSoXuatHien();
	void setterChiSoXuatHien(int _chisoxuathien);

	virtual void khoiTaoLuongMauVaSucManh();



	void Xuat() {
		switch (this->_loainhanvat)
		{
		case isConan: {
			cout << "Conan";
			break;
		}
		case isGin: {
			cout << "Gin";
			break;
		}
		case isVodka: {
			cout << "Vodka";
			break;
		}
		case isKorn: {
			cout << "Korn";
			break;
		}
		case isThanhVienBiAn: {
			cout << "Thanh vien bi an";
			break;
		}
		case isNguoiMatQua: {
			cout << "Nguoi Mat Quy";
			break;
		}
		}
		cout << " | Mau: " << this->_luongmau << " | " << this->_sucmanh;
	}
};
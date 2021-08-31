#pragma once
#include <iostream>

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
};
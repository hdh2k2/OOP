#pragma once
#include<iostream>
#include"NhanVien.h"


class NhanVienSanXuat :public NhanVien {
private:
	double Luong_Can_Ban;
	int So_SanPham;
public:
	void input();
	void output();
	double Tinh_Tien_Luong();
	NhanVienSanXuat();
	~NhanVienSanXuat();

};

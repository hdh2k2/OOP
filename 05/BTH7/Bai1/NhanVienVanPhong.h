#pragma once
#include<iostream>
#include"NhanVien.h"


class NhanVienVanPhong :public NhanVien {
private:
	int So_Ngay_Lam_Viec;
public:
	void input();
	void output();
	double Tinh_Tien_Luong();
	NhanVienVanPhong();
	~NhanVienVanPhong();
};


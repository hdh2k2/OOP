#pragma once
#include<iostream>
#include"NhanVien.h"
#include"NhanVienSanXuat.h"
#include"NhanVienVanPhong.h"
#include <vector>
class QuanLiNhanVien {
private:
	vector<NhanVien*> Ql_Nhanvien;
public:
	void input();
	void output();
	QuanLiNhanVien();
	~QuanLiNhanVien();
};


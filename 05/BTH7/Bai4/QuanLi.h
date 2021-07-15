#pragma once
#include"SachGiaoKhoa.h"
#include"TapChi.h"
#include"TieuThuyet.h"
#include<vector>

class QuanLi {
private:
	vector<Sach*> ds_sach;
	int _So_luong_SGK = 0;
	int _So_luong_Tapchi = 0;
	int _So_luong_Tieuthuyet = 0;

public:
	void MENU();
	QuanLi();
	~QuanLi();
};


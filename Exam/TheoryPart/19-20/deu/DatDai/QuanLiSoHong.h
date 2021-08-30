#pragma once

#include"SoHong.h"
#include<vector>

class QuanLiSoHong{
private:
	vector<GiayTo*> QuanLi;
	vector<SoHong*> quanli;
public:
	QuanLiSoHong();
	~QuanLiSoHong();
	void KhoiTaoDanhSachQuanLi();
	void XuatDanhSach();
};


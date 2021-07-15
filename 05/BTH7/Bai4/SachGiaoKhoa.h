#pragma once
#include"Sach.h"

class SachGiaoKhoa:public Sach{
private:
	string  TenSach;
public:
	SachGiaoKhoa();
	~SachGiaoKhoa();
	string getter_LoaiSach();

	void input();
	void output();

};


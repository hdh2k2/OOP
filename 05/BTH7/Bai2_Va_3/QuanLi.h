#pragma once
#include"Library.h"
#include<vector>

class QuanLi {
private:
	vector<Nguoi*> ds_nguoi;
	int So_Luong_Sinh_Vien = 0;
	int So_Luong_Hoc_Sinh = 0;
	int So_Luong_Cong_Nhan = 0;
	int So_Luong_Ca_Si = 0;
	int So_Luong_Nghe_Si = 0;
	int So_Luong_Bac_Si = 0;

public:
	void input();
	void output();
	QuanLi();
	~QuanLi();
};




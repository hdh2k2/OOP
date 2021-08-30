#pragma once
#include"ChaiHinhHopChuNhat.h"
#include"ChaiHinhLapPhuong.h"
#include"ChaiHinhTruTron.h"
#include<iostream>
#include<vector>

using namespace std;

class QuanLi{
private:
	vector<Chai*> _quanli;
	int _soluong;
public:
	void solve();
	QuanLi();
	~QuanLi();
};


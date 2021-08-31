#pragma once
#include<vector>
#include"CoNan.h"
#include"Gin.h"
#include"Korn.h"
#include"NguoiMatQua.h"
#include"ThanhVienBiAn.h"
#include"Vodka.h"
#include"VuAn.h"

using namespace std;

class QuanLi{
private:
	CoNan _conan;

	vector<NhanVat*> _quanlinhanvat;

	vector<VuAn*> _quanlivuan;

	int _soluongngoisaothanki;
	int _soluongngoisaotientri;

	int* _dokhoVuAn;
	int* _soluongvuan;
public:
	QuanLi();
	~QuanLi();
	void run();
};


#include "TieuThuyet.h"

TieuThuyet::TieuThuyet() {

}

TieuThuyet::~TieuThuyet() {

}

string TieuThuyet::getter_LoaiSach() {
	return LoaiSach="Tieu thuyet"; 
}


void TieuThuyet::input() {
	Sach::input();
}

void TieuThuyet::output() {
	//cout << "\nLoai sach: " << LoaiSach;
	Sach::output();

}
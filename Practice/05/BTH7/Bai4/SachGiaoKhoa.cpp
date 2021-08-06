#include "SachGiaoKhoa.h"

SachGiaoKhoa::SachGiaoKhoa() {

}

SachGiaoKhoa::~SachGiaoKhoa() {

}

string SachGiaoKhoa::getter_LoaiSach() {
	return LoaiSach = "Sach Giao Khoa";
}


void SachGiaoKhoa::input() {
	Sach::input();

}

void SachGiaoKhoa::output() {
	//cout << "\nLoai sach: " << SachGiaoKhoa::getter_LoaiSach();
	Sach::output();
}
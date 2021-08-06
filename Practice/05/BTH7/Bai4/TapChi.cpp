#include "TapChi.h"

TapChi::TapChi() {

}

TapChi::~TapChi() {

}

string TapChi::getter_LoaiSach() {
	return LoaiSach="Tap chi";
}


void TapChi::input() {
	Sach::input();
}

void TapChi::output() {
	//cout << "\nLoai sach: " << LoaiSach;
	Sach::output();
}
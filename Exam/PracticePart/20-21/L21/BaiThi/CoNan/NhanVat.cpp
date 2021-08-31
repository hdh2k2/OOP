#include "NhanVat.h"

using namespace std;

NhanVat::NhanVat() {
	this->_luongmau = 0;
	this->_sucmanh = 0;
	this->_chisoxuathien = 0;
}
NhanVat::~NhanVat() {

}

int NhanVat::getterLuongMau() {
	return this->_luongmau;
}
int NhanVat::getterSucManh() {
	return this->_sucmanh;
}
PhanLoai NhanVat::_phanloai_NhanVat() {
	return this->_loainhanvat;
}

void NhanVat::khoiTaoLuongMauVaSucManh() {
	cin >> _luongmau >> _sucmanh;
}

int NhanVat::getterChiSoXuatHien() {
	return this->_chisoxuathien;
}

void NhanVat::setterChiSoXuatHien(int _chisoxuathien) {
	this->_chisoxuathien = _chisoxuathien;
}
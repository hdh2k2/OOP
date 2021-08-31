#include "Gin.h"

Gin::Gin() {
	this->_loainhanvat = isGin;
}
Gin::~Gin() {

}

void Gin::PhaAn(VuAn* vuAn) {

}

void Gin::DoiDau(NhanVat* nhanVat) {

}

void Gin::khoiTaoLuongMauVaSucManh() {
	this->_luongmau = 1000;
	this->_sucmanh = 500;
}

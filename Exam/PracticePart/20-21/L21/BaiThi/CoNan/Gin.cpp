#include "Gin.h"

Gin::Gin() {
	this->_loainhanvat = isGin;
}
Gin::~Gin() {

}

void Gin::khoiTaoLuongMauVaSucManh() {
	this->_luongmau = 1000;
	this->_sucmanh = 500;
}

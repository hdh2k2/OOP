#include "Vodka.h"

Vodka::Vodka() {
	this->_loainhanvat = isVodka;
}

Vodka::~Vodka() {

}

void Vodka::khoiTaoLuongMauVaSucManh() {
	this->_luongmau = 1200;
	this->_sucmanh = 600;
}
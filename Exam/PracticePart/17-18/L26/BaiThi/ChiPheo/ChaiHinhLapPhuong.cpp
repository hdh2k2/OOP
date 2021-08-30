#include "ChaiHinhLapPhuong.h"
#include<iostream>

using namespace std;

ChaiHinhLapPhuong::ChaiHinhLapPhuong() {

}

ChaiHinhLapPhuong::~ChaiHinhLapPhuong() {

}

void ChaiHinhLapPhuong::nhapThongSoCuaChai() {
	cout << "\t Nhap do dai 1 canh cua chai (cm): ";
	cin >> this->_dodaimotcanh;
	Chai::nhapThongSoCuaChai();
}

double ChaiHinhLapPhuong::getter_dien_tich_xung_quanh() {
	return 4*_dodaimotcanh;
}

double ChaiHinhLapPhuong::getter_dien_tich_toan_phan() {
	return (1.5*getter_dien_tich_xung_quanh());
}
#include "ChaiHinhHopChuNhat.h"
#include<iostream>

using namespace std;

ChaiHinhHopChuNhat::ChaiHinhHopChuNhat() {

}

ChaiHinhHopChuNhat::~ChaiHinhHopChuNhat() {

}

void ChaiHinhHopChuNhat::nhapThongSoCuaChai() {
	cout << "\t Nhap chieu dai cua chai (cm): ";
	cin >> this->_chieudai;
	cout << "\t Nhap chieu rong cua chai (cm): ";
	cin >> this->_chieurong;
	cout << "\t Nhap chieu cao cua chai (cm): ";
	cin >> this->_chieucao;
	Chai::nhapThongSoCuaChai();
}

double ChaiHinhHopChuNhat::getter_dien_tich_xung_quanh() {
	return 2 * _chieucao * (_chieudai + _chieurong);
}

double ChaiHinhHopChuNhat::getter_dien_tich_toan_phan() {
	return (2 * _chieudai * _chieurong + getter_dien_tich_xung_quanh());
}
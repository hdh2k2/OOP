#include "ChaiHinhTruTron.h"
#include<iostream>

using namespace std;

ChaiHinhTruTron::ChaiHinhTruTron() {

}

ChaiHinhTruTron::~ChaiHinhTruTron() {

}

void ChaiHinhTruTron::nhapThongSoCuaChai() {
	cout << "\t Nhap ban kinh day chai (cm): ";
	cin >> this->_bankinhday;
	cout << "\t Nhap chieu cao chai (cm): ";
	cin >> this->_chieucao;
	Chai::nhapThongSoCuaChai();
}

double ChaiHinhTruTron::getter_dien_tich_xung_quanh() {
	return 2 * 3.14 * _bankinhday * _chieucao;
}

double ChaiHinhTruTron::getter_dien_tich_toan_phan() {
	return (2*3.14* _bankinhday * _bankinhday + getter_dien_tich_xung_quanh());
}
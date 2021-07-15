#include "NhanVienVanPhong.h"
#include<iostream>
#include<string>

using namespace std;

NhanVienVanPhong::NhanVienVanPhong() {

}

NhanVienVanPhong::~NhanVienVanPhong() {

}

void NhanVienVanPhong::input() {
	cin.ignore();
	NhanVien::input();
	cout << "Moi ban nhap so ngay lam viec: ";
	cin >> So_Ngay_Lam_Viec;
	//cin.ignore();
}

void NhanVienVanPhong::output() {
	NhanVien::output();
	cout << "\nSo ngay lam viec: " << So_Ngay_Lam_Viec << "\nDay la nhan vien van phong. \n";
}

double NhanVienVanPhong::Tinh_Tien_Luong() {
	Luong = So_Ngay_Lam_Viec * 100000;
	return Luong;
}
#include "NhanVienSanXuat.h"
#include<iostream>
#include<string>

using namespace std;

NhanVienSanXuat::NhanVienSanXuat() {

}

NhanVienSanXuat::~NhanVienSanXuat() {

}

void NhanVienSanXuat::input() {
	cin.ignore();
	NhanVien::input();
	cout << "Moi ban nhap them luong can ban: ";
	cin >> Luong_Can_Ban;
	cout << "Moi ban nhap so san pham hoan thanh: ";
	cin >> So_SanPham;
	cin.ignore();
}

void NhanVienSanXuat::output() {
	NhanVien::output();
	cout << "\nLuong can ban: " << Luong_Can_Ban;
	cout << "\nSo san pham hoan thanh: " << So_SanPham;
	cout << "\nDay la nhan vien san xuat. \n";
}

double NhanVienSanXuat::Tinh_Tien_Luong() {
	Luong = Luong_Can_Ban + So_SanPham * 5000;
	return Luong;
}
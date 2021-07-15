#include "NhanVien.h"
#include<iostream>
#include<string>


using namespace std;

NhanVien::NhanVien() {

}

NhanVien::~NhanVien() {

}

/*
double NhanVien::getter() {
	return Luong;
}

void NhanVien::setter(double Luong) {
	this->Luong = Luong;
}

*/

void NhanVien::input() {
	cout << "\nMoi ban nhap ho ten cua nhan vien: ";
	getline(cin, HoTen);
	NgaySinh.Nhap();

}

void NhanVien::output() {
	cout << "\nThong tin nhan vien:\nHo ten: ";
	cout << HoTen << "\n";
	cout << "Ngay sinh: ";
	NgaySinh.Xuat();
	cout << "\nLuong: " << Luong;
}
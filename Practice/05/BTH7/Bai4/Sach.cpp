#include "Sach.h"


Sach::Sach() {

}

Sach::~Sach() {

}

void Sach::input() {
	cout << "Nhap ten sach: ";
	getline(cin, TenSach);
	cout << "Nhap noi dung: ";
	getline(cin, NoiDung);
	cout << "Nhap gia ban: ";
	cin >> GiaBan;
	cin.ignore();

}

void Sach::output() {
	//cout << "\nLoai sach: " << LoaiSach;
	cout << "\nTen  sach: " << TenSach;
	cout << "\nNoi  dung: " << NoiDung;
	cout << "\nGia  ban: " << GiaBan << " dong.";
}
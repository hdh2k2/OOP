#include"PhanSo.h"
#define HHD 10000
#include<iostream>

using namespace std;

int main() {
	PhanSo a, b, c;

	cout << "Chao mung ban den voi chuong trinh tinh toan phan so!!! \n\nMoi ban nhap du lieu cua phan so thu nhat. \n";
	a.NhapPhanSo(a);
	cout << "Phan so thu nhat: ";
	a.XuatPhanSo(a);
	cout << endl << endl;

	cout << "Moi ban nhap du lieu cua phan so thu hai.\n";
	b.NhapPhanSo(b);
	cout << "Phan so thu hai: ";
	b.XuatPhanSo(b);
	cout << endl << endl;

	c = a.Tong(b);
	cout << "Tong hai phan so la: ";
	c.XuatPhanSo(c);
	cout << endl;

	cout << "Hieu hai phan so la: ";
	c = a.Hieu(b);
	c.XuatPhanSo(c);
	cout << endl;

	cout << "Tich hai phan so la: ";
	c = a.Tich(b);
	c.XuatPhanSo(c);
	cout << endl;

	cout << "Thuong hai phan so la: ";
	c = a.Thuong(b);
	c.XuatPhanSo(c);
	cout << endl;
}
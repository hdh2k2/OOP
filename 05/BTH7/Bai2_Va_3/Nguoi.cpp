#include"Library.h"

using namespace std;

void Nguoi::input() {
	Nguoi x;
	cout << "Moi ban nhap ho ten: ";
	getline(cin, HoTen);
	cout << "Moi ban nhap nam sinh: ";
	cin >> NamSinh;
	cin.ignore();
	cout << "Moi ban nhap dia chi: ";
	getline(cin, DiaChi);

}




void Nguoi::output() {
	cout << "\nHo ten: " << HoTen;
	cout << "\nNam sinh: " << NamSinh;
	cout << "\nDia chi: " << DiaChi;

}

Nguoi::Nguoi() {

}

Nguoi::~Nguoi() {

}
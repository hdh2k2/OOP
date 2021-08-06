#include"Library.h"

void BacSi::input() {
	Nguoi::input();
	cout << "Moi ban nhap khoa chuyen mon: ";
	getline(cin, Khoa_Chuyen_Mon);
	cout << "Moi ban nhap so nam chua benh: ";
	cin >> So_Nam_Chua_Benh;

	cin.ignore();
	NoiLamViec::input();

}

void BacSi::output() {
	Nguoi::output();

	Nghenghiep = "Bac si";
	cout << "\nNghe nghiep: " << Nghenghiep << "\n";

	cout << "Khoa chuyen mon: " << Khoa_Chuyen_Mon;
	cout << "\nSo nam chua benh: " << So_Nam_Chua_Benh;


	cout << endl;

	if (IsNLV()) {
		Noi_Lam_Viec = "Benh vien\n";
		NoiLamViec::output();
	}
	else
		cout << "Noi lam viec: Ban da nhap sai noi lam viec !!!";

	cout << endl;
}

string BacSi::getterNgheNghiep() {
	return Nghenghiep;
}

void BacSi::setterNgheNghiep(string Nghenghiep) {
	this->Nghenghiep = Nghenghiep;
}

BacSi::BacSi() {

}
BacSi::~BacSi() {

}
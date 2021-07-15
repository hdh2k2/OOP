#include"Library.h"

void CaSi::input() {
	Nguoi::input();
	cout << "Moi ban nhap dong nhac: ";
	getline(cin, Dong_Nhac);
	cout << "Moi ban nhap so show da dien: ";
	cin >> So_Show_Da_Dien;
	cout << "Moi ban nhap so album da ra mat: ";
	cin >> So_Album_Da_Ra_Mat;
	cin.ignore();
	NoiLamViec::input();

}

void CaSi::output() {
	Nguoi::output();

	Nghenghiep = "Ca si";
	cout << "\nNghe nghiep: " << Nghenghiep << "\n";

	cout << "Dong nhac: " << Dong_Nhac;
	cout << "\nSo show da dien: " << So_Show_Da_Dien;
	cout << "\nSo album da ra mat: " << So_Album_Da_Ra_Mat;

	cout << endl;

	if (IsNLV()) {
		Noi_Lam_Viec = "San khau\n";
		NoiLamViec::output();
	}
	else
		cout << "Noi lam viec: Ban da nhap sai noi lam viec !!!";

	cout << endl;
}

string CaSi::getterNgheNghiep() {
	return Nghenghiep;
}

void CaSi::setterNgheNghiep(string Nghenghiep) {
	this->Nghenghiep = Nghenghiep;
}

CaSi::CaSi() {

}
CaSi::~CaSi() {

}
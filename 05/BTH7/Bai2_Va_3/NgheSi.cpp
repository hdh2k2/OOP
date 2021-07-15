#include"Library.h"

void NgheSi::input() {
	Nguoi::input();
	cout << "Moi ban nhap chi tiet nghe si( Nghe si hai, nghe si kich, ... ): ";
	getline(cin, The_Loai);
	cout << "Moi ban nhap so show da dien: ";
	cin >> So_Show_Da_Dien;

	cin.ignore();
	NoiLamViec::input();

}

void NgheSi::output() {
	Nguoi::output();

	Nghenghiep = "Nghe si";
	cout << "\nNghe nghiep: " << Nghenghiep << "\n";

	cout << "Chuc danh: " << The_Loai;
	cout << "\nSo show da dien: " << So_Show_Da_Dien;
	cout << endl;

	if (IsNLV()) {
		Noi_Lam_Viec = "San khau\n";
		NoiLamViec::output();
	}
	else
		cout << "Noi lam viec: Ban da nhap sai noi lam viec !!!";

	cout << endl;
}

string NgheSi::getterNgheNghiep() {
	return Nghenghiep;
}

void NgheSi::setterNgheNghiep(string Nghenghiep) {
	this->Nghenghiep = Nghenghiep;
}

NgheSi::NgheSi() {

}
NgheSi::~NgheSi() {

}
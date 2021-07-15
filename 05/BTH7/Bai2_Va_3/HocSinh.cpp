#include"Library.h"

void HocSinh::input() {
	Nguoi::input();
	cout << "Moi ban nhap diem trung binh: ";
	cin >> Diem_Trung_Binh;
	cin.ignore();
	NoiLamViec::input();

}

void HocSinh::output() {
	Nguoi::output();

	Nghenghiep = "Hoc sinh";
	cout << "\nNghe nghiep: " << Nghenghiep;
	cout << "\nDiem trung binh: " << Diem_Trung_Binh;
	cout << endl;

	if (IsNLV()) {
		Noi_Lam_Viec = "Truong hoc\n";
		NoiLamViec::output();
	}
	else
		cout << "Noi lam viec: Ban da nhap sai noi lam viec !!!";

	cout << endl;
}

string HocSinh::getterNgheNghiep() {
	return Nghenghiep;
}

void HocSinh::setterNgheNghiep(string Nghenghiep) {
	this->Nghenghiep = Nghenghiep;
}

HocSinh::HocSinh() {

}
HocSinh::~HocSinh() {

}
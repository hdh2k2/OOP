#include"Library.h"

void CongNhan::input() {
	Nguoi::input();
	cout << "Moi ban nhap luong co ban: ";
	cin >> Luong_Co_Ban;
	cout << "Moi ban nhap so ngay phep: ";
	cin >> So_Ngay_Phep;
	cout << "Moi ban nhap so nam kinh nghiem: ";
	cin >> So_Nam_Kinh_Nghiem;
	cin.ignore();
	NoiLamViec::input();

}

void CongNhan::output() {
	Nguoi::output();

	Nghenghiep = "Cong nhan";
	cout << "\nNghe nghiep: " << Nghenghiep << "\n";

	cout << "Luong co ban: " << Luong_Co_Ban;
	cout << "\nSo ngay nghi phep: " << So_Ngay_Phep;
	cout << "\nSo nam kinh nghiem: " << So_Nam_Kinh_Nghiem;

	cout << endl;

	if (IsNLV()) {
		Noi_Lam_Viec = "Nha may\n";
		NoiLamViec::output();
	}
	else
		cout << "Noi lam viec: Ban da nhap sai noi lam viec !!!";

	cout << endl;
}

string CongNhan::getterNgheNghiep() {
	return Nghenghiep;
}

void CongNhan::setterNgheNghiep(string Nghenghiep) {
	this->Nghenghiep = Nghenghiep;
}

CongNhan::CongNhan() {

}
CongNhan::~CongNhan() {

}
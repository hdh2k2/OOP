#include"Library.h"

void SinhVien::input() {
	Nguoi::input();
	cout << "Moi ban nhap ma sinh vien: ";
	getline(cin, Ma_Sinh_Vien);
	cout << "Moi ban nhap diem trung binh: ";
	cin >> Diem_Trung_Binh;
	cin.ignore();
	NoiLamViec::input();

}

void SinhVien::output() {
	Nguoi::output();

	Nghenghiep = "Sinh vien";
	cout << "\nNghe nghiep: " << Nghenghiep << "\n";

	cout << "Ma so sinh vien: " << Ma_Sinh_Vien;
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

string SinhVien::getterNgheNghiep() {
	return Nghenghiep;
}

void SinhVien::setterNgheNghiep(string Nghenghiep) {
	this->Nghenghiep = Nghenghiep;
}

SinhVien::SinhVien() {

}
SinhVien::~SinhVien() {

}
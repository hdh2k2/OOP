#include "De.h"

De::De() {

}

De::~De() {

}

bool De::KiemTraTenGiaSuc() {
	if (this->TenGiaSuc == "De")
		return true;
	return false;
}

void De::input() {
	cin.ignore();
	cout << "\n\t Nhap ten gia suc ( Vi du: De ): ";
	getline(cin, this->TenGiaSuc);
	if (!KiemTraTenGiaSuc()) {
		do {
			cout << "\n\t Ban da nhap sai ten gia suc!! Ten gia suc phai la 'De'\n\tMoi ban nhap lai: ";
			getline(cin, this->TenGiaSuc);
		} while (!KiemTraTenGiaSuc());
	}

	cout << "\n\t Nhap so lit sua ma gia suc cho sau 1 lua sinh: ";
	cin >> this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh;
	if (!KiemTraSua()) {
		do {
			cout << "\n\t Ban da nhap sai (so lit sua tu 0-10 lit). Moi ban nhap lai: ";
			cin >> this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh;
		} while (!KiemTraSua());
	}

	cout << "\n\t Moi ban nhap so con duoc sinh ra ( nhap 0 neu ban chi vua nhap 1 con De ): ";
	cin >> SoConDuocSinhRa;

	if (!KiemTraSoConDuocSinhRa()) {
		do {
			cout << "\n\t Ban da nhap sai. Moi ban nhap lai: ";
			cin >> SoConDuocSinhRa;
		} while (!KiemTraSoConDuocSinhRa());
	}
	cin.ignore();
}

bool De::KiemTraSua() {
	if (this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh >= 0 && this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh <= 10)
		return true;
	return false;
}

bool De::KiemTraSoConDuocSinhRa() {
	if (this->SoConDuocSinhRa >= 0)
		return true;
	return false;
}

void De::output() {
	cout << "\n\t Ten gia suc: " << this->TenGiaSuc;
	cout << "\n\t So con duoc sinh ra trong 1 lua: " << this->SoConDuocSinhRa;
	cout << "\n\t So lit sua ma gia suc cho sau 1 lua sinh: " << this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh <<" lit";
}

double De::SoLitSuaMaGiaSucChoSau1LuaSinh() {
	return this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh;
}

int De::SoConDuocSinh_Ra() {
	return this->SoConDuocSinhRa;
}
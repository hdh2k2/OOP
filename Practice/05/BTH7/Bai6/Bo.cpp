#include "Bo.h"
Bo::Bo() {

}

Bo::~Bo() {

}

bool Bo::KiemTraTenGiaSuc() {
	if (this->TenGiaSuc == "Bo" || this->TenGiaSuc == "Bo Sua" || this->TenGiaSuc == "Bo Vang")
		return true;
	return false;
}

void Bo::input() {
	cin.ignore();
	cout << "\n\t Nhap ten gia suc ( Vi du: Bo, Bo Vang, Bo Sua ): ";
	getline(cin, this->TenGiaSuc);
	if (!KiemTraTenGiaSuc()) {
		do {
			cout << "\n\t Ban da nhap sai ten gia suc!! Ten gia suc phai la 'Bo' hoac 'Bo Sua' hoac 'Bo Vang' \n\tMoi ban nhap lai: ";
			getline(cin, this->TenGiaSuc);
		} while (!KiemTraTenGiaSuc());
	}

	cout << "\n\t Nhap so lit sua ma gia suc cho sau 1 lua sinh: ";
	cin >> this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh;
	if (!KiemTraSua()) {
		do {
			cout << "\n\t Ban da nhap sai (so lit sua tu 0-20 lit). Moi ban nhap lai: ";
			cin >> this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh;
		} while (!KiemTraSua());
	}

	cout << "\n\t Moi ban nhap so con duoc sinh ra ( nhap 0 neu ban chi vua nhap 1 con Bo ): ";
	cin >> SoConDuocSinhRa;

	if (!KiemTraSoConDuocSinhRa()) {
		do {
			cout << "\n\t Ban da nhap sai. Moi ban nhap lai: ";
			cin >> SoConDuocSinhRa;
		} while (!KiemTraSoConDuocSinhRa());
	}

	cin.ignore();
}

bool Bo::KiemTraSua() {
	if (this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh >= 0 && this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh <= 20)
		return true;
	return false;
}

bool Bo::KiemTraSoConDuocSinhRa() {
	if (this->SoConDuocSinhRa >= 0)
		return true;
	return false;
}

void Bo::output() {
	cout << "\n\t Ten gia suc: " << this->TenGiaSuc;
	cout << "\n\t So con duoc sinh ra trong 1 lua: " << this->SoConDuocSinhRa;
	cout << "\n\t So lit sua ma gia suc cho sau 1 lua sinh: " << this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh << " lit";
}


double Bo::SoLitSuaMaGiaSucChoSau1LuaSinh() {
	return this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh;
}

int Bo::SoConDuocSinh_Ra() {
	return this->SoConDuocSinhRa;
}
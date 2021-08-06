#include "Cuu.h"

Cuu::Cuu() {

}

Cuu::~Cuu() {

}

bool Cuu::KiemTraTenGiaSuc() {
	if (this->TenGiaSuc == "Cuu" || this->TenGiaSuc == "Cuu nha")
		return true;
	return false;
}

void Cuu::input() {
	cin.ignore();
	cout << "\n\t Nhap ten gia suc ( Vi du: Cuu, Cuu nha): ";
	getline(cin, this->TenGiaSuc);
	if (!KiemTraTenGiaSuc()) {
		do {
			cout << "\n\t Ban da nhap sai ten gia suc!! (Ten gia suc phai la 'Cuu' hoac 'Cuu nha'\n\tMoi ban nhap lai: ";
			getline(cin, this->TenGiaSuc);
		} while (!KiemTraTenGiaSuc());
	}

	cout << "\n\t Nhap so lit sua ma gia suc cho sau 1 lua sinh: ";
	cin >> this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh;
	if (!KiemTraSua()) {
		do {
			cout << "\n\t Ban da nhap sai (so lit sua tu 0-5 lit). Moi ban nhap lai: ";
			cin >> this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh;
		} while (!KiemTraSua());
	}

	cout << "\n\t Moi ban nhap so con duoc sinh ra ( nhap 0 neu ban chi vua nhap 1 con Cuu ): ";
	cin >> SoConDuocSinhRa;

	if (!KiemTraSoConDuocSinhRa()) {
		do {
			cout << "\n\t Ban da nhap sai. Moi ban nhap lai: ";
			cin >> SoConDuocSinhRa;
		} while (!KiemTraSoConDuocSinhRa());
	}
	cin.ignore();
}

bool Cuu::KiemTraSua() {
	if (this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh >= 0 && this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh <= 5)
		return true;
	return false;
}

bool Cuu::KiemTraSoConDuocSinhRa() {
	if (this->SoConDuocSinhRa >= 0)
		return true;
	return false;
}

void Cuu::output() {
	cout << "\n\t Ten gia suc: " << this->TenGiaSuc;
	cout << "\n\t So con duoc sinh ra trong 1 lua: " << this->SoConDuocSinhRa;
	cout << "\n\t So lit sua ma gia suc cho sau 1 lua sinh: " << this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh << " lit";
}

double Cuu::SoLitSuaMaGiaSucChoSau1LuaSinh() {
	return this->So_Lit_Sua_Ma_Gia_Suc_Cho_Sau_1_Lua_Sinh;
}

int Cuu::SoConDuocSinh_Ra() {
	return this->SoConDuocSinhRa;
}
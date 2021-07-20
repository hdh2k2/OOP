#include "DatPhiNongNghiep.h"


DatPhiNongNghiep::DatPhiNongNghiep() {

}

DatPhiNongNghiep::~DatPhiNongNghiep() {

}

double DatPhiNongNghiep::GetterDienTichDat() {
	return this->DienTichDat;
}

void DatPhiNongNghiep::NhapThongTinDat() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"\t Mời bạn nhập diện tích đất: ";
	wcin >> this->DienTichDat;
}

void DatPhiNongNghiep::XuatThongTinDat() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	wcout << L"\n\t Diện tích đất: " << this->DienTichDat;
}
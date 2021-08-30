#include "DatNongNghiep.h"

DatNongNghiep::DatNongNghiep() {

}

DatNongNghiep::~DatNongNghiep() {

}

double DatNongNghiep::GetterDienTichDat() {
	return this->DienTichDat;
}

void DatNongNghiep::NhapThongTinDat() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"\t Mời bạn nhập diện tích đất: ";
	wcin >> this->DienTichDat;
}

void DatNongNghiep::XuatThongTinDat() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	wcout << L"\n\t Diện tích đất: " << this->DienTichDat;
}
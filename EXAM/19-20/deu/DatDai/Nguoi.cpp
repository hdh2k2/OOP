#include "Nguoi.h"
#include<string>

Nguoi::Nguoi() {

}

Nguoi::~Nguoi() {

}

void Nguoi::NhapThongTin() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"\t === Nhập thông tin chủ sở hữu === \n";
	wcout << L"\t Mời bạn nhập họ tên: ";
	getline(wcin, this->HoTen);
	wcout << L"\t Mời bạn nhập năm sinh: ";
	wcin >> this->NamSinh;
	wcin.ignore();
	wcout << L"\t Mời bạn nhập CMND: ";
	getline(wcin, this->CMND);
	wcout << L"\t Mời bạn nhập địa chỉ thường trú: ";
	getline(wcin, this->DiaChiThuongTru);
}

void Nguoi::XuatThongTin() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"\t === Thông tin chủ sở hữu === ";
	wcout << L"\n\t Họ tên: " << HoTen;
	wcout << L"\n\t Năm sinh: " << this->NamSinh;
	wcout << L"\n\t CMND: " << this->CMND;
	wcout << L"\n\t Địa chỉ thường trú: " << this->DiaChiThuongTru;
}


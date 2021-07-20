#include "SoHong.h"
#include<string>

SoHong::SoHong() {

}

SoHong::~SoHong() {

}

wstring SoHong::GetterLoaiGiayTo() {
	return this->loaigiayto;
}

void SoHong::SetterLoaiSoHong(wstring loaisohong) {
	this->loaigiayto = loaisohong;
}

void SoHong::NhapThongTinDat() {
	wcout << L"\t Mời bạn nhập diện tích đất: ";
	wcin >> this->DienTichDat;
}

void SoHong::XuatThongTinDat() {
	wcout << L"\n\t Diện tích đất: " << this->DienTichDat;
}

double SoHong::GetterDienTichDat() {
	return this->DienTichDat;
}

int SoHong::gettter_ThoiHanQuyenSuDungDat() {
	return this->ThoiHanQuyenSuDungDat;
}

void SoHong::NhapThongTinGiayTo(wstring loaigiayto) {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	DatDai* datdai;
	this->loaigiayto = loaigiayto;
	if (this->loaigiayto == L"SoHongDatNongNghiep") {
		wcout << L"\t === Nhập thông tin giấy tờ === \n";
		wcout << L"\t Mời bạn nhập số giấy chứng nhận: ";
		getline(wcin, this->SoGiayChungNhan);
		NguoiSoHuuDat.NhapThongTin();
		wcout << L"\t Mời bạn nhập số thửa đất: ";
		wcin >> this->SoThuaDat;
		wcout << L"\t Mời bạn nhập số tờ bản đồ: ";
		wcin >> this->SoToBanDo;
		wcin.ignore();
		wcout << L"\t Mời bạn nhập ngày cấp: ";
		getline(wcin, this->NgayCap);
		wcout << L"\t Mời bạn nhập diện tích đất: ";
		datdai = new DatNongNghiep;
		datdai->NhapThongTinDat();
		this->DienTichDat = datdai->GetterDienTichDat();
		wcout << L"\t Mời bạn nhập đơn giá thuế phải đóng: ";
		wcin >> this->DonGiaThuePhaiDong;
		wcout << L"\t Mời bạn nhập thời hạn quyền sử dụng đất: ";
		wcin >> this->ThoiHanQuyenSuDungDat;
	}

	if (this->loaigiayto == L"SoHongDatPhiNongNghiep") {
		wcout << L"\t === Nhập thông tin giấy tờ === \n";
		wcout << L"\t Mời bạn nhập số giấy chứng nhận: ";
		getline(wcin, this->SoGiayChungNhan);
		NguoiSoHuuDat.NhapThongTin();
		wcout << L"\t Mời bạn nhập số thửa đất: ";
		wcin >> this->SoThuaDat;
		wcout << L"\t Mời bạn nhập số tờ bản đồ: ";
		wcin >> this->SoToBanDo;
		wcin.ignore();
		wcout << L"\t Mời bạn nhập dịa chỉ thửa đất: ";
		getline(wcin, this->DiaChiThuaDat);
		wcout << L"\t Mời bạn nhập ngày cấp: ";
		getline(wcin, this->NgayCap);
		wcout << L"\t Mời bạn nhập diện tích đất: ";
		datdai = new DatPhiNongNghiep;
		datdai->NhapThongTinDat();
		this->DienTichDat = datdai->GetterDienTichDat();
		wcout << L"\t Mời bạn nhập đơn giá thuế phải đóng: ";
		wcin >> this->DonGiaThuePhaiDong;
	}
}

void SoHong::XuatThongTinGiayTo(wstring loaigiayto) {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	if (this->loaigiayto == L"SoHongDatNongNghiep") {
		wcout << L"\t === Thông tin giấy tờ === ";
		wcout << L"\n\t Số giấy chứng nhận: " << this->SoGiayChungNhan << endl;
		NguoiSoHuuDat.XuatThongTin();
		wcout << L"\n\t Số thửa đất: " << this->SoThuaDat;
		wcout << L"\n\t Số tờ bản đồ: " << this->SoToBanDo;
		wcout << L"\n\t Ngày cấp: " << this->NgayCap;
		wcout << L"\t Diện tích đất: "; this->XuatThongTinDat();
		wcout << L"\n\t Đơn giá thuế phải đóng: " << this->DonGiaThuePhaiDong;
		wcout << L"\n\t Thời hạn quyền sử dụng đất: " << this->ThoiHanQuyenSuDungDat;
	}

	if (this->loaigiayto == L"SoHongDatPhiNongNghiep") {
		wcout << L"\t === Thông tin giấy tờ === ";
		wcout << L"\n\t Số giấy chứng nhận: " << this->SoGiayChungNhan << endl;
		NguoiSoHuuDat.XuatThongTin();
		wcout << L"\n\t Số thửa đất: " << this->SoThuaDat;
		wcout << L"\n\t Số tờ bản đồ: " << this->SoToBanDo;
		wcout << L"\n\t Ngày cấp: " << this->NgayCap;
		wcout << L"\n\t Đơn giá thuế phải đóng: " << this->DonGiaThuePhaiDong;
	}
}

double SoHong::TinhTienThue() {
	return this->GetterDienTichDat() * this->DonGiaThuePhaiDong;
}
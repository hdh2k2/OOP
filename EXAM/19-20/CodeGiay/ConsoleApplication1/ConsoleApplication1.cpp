#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <io.h>
#include <fcntl.h>

using namespace std;

class Nguoi {
private:
	wstring HoTen;
	int NamSinh;
	wstring CMND;
	wstring DiaChiThuongTru;
public:
	void NhapThongTin();
	void XuatThongTin();
};

void Nguoi::NhapThongTin() {
	
	wcout << L"Nhập họ tên: ";
	getline(wcin, this->HoTen);
	wcout << L"Nhập năm sinh: ";
	wcin >> this->NamSinh;
	wcout << L"Nhập CMND: ";
	wcin.ignore();
	getline(wcin, this->CMND);
	wcout << L"Nhập địa chỉ thường trú: ";
	getline(wcin, this->DiaChiThuongTru);
}

void Nguoi::XuatThongTin() {
	wcout << L"\nHọ tên:" << this->HoTen;
	wcout << L"\nNăm sinh: " << this->NamSinh;
	wcout << L"\nCMND: " << this->CMND;
	wcout << L"\nĐịa chỉ thường trú: " << this->DiaChiThuongTru;
}

class SoHong {
protected:
	wstring SoGiayChungNhan;
	int SoNguoiSoHuuQuyenSuDungDat;
	Nguoi* NguoiSoHuuQuyenSuDungDat;
	int SoThuaDat;
	int SoToBanDo;
	wstring DiaChiThuaDat;
	double DienTich;
	wstring NgayCap;
	double DonGiaThuePhaiDong;
	wstring LoaiSoHong;
public:
	virtual wstring getter_LoaiSoHong() = 0;
	virtual void LuuThongTinSoHong(); // Sử dụng để phục vụ cho tính đa hình
	virtual void XuatThongTinSoHong(); // Sử dụng để phục vụ cho tính đa hình
	virtual double TienThuePhaiDong() = 0; // Sử dụng để phục vụ cho tính đa hình, trừu tượng.
};

void SoHong::LuuThongTinSoHong() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcin.ignore();
	wcout << L"Nhập thông tin sổ hồng !!! \n";
	wcout << L"Nhập số giấy chứng nhận: ";
	getline(wcin, this->SoGiayChungNhan);
	wcout << L"Nhập số lượng chủ sở hữu quyền sử dụng đất: ";
	wcin >> this->SoNguoiSoHuuQuyenSuDungDat;
	for (int i = 0; i < SoNguoiSoHuuQuyenSuDungDat; i++) {
		wcout << L"Nhập thông tin chủ sở hữu thứ " << i + 1 << L": \n";
		NguoiSoHuuQuyenSuDungDat[i].NhapThongTin();
	}

	wcout << L"Nhập số thửa đất: "; 
	wcin >> this->SoThuaDat;
	wcout << L"Nhập số tờ bản đồ: ";
	wcin >> this->SoToBanDo;
	wcin.ignore();
	wcout << L"Nhập địa chỉ thửa đất: ";
	getline(wcin, this->DiaChiThuaDat);
	wcout << L"Nhập diện tích đất: ";
	wcin >> this->DienTich;
	wcin.ignore();
	wcout << L"Nhập ngày cấp (Định dạng dd/mm/yy): ";
	getline(wcin, this->NgayCap);
	wcout << L"Nhập đơn giá thuế phải đóng: ";
	wcin >> this->DonGiaThuePhaiDong;
}

void SoHong::XuatThongTinSoHong() {
	wcout << L"\nThông tin sổ hồng ";
	wcout << L"\nSố giấy chứng nhận: " << this->SoGiayChungNhan;

	for (int i = 0; i < SoNguoiSoHuuQuyenSuDungDat; i++) {
		wcout << L"\nThông tin người sở hữu thứ " << i + 1 << L": \n";
		NguoiSoHuuQuyenSuDungDat[i].XuatThongTin();
	}

	wcout << L"\nSố thửa đất: " << this->SoThuaDat;
}

class SoHong_NN :public SoHong {
public:
	wstring getter_LoaiSoHong();
	int getter_ThoiHan(); // Thể hiện cách truy cập dũ liệu trong tính đóng gói.
	void LuuThongTinSoHong(); // Nạp chồng hàm để hạn chế việc tiêu tốn tài nguyên dữ liệu, ...
	void XuatThongTinSoHong(); // Nạp chồng hàm để hạn chế việc tiêu tốn tài nguyên dữ liệu, ...
	double TienThuePhaiDong(); // Nạp chòng hàm để tránh lỗi mơ hồ đến từ lớp trừu tượng
private:
	int ThoiHanSuDungDat;
};

wstring SoHong_NN::getter_LoaiSoHong() {
	this->LoaiSoHong = L"Sổ hồng đất nông nghiệp";
	return this->LoaiSoHong;
}

int SoHong_NN::getter_ThoiHan() {
	return this->ThoiHanSuDungDat;
}

void SoHong_NN::LuuThongTinSoHong() {
	SoHong::LuuThongTinSoHong();
	wcout << L"Nhập thời hạn sử dụng đất: ";
	wcin >> this->ThoiHanSuDungDat;
}

void SoHong_NN::XuatThongTinSoHong() {
	SoHong::XuatThongTinSoHong();
	wcout << L"\nThời hạn quyền sử dụng đất: " << this->ThoiHanSuDungDat;
}

double SoHong_NN::TienThuePhaiDong() {
	return (this->DienTich * this->DonGiaThuePhaiDong);
}

class SoHong_PNN :public SoHong {
public:
	wstring getter_LoaiSoHong();
	void LuuThongTinSoHong(); // Nạp chồng hàm để hạn chế việc tiêu tốn tài nguyên dữ liệu, ...
	void XuatThongTinSoHong(); // Nạp chồng hàm để hạn chế việc tiêu tốn tài nguyên dữ liệu, ...
	double TienThuePhaiDong(); // Nạp chòng hàm để tránh lỗi mơ hồ đến từ lớp trừu tượng
};

wstring SoHong_PNN::getter_LoaiSoHong() {
	this->LoaiSoHong = L"Sổ hồng đất phi nông nghiệp";
	return this->LoaiSoHong;
}

void SoHong_PNN::LuuThongTinSoHong() {
	SoHong::LuuThongTinSoHong();
}

void SoHong_PNN::XuatThongTinSoHong() {
	SoHong::XuatThongTinSoHong();
}

double SoHong_PNN::TienThuePhaiDong() {
	return (this->DienTich * this->DonGiaThuePhaiDong);
}

class QuanLi {
private:
	vector<SoHong*> QuanLiSoHong; // Dùng vector con trỏ để giảm thiểu bộ nhớ cấp phát. Đặc biệt dùng vector đối với
	// lớp superclass để thực hiện phương pháp liên kết động.
public:
	void quanli();
};

void QuanLi::quanli() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	// Câu 1:

	SoHong* sohong;  // Khời tạo điều kiện cần cho liên kết động
	int SoLuongSoHong;
	wcout << L"Nhập số lượng sổ hồng: ";
	wcin >> SoLuongSoHong;
	for (int i = 0; i < SoLuongSoHong; i++) {
		int LoaiSoHong;
		wcout<<L"\nNhập loại sổ hồng:\n\t Nhập 1 nếu bạn muốn nhập thông tin sổ hồng đất nông nghiệp. \n\t Nhập 2 nếu bạn muốn nhập thông tin sổ hồng đất phi nông nghiệp. ";
		wcin >> LoaiSoHong;

		if (LoaiSoHong == 1) {
			sohong = new SoHong_NN; // Thực hiện liên kết động đối với sổ hồng đất nông nghiệp
			sohong->LuuThongTinSoHong();
		}

		if (LoaiSoHong == 2) {
			sohong = new SoHong_PNN;// Thực hiện liên kết động đối với sổ hồng đất phi nông nghiệp
			sohong->LuuThongTinSoHong();
		}
		
		QuanLiSoHong.push_back(sohong); // Lưu danh sách sổ hồng vào vector 

	}

	// Câu 2

	double res = 0;
	for (int i = 0; i < QuanLiSoHong.size(); i++)
		res += QuanLiSoHong[i]->TienThuePhaiDong();

	wcout << L"\n\nTổng tiền thuế mà người sử dụng đất phải đóng cho nhà nước: " <<(size_t)res << L"đồng";

	int index = 0;
	double max = QuanLiSoHong[index]->TienThuePhaiDong();
	for (int i = 1; i < QuanLiSoHong.size(); i++) {
		if (max < QuanLiSoHong[i]->TienThuePhaiDong()) {
			max = QuanLiSoHong[i]->TienThuePhaiDong();
			index = i;
		}
	}

	wcout << L"\n\n\t Thông tin thửa đất có số tiền thuế phải đóng nhiều nhất";
	QuanLiSoHong[index]->XuatThongTinSoHong();

	// Câu 3

	wcout << L"\n\n\t Thông tin thửa dất nông nghiệp có thời hạn sử dụng nhỏ hơn năm hiện tại (năm 2021). ";
	for (int i = 0; i < QuanLiSoHong.size(); i++)
		if (QuanLiSoHong[i]->getter_LoaiSoHong() == L"Sổ hồng đất nông nghiệp")
			if (((SoHong_NN*)QuanLiSoHong[i])->getter_ThoiHan() < 2021) // Truy cập nội tại liên kết động
				QuanLiSoHong[i]->XuatThongTinSoHong();
}

int main() {
	QuanLi quanlii;
	quanlii.quanli();
}
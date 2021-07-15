#include <vector>
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class NhanVien
{	
private:
	string maNhanVien;
	string hoTen;
	string phongBan;
	long luongCoBan;
	long luongThuong;
	long long thucLanh;
public:	
	NhanVien();
	~NhanVien();

	void NhapThongTin();
	void XuatThongTin();
	long long TinhTienThucLanh();
	long GetLuongCoBan();
	long GetLuongThuong();
	string GetMSNV();
	string GetPhongBan();
};

NhanVien::NhanVien() {

}
NhanVien::~NhanVien() {

}

void NhanVien::NhapThongTin() {
	do
	{
		cout << "NHAP MA SO NHAN VIEN: ";
		getline(cin, this->maNhanVien);
		if (this->maNhanVien.length() > 8 || this->maNhanVien.length() < 1) {
			cout << "MA SO NHAN VIEN TOI DA CO 8 KI TU\n";
		}
	} while (this->maNhanVien.length() > 8 || this->maNhanVien.length() < 1);

	do
	{
		cout << "NHAP HO TEN NHAN VIEN: ";
		getline(cin, this->hoTen);
		if (this->hoTen.length() > 20 || this->hoTen.length() < 1) {
			cout << "HO TEN NHAN VIEN TOI DA CO 20 KI TU\n";
		}
	} while (this->hoTen.length() > 20 || this->hoTen.length() < 1);

	do
	{
		cout << "NHAP PHONG BAN NHAN VIEN: ";
		getline(cin, this->phongBan);
		if (this->phongBan.length() > 10 || this->phongBan.length() < 1) {
			cout << "TEN PHONG BAN NHAN VIEN CO TOI DA 10 KI TU\n";
		}
	} while (this->phongBan.length() > 10 || this->phongBan.length() < 1);

	do
	{
		cout << "NHAP LUONG CO BAN: ";
		cin >> this->luongCoBan;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			this->luongCoBan = -1;
		}
		if (this->luongCoBan < 0) {
			cout << "LUONG CO BAN KHONG HOP LE\n";
		}
	} while (this->luongCoBan < 0);

	do
	{
		cout << "NHAP LUONG THUONG: ";
		cin >> this->luongThuong;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			this->luongThuong = -1;
		}
		if (this->luongThuong < 0) {
			cout << "LUONG THUONG KHONG HOP LE\n";
		}
	} while (this->luongThuong < 0);
	
	this->thucLanh = this->luongCoBan + this->luongThuong;
}
void NhanVien::XuatThongTin() {
	cout << setfill(' ');
	cout << setw(15) << left << this->maNhanVien;
	cout << setw(30) << left << this->hoTen;
	cout << setw(15) << left << this->phongBan;
	cout << setw(20) << left << this->luongCoBan;
	cout << setw(20) << left << this->luongThuong;
	cout << setw(20) << left << this->thucLanh;
}
long long NhanVien::TinhTienThucLanh() {
	return this->thucLanh;
}
long NhanVien::GetLuongCoBan() {
	return this->luongCoBan;
}
long NhanVien::GetLuongThuong() {
	return this->luongThuong;
}
string NhanVien::GetMSNV() {
	return this->maNhanVien;
}
string NhanVien::GetPhongBan() {
	return this->phongBan;
}

class CongTy
{
private:
	vector<NhanVien> ds_nv;
	void Header_Table() {
		cout << setfill(' ');
		cout << setw(12) << left << "STT";
		cout << setw(15) << left << "MSNV";
		cout << setw(30) << left << "HO TEN";
		cout << setw(15) << left << "PHONG BAN";
		cout << setw(20) << left << "LUONG CO BAN";
		cout << setw(20) << left << "LUONG THUONG";
		cout << setw(20) << left << "THUC LANH" << endl;
		cout << setfill('-') << setw(150) << "-" << endl;
	}
public:
	CongTy();
	~CongTy();

	void ThemThongTin();
	void XuatDanhSach();
	bool KiemTraDaCoDuLieu();
	long long TinhTongTienThucLanh();
	long TimMucLuongCoBanThapNhat();
	void XuatDanhSachNhanVienCoMucLuongCBThapNhat();
	int DemSoLuongNVCoMucThuongTren_1200000();
	bool KiemTraTrungPhongBan();
	void SapXepTheoPhongBanHoacMSNV();
};

CongTy::CongTy(){}
CongTy::~CongTy() {}


void CongTy::ThemThongTin() {
	NhanVien a;
	a.NhapThongTin();
	ds_nv.push_back(a);
}
void CongTy::XuatDanhSach() {
	Header_Table();
	int n = ds_nv.size();
	for (int i = 0; i < n; i++) {
		cout << setfill(' ');
		cout << setw(12) << left << i + 1;
		ds_nv[i].XuatThongTin();
		cout << endl;
	}
}
bool CongTy::KiemTraDaCoDuLieu() {
	return ds_nv.size();
}
long long  CongTy::TinhTongTienThucLanh() {
	int n = ds_nv.size();
	long long tong = 0;
	for (int i = 0; i < n; i++) {
		tong += ds_nv[i].TinhTienThucLanh();
	}
	return tong;
}
long CongTy::TimMucLuongCoBanThapNhat() {
	int min = ds_nv[0].GetLuongCoBan();
	int size = ds_nv.size();
	for (int i = 0; i < size; i++) {
		if (min > ds_nv[i].GetLuongCoBan()) {
			min = ds_nv[i].GetLuongCoBan();
		}
	}
	return min;
}
void CongTy::XuatDanhSachNhanVienCoMucLuongCBThapNhat() {
	int size = ds_nv.size();
	Header_Table();
	int j = 1;
	for (int i = 0; i < size; i++) {
		if (ds_nv[i].GetLuongCoBan() == TimMucLuongCoBanThapNhat()) {
			cout << setfill(' ');
			cout << setw(12) << left << j;
			ds_nv[i].XuatThongTin();
			cout << endl;
			j++;
		}
	}
}
int CongTy::DemSoLuongNVCoMucThuongTren_1200000() {
	int soNV = 0, size = ds_nv.size();
	for (int i = 0; i < size; i++) {
		if (ds_nv[i].GetLuongThuong() > 12000000) {
			soNV++;
		}
	}
	return soNV;
}
bool CongTy::KiemTraTrungPhongBan() {
	int size = ds_nv.size();
	for (int i = 0; i < size - 1; i++) 
		for (int j = i + 1; j < size; j++) 
			if (ds_nv[i].GetPhongBan()[0] == ds_nv[j].GetPhongBan()[0]) 
				return false;
	return true;
}
void CongTy::SapXepTheoPhongBanHoacMSNV() {
	int size = ds_nv.size();
	for (int i = 0; i < size; i++) {
		if (KiemTraTrungPhongBan()) {
			for (int j = 0; j < size - 1; j++) {
				for (int k = j + 1; k < size; k++) {
					if (ds_nv[j].GetPhongBan()[0] > ds_nv[k].GetPhongBan()[0])
						swap(ds_nv[j], ds_nv[k]);
				}
			}
		}
		else {
			for (int j = 0; j < size - 1; j++) {
				for (int k = j + 1; k < size; k++) {
					if (ds_nv[j].GetMSNV()[0] < ds_nv[k].GetMSNV()[0])
						swap(ds_nv[j], ds_nv[k]);
				}
			}
		}
	}
}

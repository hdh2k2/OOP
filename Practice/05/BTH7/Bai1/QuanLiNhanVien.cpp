#include "QuanLiNhanVien.h"
#include<iostream>

using namespace std;



void QuanLiNhanVien::input() {

	int luachon;
	while (true) {
		system("cls");
		cout << "\n\n\t ========= QUAN LI NHAN VIEN ========= ";
		cout << "\n\n\t 1. Nhap thong tin nhan vien van phong. ";
		cout << "\n\n\t 2. Nhap thong tin nhan vien san xuat";
		cout << "\n\n\t 0. Thoat";
		cout << "\n\n\t ============ END ============ ";


		cout << "\nNhap lua chon: ";
		cin >> luachon;



		NhanVien* Nhanvien;
		if (luachon == 1) {
			Nhanvien = new NhanVienVanPhong; 
			cout << "\n\n\t NHAP THONG TIN NHAN VIEN \n";
			Nhanvien->input();
			Nhanvien->Tinh_Tien_Luong();
			Ql_Nhanvien.push_back(Nhanvien); 
		}

		else if (luachon == 2) {
			Nhanvien = new NhanVienSanXuat;

			cout << "\n\n\t NHAP THONG TIN NHAN VIEN \n";
			Nhanvien->input();
			Nhanvien->Tinh_Tien_Luong();
			Ql_Nhanvien.push_back(Nhanvien);
		}

		else if (luachon == 0) {
			break;
		}

		else {
			cout << "Lua chon khong hop le. Xin kiem tra lai!!!";
			system("pause");
		}
	}
}


void QuanLiNhanVien::output() {
	cout << "\n\n\tThong tin danh sach nhan vien: ";
	for (int i = 0; i < Ql_Nhanvien.size(); i++) {
		Ql_Nhanvien[i]->output();

	}

	double max = Ql_Nhanvien[0]->Tinh_Tien_Luong();
	int indexM = 0;
	double min = Ql_Nhanvien[0]->Tinh_Tien_Luong();
	int indexm = 0;


	for (int i = 1; i < Ql_Nhanvien.size(); i++) {
		if (max <= Ql_Nhanvien[i]->Tinh_Tien_Luong()) {
			max = Ql_Nhanvien[i]->Tinh_Tien_Luong();
			indexM = i;
		}
	}

	for (int i = 1; i < Ql_Nhanvien.size(); i++) {
		if (min >= Ql_Nhanvien[i]->Tinh_Tien_Luong()) {
			min = Ql_Nhanvien[i]->Tinh_Tien_Luong();
			indexm = i;
		}
	}

	cout << "\n\n\t Nhan vien co luong cao nhat: ";
	Ql_Nhanvien[indexM]->output();
	cout << endl;

	cout << "\n\n\t Nhan vien co luong thap nhat: ";
	Ql_Nhanvien[indexm]->output();
	cout << endl;

}


QuanLiNhanVien::QuanLiNhanVien() {

}

QuanLiNhanVien::~QuanLiNhanVien() {

}

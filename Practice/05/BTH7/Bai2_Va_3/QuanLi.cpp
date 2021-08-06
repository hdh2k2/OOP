#include "QuanLi.h"
#include"Library.h"

QuanLi::QuanLi() {

}

QuanLi::~QuanLi() {
}


void QuanLi::input() {

	int luachon;
	while (true) {
		system("cls");
		cout << "\n\n\t ========= QUAN LY DOI TUONG ========= ";
		cout << "\n\n\t 1. Nhap thong tin sinh vien.";
		cout << "\n\n\t 2. Nhap thong tin cong nhan.";
		cout << "\n\n\t 3. Nhap thong tin ca si.";
		cout << "\n\n\t 4. Nhap thong tin bac si.";
		cout << "\n\n\t 5. Nhap thong tin hoc sinh.";
		cout << "\n\n\t 6. Nhap thong tin nghe sinh.";
		cout << "\n\n\t 0. Thoat";
		cout << "\n\n\t ============ END ============ ";


		cout << "\nNhap lua chon: ";
		cin >> luachon;
		cin.ignore();


		Nguoi* x; // Khai báo con trỏ lớp cha
		if (luachon == 1) {
			x = new SinhVien; // Da hinh

			cout << "\n\n\t NHAP THONG TIN \n";
			x->input();
			ds_nguoi.push_back(x); // Them cuoi
			So_Luong_Sinh_Vien++;
		}

		else if (luachon == 2) {
			x = new CongNhan;

			cout << "\n\n\t NHAP THONG TIN \n";
			x->input();
			ds_nguoi.push_back(x);
			So_Luong_Cong_Nhan++;
		}

		else if (luachon == 3) {
			x = new CaSi;

			cout << "\n\n\t NHAP THONG TIN  \n";
			x->input();
			ds_nguoi.push_back(x);
			So_Luong_Ca_Si++;
		}

		else if (luachon == 4) {
			x = new BacSi;

			cout << "\n\n\t NHAP THONG TIN  \n";
			x->input();
			ds_nguoi.push_back(x);
			So_Luong_Bac_Si++;
		}

		else if (luachon == 5) {
			x = new HocSinh;

			cout << "\n\n\t NHAP THONG TIN  \n";
			x->input();
			ds_nguoi.push_back(x);
			So_Luong_Hoc_Sinh++;
		}

		else if (luachon == 6) {
			x = new NgheSi;

			cout << "\n\n\t NHAP THONG TIN  \n";
			x->input();
			ds_nguoi.push_back(x);
			So_Luong_Nghe_Si++;
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

void QuanLi::output() {
	
	int temp = 0;
	for (int i = 0; i < ds_nguoi.size(); i++) {
		cout << "\n\n\t THONG TIN NGUOI THU " << i + 1;
		ds_nguoi[i]->output();
	}

	cout << "\nSo luong sinh vien co trong danh sach: " << So_Luong_Sinh_Vien;
	cout << "\nSo luong cong nhan co trong danh sach: " << So_Luong_Cong_Nhan;
	cout << "\nSo luong ca si co trong danh sach: " << So_Luong_Ca_Si;
	cout << "\nSo luong bac si co trong danh sach: " << So_Luong_Bac_Si;
	cout << "\nSo luong hoc sinh co trong danh sach: " << So_Luong_Hoc_Sinh;
	cout << "\nSo luong nghe si co trong danh sach: " << So_Luong_Nghe_Si;

}
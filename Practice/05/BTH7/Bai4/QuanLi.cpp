#include "QuanLi.h"

QuanLi::QuanLi() {

}

QuanLi::~QuanLi() {

}

void QuanLi::MENU() {

	int luachon;
	while (true) {
		system("cls");
		cout << "\n\n\t ========= QUAN LY SACH ========= ";
		cout << "\n\n\t 1. Nhap thong tin sach giao khoa.";
		cout << "\n\n\t 2. Nhap thong tin tap chi.";
		cout << "\n\n\t 3. Nhap thong tin tieu thuyet.";
		cout << "\n\n\t 4. Xuat thong tin tat ca cac sach hien hanh.";
		cout << "\n\n\t 0. Thoat";
		cout << "\n\n\t ============ END ============ ";


		cout << "\nNhap lua chon: ";
		cin >> luachon;
		cin.ignore();


		Sach* x; 
		if (luachon == 1) {
			x = new SachGiaoKhoa;

			cout << "\n\n\t NHAP THONG TIN \n";
			x->input();
			ds_sach.push_back(x); 
			_So_luong_SGK++;
		}

		else if (luachon == 2) {
			x = new TapChi;

			cout << "\n\n\t NHAP THONG TIN \n";
			x->input();
			ds_sach.push_back(x);
			_So_luong_Tapchi++;
		}

		else if (luachon == 3) {
			x = new TieuThuyet;

			cout << "\n\n\t NHAP THONG TIN  \n";
			x->input();
			ds_sach.push_back(x);
			_So_luong_Tieuthuyet++;
		}

		else if (luachon == 4) {
			cout << "\n\n\t THONG TIN SACH HIEN HANH \n";
			cout << "\n\n\tLoai sach: Sach Giao Khoa";
			for (int i = 0; i < ds_sach.size(); i++) {
				if (ds_sach[i]->getter_LoaiSach() == "Sach Giao Khoa") {
					ds_sach[i]->output();
					cout << endl;
				}
			}
			cout << "\n\n\tLoai sach: Tieu thuyet";
			for (int i = 0; i < ds_sach.size(); i++) {
				if (ds_sach[i]->getter_LoaiSach() == "Tieu thuyet") {
					ds_sach[i]->output();
					cout << endl;
				}
			}

			cout << "\n\n\tLoai sach: Tap chi";
			for (int i = 0; i < ds_sach.size(); i++) {
				if (ds_sach[i]->getter_LoaiSach() == "Tap chi") {
					ds_sach[i]->output();
					cout << endl;
				}
			}

			
			system("pause");
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
#include"QuanLi.h"

void QuanLi::Menu() {

	int luachon;
	while (true) {
		system("cls");
		cout << "\n\n\t ========= QUAN LI BAI TAP ========= ";
		cout << "\n\n\t 1. Giai bai tap 1. ";
		cout << "\n\n\t 2. Giai bai tap 2. ";
		cout << "\n\n\t 3. Giai bai tap 3 ket hop 4. ";
		cout << "\n\n\t 5. Giai bai tap 5. ";
		cout << "\n\n\t 6. Giai bai tap 6. ";
		cout << "\n\n\t 0. Thoat";
		cout << "\n\n\t ============== END =============== ";


		cout << "\nNhap lua chon: ";
		cin >> luachon;


		if (luachon == 1) {
			system("cls");
			cout << "\n\n\t ====== CHUONG TRINH GIAI BAI TAP 1 ====== \n";
			SoPhuc x;
			x.Run();
			system("pause");
		}
		
		else if (luachon == 2) {
			system("cls");
			cout << "\n\n\t ====== CHUONG TRINH GIAI BAI TAP 2 ====== \n";
			PHANSO x;
			x.Run();
			system("pause");
		}
		
		else if (luachon == 3) {
			system("cls");
			CTimeSpan x;
			x.Run();
			system("pause");
		}

		else if (luachon == 5) {
			system("cls");
			CDate x;
			x.Run();
			system("pause");
		}

		else if (luachon == 6) {
			system("cls");
			cin.ignore();
			CString x;
			x.Run();
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
/*

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
*/

QuanLi::QuanLi() {

}

QuanLi::~QuanLi() {

}

#include "QuanLiSoHong.h"


QuanLiSoHong::QuanLiSoHong() {

}

QuanLiSoHong::~QuanLiSoHong() {

}

void QuanLiSoHong::KhoiTaoDanhSachQuanLi() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	int luachon;

	system("cls");

	while (true) {

		system("cls");
		wcout << L"\n\n\t ========= DANH SÁCH QUẢN LÍ SỔ HỒNG ========= ";
		wcout << L"\n\n\t 1. Nhập thông tin sổ hồng đất nông nghiệp. ";
		wcout << L"\n\n\t 2. Nhập thông tin sổ hồng đất phi nông nghiệp.";
		wcout << L"\n\n\t 3. Xuất thông tin về sổ hồng đất nông nghiệp. ";
		wcout << L"\n\n\t 4. Xuất thông tin về sổ hồng đất phi nông nghiệp. ";
		wcout << L"\n\n\t 5. Xuất thông tin về tổng số tiền thuế mà người sử dụng đất cần phải đóng cho nhà nước. ";
		wcout << L"\n\n\t 6. Xuất thông tin về thửa đất có số tiền thuế mà người sử dụng cần phải đóng nhiều nhất. ";
		wcout << L"\n\n\t 7. Xuất thông tin về thửa đất nông nghiệp đã hết hạn sử dụng. ";
		wcout << L"\n\n\t 0. Thoát";
		wcout << L"\n\n\t ============== END ============== ";
		wcout << L"\n\n\t Nhập lựa chọn: ";
		wcin >> luachon;


		GiayTo* giayto;
		wstring s;
		if (luachon == 1) {
			wcin.ignore();
			giayto = new SoHong;
			s = L"SoHongDatNongNghiep";
			wcout << L"\n\n\t NHẬP THÔNG TIN  \n";
			giayto->NhapThongTinGiayTo(s);
			QuanLi.push_back(giayto);

		}

		else if (luachon == 2) {
			wcin.ignore();
			giayto = new SoHong;
			wcout << L"\n\n\t NHẬP THÔNG TIN  \n";
			s = L"SoHongDatPhiNongNghiep";
			giayto->NhapThongTinGiayTo(s);
			QuanLi.push_back(giayto);
		}

		else if (luachon == 3) {
			system("cls");
			wcout << L"\n\n\t THÔNG TIN SỔ HỒNG ĐẤT NÔNG NGHIỆP \n";
			s = L"SoHongDatNongNghiep";
			for (int i = 0; i < QuanLi.size(); i++)
				if (QuanLi[i]->GetterLoaiGiayTo() == L"SoHongDatNongNghiep")
					QuanLi[i]->XuatThongTinGiayTo(s);
			system("pause");
		}

		else if (luachon == 4) {
			system("cls");
			s = L"SoHongDatPhiNongNghiep";
			wcout << L"\n\n\t THÔNG TIN SỔ HỒNG ĐẤT NÔNG NGHIỆP \n";
			for (int i = 0; i < QuanLi.size(); i++)
				if (QuanLi[i]->GetterLoaiGiayTo() == L"SoHongDatPhiNongNghiep")
					QuanLi[i]->XuatThongTinGiayTo(s);
			system("pause");
		}

		else if (luachon == 5) {
			system("cls");
			double res = 0;
			wcout << L"\n\n\t Tổng số tiền thuế mà người sử dụng đất cần phải đóng cho nhà nước ";
			for (int i = 0; i < QuanLi.size(); i++)
				res += QuanLi[i]->TinhTienThue();
			wcout << res;
			system("pause");
		}


		else if (luachon == 6) {
			system("cls");
			wstring s;
			double max = QuanLi[0]->TinhTienThue();
			int index = 0;
			wcout << L"\n\n\t Tổng số tiền thuế mà người sử dụng đất cần phải đóng cho nhà nước: ";
			for (int i = 1; i < QuanLi.size(); i++) {
				if (max < QuanLi[i]->TinhTienThue()) {
					max = QuanLi[i]->TinhTienThue();
					s = QuanLi[i]->GetterLoaiGiayTo();
					index = i;
				}
			}

			QuanLi[index]->XuatThongTinGiayTo(s);
			system("pause");
		}

		else if (luachon == 7) {
			system("cls");
			wstring s;
			double max = QuanLi[0]->TinhTienThue();
			int index = 0;
			wcout << L"\n\n\t Thông tin về thửa đất nông nghiệp đã hết hạn sử dụng ";
			for (int i = 0; i < QuanLi.size(); i++) {
				if (((SoHong*)QuanLi[i])->gettter_ThoiHanQuyenSuDungDat() < 2021) {
					s = QuanLi[i]->GetterLoaiGiayTo();
					QuanLi[i]->XuatThongTinGiayTo(s);
				}
			}
		}
		else if (luachon == 0) {
			break;
		}

		else {
			wcout << "\n\n\t Lựa chọn không hợp lệ, xin kiểm tra lại !!!";
			system("pause");
		}
	}
}
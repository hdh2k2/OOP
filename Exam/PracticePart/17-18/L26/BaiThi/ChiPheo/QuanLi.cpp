#include "QuanLi.h"

QuanLi::QuanLi() {
	_soluong = 0;
}

QuanLi::~QuanLi() {
	for (int i = 0; i < _soluong; i++)
		delete _quanli[i];
}

void QuanLi::solve() {
	Chai* _chai; // Dùng 1 con trỏ thuộc lớp cơ sở để thực hiện việc liên kết động đến các lớp dẫn xuất ở dòng 23, 27,31 bên dưới

	// Câu 1
	cout << "\t Nhap so luong chai ma Chi Pheo da dap: ";
	cin >> this->_soluong;
	for (int i = 0; i < _soluong; i++) {
		cout << "\t Chon loai chai ma Chi Pheo da dap \n\t\t 1. Chai hinh tru tron\n\t\t 2. Chai hinh hop chu nhat\n\t\t 3. Chai hinh lap phuong\n\n\t\t Moi ban chon so: ";
		int _loai = 0;
		cin >> _loai;
		if (_loai == 1) {
			_chai = new ChaiHinhTruTron;
			_chai->nhapThongSoCuaChai();
		}
		if (_loai == 2) {
			_chai = new ChaiHinhHopChuNhat;
			_chai->nhapThongSoCuaChai();
		}
		if (_loai == 3) {
			_chai = new ChaiHinhLapPhuong;
			_chai->nhapThongSoCuaChai();
		}

		_quanli.push_back(_chai);
	}

	// Câu 2, giả sử các chai có nắp và nắp đúng bằng thân chai, hay nói cách khác
	// chai là 1 khối khép kín. Lúc này, diện tích mảnh vỡ tạo thành trên mặt đất bản chất là diện tích toàn phần của chai khi còn nguyên hiện trạng.

	cout << "\n\n\t Gia su chai vo vun, mang vo nam san sat nhau thi dien tich manh vo tao thanh tren mat dat la: ";
	double res = 0;
	for (int i = 0; i < _soluong; i++)
		res += _quanli[i]->getter_dien_tich_toan_phan();
	cout << res << " cm^2";
	cout << endl;
	// Câu 3: Tư duy 60% xuống đất, 25% bốc hơi, 3% dính vào cột, 2% dính lên người Phèo
	// Nên lương nước trên mặt đât có thể còn 10%;

	double _luongnuoc = 0;
	for (int i = 0; i < _soluong; i++)
		_luongnuoc += 0.1 * _quanli[i]->getter_luong_nuoc();

	cout << "\t Luong nuoc con lai tren mat dat: " << _luongnuoc <<" lit";
}
#include "QuanLi.h"

#define deu 1000

QuanLi::QuanLi() { // Khởi tạo giá trị ban đầu cho bộ dữ liệu
	this->_soluongngoisaothanki = 0;
	this->_soluongngoisaotientri = 0;
	this->_dokhoVuAn = new int[deu];
	this->_soluongvuan = new int[deu];

	this->_conan.khoiTaoLuongMauVaSucManh();

	NhanVat* _nhanvat;

	_nhanvat = new Gin;
	_nhanvat->khoiTaoLuongMauVaSucManh();
	_quanlinhanvat.push_back(_nhanvat);

	_nhanvat = new Vodka;
	_nhanvat->khoiTaoLuongMauVaSucManh();
	_quanlinhanvat.push_back(_nhanvat);

	_nhanvat = new Korn;
	_nhanvat->khoiTaoLuongMauVaSucManh();
	_quanlinhanvat.push_back(_nhanvat);

	_nhanvat = new ThanhVienBiAn;
	_nhanvat->khoiTaoLuongMauVaSucManh();
	_quanlinhanvat.push_back(_nhanvat);

	_nhanvat = new NguoiMatQua;
	_nhanvat->khoiTaoLuongMauVaSucManh();
	_quanlinhanvat.push_back(_nhanvat);
}

QuanLi::~QuanLi() {
	delete[] this->_dokhoVuAn;
	delete[] this->_soluongvuan;
	for (int i = 0; i < _quanlinhanvat.size(); i++)
		delete _quanlinhanvat[i];

	for (int i = 0; i < _quanlivuan.size(); i++)
		delete _quanlivuan[i];

	_quanlinhanvat.clear();
	_quanlivuan.clear();

	vector<NhanVat*>().swap(_quanlinhanvat);
	vector<VuAn*>().swap(_quanlivuan);
}

void QuanLi::run() {
	int _tongsovuan = 0;
	VuAn* _vuan;

	int _soluongmanchoi;
	cin >> _soluongmanchoi;

	int _vitri_1, _vitri_2, _vitri_3, _vitri_4;
	cin >> _vitri_1 >> _vitri_2 >> _vitri_3 >> _vitri_4;
	
	// Khởi tạo vị trí xuất hiện ban đầu của các nhân vật 

	_quanlinhanvat[0]->setterChiSoXuatHien(_vitri_1);
	_quanlinhanvat[1]->setterChiSoXuatHien(_vitri_2);
	_quanlinhanvat[2]->setterChiSoXuatHien(_vitri_3);
	_quanlinhanvat[3]->setterChiSoXuatHien(_vitri_4);

	for (int i = 0; i < _soluongmanchoi; i++) {
		cin >> this->_soluongvuan[i];
		_tongsovuan += _soluongvuan[i];

		for (int j = 0; j < _soluongvuan[i]; j++) {
			_vuan = new VuAn;
			_vuan->khoiTaoDoKho();
			this->_quanlivuan.push_back(_vuan);
			this->_dokhoVuAn[j] = _vuan->getterDoKho();
	
		}
	}

	int _luongmau = this->_conan.getterLuongMau(); // Đặc tả lượng máu khi Conan chạm tráng với các nhân vật khác
	int _sucmanh = this->_conan.getterSucManh(); // Đặc tả lượng sức mạnh khi Conan chạm tráng với các nhân vật khác

	int _soluongvuan_DaVuotQua = 0;
	int step = 1;
	int _vitri_NhanVat = 0;

	for (int i = 0; i < _soluongmanchoi; i++) {
		for (int j = 0; j < _soluongvuan[i];j++) {
			if (_sucmanh >= _dokhoVuAn[i]) {
				_sucmanh += _dokhoVuAn[i];
				_soluongvuan_DaVuotQua++;
			}
				
			else if (_sucmanh < _dokhoVuAn[i]) {
				if (_soluongngoisaotientri > 0) {
					_soluongngoisaotientri--;
					// continue;
				}

				else
					_luongmau -= _dokhoVuAn[i] / 2;
			}

			else if (_luongmau <= 0 ){
				if (_soluongngoisaothanki > 0) {
					_soluongngoisaothanki--;
					_luongmau = this->_conan.getterLuongMau();
					_sucmanh = this->_conan.getterSucManh();
				}

				else
					break;  // Hết máu
			}
			
		}

		// Tạo logic cho các màn chơi

		if (step == _quanlinhanvat[0]->getterChiSoXuatHien()) {
			if (_sucmanh >= _quanlinhanvat[0]->getterSucManh()) {
				_soluongngoisaothanki++;
			}

			else if (_sucmanh <= _quanlinhanvat[0]->getterSucManh()) {
				_luongmau -= _quanlinhanvat[0]->getterSucManh();

				if (_luongmau <= 0) {
					if (_soluongngoisaothanki > 0) {
						_soluongngoisaothanki--;
						_luongmau = this->_conan.getterLuongMau();
						_sucmanh = this->_conan.getterSucManh();
					}

					else
						break; // Hết máu
				}
			}
		}

		if (step == _quanlinhanvat[1]->getterChiSoXuatHien()) {
			if (_sucmanh >= _quanlinhanvat[1]->getterSucManh()) 
				_luongmau += _quanlinhanvat[1]->getterSucManh();
				
			else if (_sucmanh <= _quanlinhanvat[1]->getterSucManh()) {
				_luongmau -= _quanlinhanvat[1]->getterSucManh();

				if (_luongmau <= 0) {
					if (_soluongngoisaothanki > 0) {
						_soluongngoisaothanki--;
						_luongmau = this->_conan.getterLuongMau();
						_sucmanh = this->_conan.getterSucManh();
					}

					else 
						break; // Hết máu
				}
			}
		}

		if (step == _quanlinhanvat[2]->getterChiSoXuatHien()) {
			if (_sucmanh >= _quanlinhanvat[2]->getterSucManh()) {
				_soluongngoisaotientri++;
			}

			else if (_sucmanh <= _quanlinhanvat[2]->getterSucManh()) {
				_luongmau -= _quanlinhanvat[2]->getterSucManh();

				if (_luongmau <= 0) {
					if (_soluongngoisaothanki > 0) {
						_soluongngoisaothanki--;
						_luongmau = this->_conan.getterLuongMau();
						_sucmanh = this->_conan.getterSucManh();
					}

					else 
						break; // Hết máu
				}
			}

		}

		if (step == _quanlinhanvat[3]->getterChiSoXuatHien()) {
			if (_soluongvuan_DaVuotQua >= 3) {
				_sucmanh += 500;
			}

			else {
				_soluongngoisaothanki = 0;
				_soluongngoisaotientri = 0;
			}

		}

		step++;
	}
	
	// _quanlinhanvat[4] là bot cuối, hay nói cách khác chính là tên người mặt quạ. 

	cout << ((_sucmanh + _luongmau) >= _quanlinhanvat[4]->getterLuongMau() ? "CHIEN THANG" : "THAT BAI"); 

	
}

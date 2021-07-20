#pragma once
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include"GiayTo.h"
#include"DatNongNghiep.h"
#include"DatPhiNongNghiep.h"

using namespace std;

class SoHong:public GiayTo, public DatDai{
private:
	wstring SoGiayChungNhan;
	Nguoi NguoiSoHuuDat;
	int SoThuaDat;
	int SoToBanDo;
	wstring DiaChiThuaDat;
	wstring NgayCap;
	double DonGiaThuePhaiDong;
	
	double DienTichDat;
	int ThoiHanQuyenSuDungDat;
	int LoaiSoHong;
public:
	wstring GetterLoaiGiayTo();
	void SetterLoaiSoHong(wstring loaisohong);
	SoHong();
	~SoHong();
	void NhapThongTinGiayTo(wstring loaigiayto);
	void XuatThongTinGiayTo(wstring loaigiayto);
	void NhapThongTinDat();
	void XuatThongTinDat();
	double GetterDienTichDat();
	double TinhTienThue();
	int gettter_ThoiHanQuyenSuDungDat();
	
};


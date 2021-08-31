#pragma once
#include "VuAn.h"
#include "NhanVat.h"
#include "Gin.h"

class CoNan : public NhanVat{
private:
	int mauBanDau, sucManhBanDau; // giữ để dùng ngôi sao thần kỳ
	int soVuAnDaPha;
	// vatPham[0] là ngôi sao thần kì
	// vatPham[1] là ngôi sao tiên tri
	int* vatPham;

public:
	CoNan();
	~CoNan();
	void khoiTaoLuongMauVaSucManh();

};
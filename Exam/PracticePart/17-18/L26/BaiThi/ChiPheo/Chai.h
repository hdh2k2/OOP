#pragma once
class Chai{
protected:
	double _luongnuoc;
public:
	Chai();
	~Chai();
	virtual double getter_dien_tich_toan_phan() = 0; // Đa hình + tính trừu tượng
	virtual double getter_dien_tich_xung_quanh() = 0; // Đa hình + tính trừu tượng
	virtual void nhapThongSoCuaChai(); // Tính đa hình theo thời điểm biên dịch, ngoài ra còn tránh việc phân giải tĩnh của hàm
	double getter_luong_nuoc(); // Truy cập thuộc tính _luongnuoc theo tính chất đóng gói
};


/*
	6.	Hãy định nghĩa lớp CString biểu diễn khái niệm chuỗi ký tự với các phương thức thiết lập,
		huỷ bỏ, các hàm thành phần và các phép toán cần thiết (+, gán, so sánh hai chuỗi).
*/



#include<string>
#include<iostream>
#include"CString.h"

using namespace std;

int main() {
	CString chuoi_1;
	cout << "Moi ban nhap chuoi thu nhat: ";
	cin >> chuoi_1;
	cout << "Moi ban nhap chuoi thu hai: ";
	CString chuoi_2;
	cin >> chuoi_2;
	CString chuoi_3;
	(chuoi_3 = chuoi_1);
	cout << "Chuoi tao thanh sau khi gan chuoi 1 cho chuoi 3: " << chuoi_3;

	cout << "\nChuoi 1 nho hon chuoi 2: " << (chuoi_1 < chuoi_2);
	cout << "\nChuoi 1 nho hon hoac bang chuoi 2: " << (chuoi_1 <= chuoi_2);
	cout << "\nChuoi 1 bang chuoi 2: " << (chuoi_1 == chuoi_2);
	cout << "\nChuoi 1 lon hon chuoi 2: " << (chuoi_1 > chuoi_2);
	cout << "\nChuoi 1 lon hon hoac bang chuoi 2: " << (chuoi_1 >= chuoi_2);
	cout << "\nChuoi 1 khac chuoi 2: " << (chuoi_1 != chuoi_2);

	cout << "\nChuoi duoc tao thanh sau khi cong chuoi 1 voi chuoi 2: " << chuoi_1 + chuoi_2;

	
}
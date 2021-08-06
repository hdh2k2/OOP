/*

	5.	Định nghĩa lớp CDate biểu diễn khái niệm ngày, tháng, năm với các phép toán +, - 
		(cộng, trừ thêm một số ngày), ++, -- (thêm bớt một ngày), - (khoảng cách giữa hai CDate tính bằng ngày). 
		Phép toán <<, >> để xuất, nhập dữ liệu loại CDate. 

*/

#include"CDate.h"
#include<iostream>
#include<math.h>

using namespace std;

int main() {
	CDate x;
	CDate y;

	cout << "Moi ban nhap thoi gian thu nhat: ";
	cin >> x;
	cout << "Moi ban nhap thoi gian thu hai: ";
	cin >> y;
	cout << x << endl;
	
	int temp;
	cout << "Moi ban nhap so ngay can them: ";
	cin >> temp;
	x + temp;
	cout << "\n\nThoi gian thu nhat sau khi them "<< temp <<" ngay: " << x;
	++x;
	cout << "\nThoi gian thu nhat sau khi them 1 ngay: " <<x;
	--y;
	cout << "\nThoi gian thu hai sau khi bot 1 ngay: " << y;

	cout << "\nThoi gian thu hai sau khi bot "<< temp << " ngay: " << y-temp;
	cout << "\n\nKhoang cach giua hai ngay " << x << " va " << y << " (tinh bang don vi ngay): " << abs(x - y);
	
}
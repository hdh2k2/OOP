
/*
	1.	Làm lại bài số phức với một phương thức thiết lập duy nhất cho phép quan điểm 
		một số thực như một số phức đặc biệt (phần ảo bằng 0). Định nghĩa các phép toán 
		+, -, *, /, = =, !=, >, >=, <, <= trên số phức. Định nghĩa phép toán << và >> để xuất 
		và nhập dữ liệu vào số phức.

	2.	Làm lại bài phân số với các phương thức thiết lập cho phép sử dụng một số nguyên 
		như một phân số đặc biệt (mẫu số bằng 1). Định nghĩa các phép toán +, -, *, /, = =, 
		!= , >, >=, <, <= trên phân số. Định nghĩa phép toán << và >> để xuất và nhập dữ liệu vào phân số.
		### Bài 2 này em copy code của anh và có thêm chỉnh sửa mở rộng theo yêu cầu của anh là tính tổng, 
		hiệu, tích, thương đối với 1 số thực.

	3.	Định nghĩa lớp dữ liệu CTimeSpan để biểu diễn khái niệm khoảng thời gian, các hàm thành
		phần và các phép toán cần thiết (+, -, ==, !=, >, >=, <, <=). 

	4.	Định nghĩa lớp CTime biểu diễn khái niệm thời điểm có các thành phần giờ phút giây. 
		Định nghĩa các phép toán +, - (cộng, trừ thêm một số nguyên giây), - (phép trừ hai 
		CTime để được một CTimSpan), ++, -- (thêm bớt một giây). Phép toán <<, >> để xuất, nhập dữ liệu loại CTime. 

	5.	Định nghĩa lớp CDate biểu diễn khái niệm ngày, tháng, năm với các phép toán +, - 
		(cộng, trừ thêm một số ngày), ++, -- (thêm bớt một ngày), - (khoảng cách giữa hai CDate tính bằng ngày). 
		Phép toán <<, >> để xuất, nhập dữ liệu loại CDate. 

	6.	Hãy định nghĩa lớp CString biểu diễn khái niệm chuỗi ký tự với các phương thức thiết lập, 
		huỷ bỏ, các hàm thành phần và các phép toán cần thiết (+, gán, so sánh hai chuỗi).
		
*/

#include<iostream>
#include"QuanLi.h"
using namespace std;
int main() {
	QuanLi* x = new QuanLi;
	x->Menu();
	delete x;
}
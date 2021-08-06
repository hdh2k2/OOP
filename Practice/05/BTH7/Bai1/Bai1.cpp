/*	

		1.	Giả sử Công ty có hai loại nhân viên: Nhân viên văn phòng và Nhân viên sản xuất. 
			Viết chương trình quản lý và tính lương cho từng nhân viên của công ty:
			Mỗi nhân viên cần quản lý các thông tin sau: Họ tên, ngày sinh, lương
			Công ty cần tính lương cho nhân viên như sau:
					-	Đối với nhân viên sản xuất: 
								Lương = lương căn bản + số sản phẩm * 5.000
					-	Đối nhân viên văn phòng: 
								lương = số ngày làm việc * 100.000

	### Đoạn này em copy bên bài lý thuyết :
			Viết chương trình thực hiện các yêu cầu sau:
					-	Nhập vào N nhân viên, N do người dùng nhập vào.
					-	Tính lương cho các nhân viên và xuất ra thông tin từng nhân viên và loại của họ.
					-	Xuất ra thông tin nhân viên có lương cao nhất và thấp nhất.


*/

#include<iostream>
#include"QuanLiNhanVien.h"
using namespace std;

int main() {
	QuanLiNhanVien* a = new QuanLiNhanVien;
	a->input();
	a->output();
	system("pause");
	delete a;
}
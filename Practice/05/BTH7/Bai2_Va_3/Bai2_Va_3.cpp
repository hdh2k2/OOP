/*
	
		2.	Xây dựng các loại đối tượng sinh viên, học sinh, công nhân, nghệ sĩ, ca sĩ. 
			Viết chương trình cho phép nhập vào một trong các loại đối tượng kể trên. In thông tin đối tượng đó.

		3.	Tạo một danh sách các đối tượng, mỗi đối tượng thuộc một trong các loại: sinh viên, 
			học sinh, công nhân, nghệ sĩ, ca sĩ. Viết chương trình cho phép nhập danh sách kể trên, 
			in thông tin của từng đối tượng trong danh sách.


		### Ràng buộc về nơi làm việc:
				Sinh viên: Trường hoc ( input: Truong hoc )
				Học sinh: Trường hoc ( input: Truong hoc )
				Bác sĩ: Bệnh viện ( input: Benh vien )
				Nghệ sĩ: Sân Khấu ( input: San khau )
				Ca sĩ: Sân Khấu ( input: San khau )
				Công nhân: Nhà máy ( input: Nha may )

*/

#include"Library.h"

int main() {
	QuanLi* x = new QuanLi;
	x->input();
	system("cls");
	x->output();
	delete x;
	system("pause");

}
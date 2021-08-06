/*

	4.	Xây dựng các loại đối tượng sách, sách giáo khoa, tiểu thuyết, tạp chí. 
		Viết chương trình cho phép quản lý một danh sách các loại đối tượng kể trên.

*/


#include"QuanLi.h"

int main() {
	QuanLi* x = new QuanLi;
	x->MENU();
	delete x;
}
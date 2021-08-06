/*

	10.	Hãy định nghĩa lớp MYINT có hoạt động như kiểu dữ liệu 'int' nhưng 
		phép cộng hai MYINT hoạt động như phép trừ hai int và ngược lại.

*/

#include"MYINT.h"

int main() {
	MYINT x;
	MYINT y;
	cout << "Nhap so nguyen thu nhat: ";
	cin >> x;
	cout << "Nhap so nguyen thu nhat: ";
	cin >> y;

	cout << "Tong hai so nguyen: " << (x + y);
	cout << "\nHieu hai so nguyen: " << (x - y);
	cout << "\nTich hai so nguyen: " << (x * y);
	cout << "\nThuong hai so nguyen: " << (x / y);
	cout << "\n\n\nSo nguyen thu nhat bang so nguyen thu hai: " << (x == y);
	cout << "\nSo nguyen thu nhat khac so nguyen thu hai: " << (x != y);
	cout << "\nSo nguyen thu nhat lon hon so nguyen thu hai: " << (x > y);
	cout << "\nSo nguyen thu nhat ne hon so nguyen thu hai: " << (x < y);
	cout << "\nSo nguyen thu nhat lon hon hoac bang so nguyen thu hai: " << (x >= y);
	cout << "\nSo nguyen thu nhat be hon hoac bang so nguyen thu hai: " << (x <= y);

}
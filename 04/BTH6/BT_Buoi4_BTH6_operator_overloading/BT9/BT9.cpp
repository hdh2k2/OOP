/*

	9.	Hãy định nghĩa lớp INTEGER có thể hoạt động như để mỗi INTEGER giống 
		hệt như một 'int' của ngôn ngữ C/C++.

*/

#include"INTERGER.h"

int main() {
	INTERGER x;
	INTERGER y;
	cout << "Nhap so nguyen thu nhat: ";
	cin >> x;
	cout << "Nhap so nguyen thu nhat: ";
	cin >> y;

	cout << "Tong hai so nguyen: " << ( x + y );
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
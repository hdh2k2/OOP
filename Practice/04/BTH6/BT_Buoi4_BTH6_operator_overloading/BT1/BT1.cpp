/*
	1.	Làm lại bài số phức với một phương thức thiết lập duy nhất cho phép quan điểm một số thực 
		như một số phức đặc biệt (phần ảo bằng 0). Định nghĩa các phép toán +, -, *, /, = =, !=, >, 
		>=, <, <= trên số phức. Định nghĩa phép toán << và >> để xuất và nhập dữ liệu vào số phức.

	// Bài này em biểu diễn số phức dưới dạng tọa độ cực
*/


#include"SoPhuc.h"
#include<iostream>

using namespace std;

int main() {
	SoPhuc x;
	SoPhuc y;
	cout << "Moi ban nhap phan thuc va phan ao cua so phuc thu nhat: ";
	cin >> x;
	cout << "Moi ban nhap phan thuc va phan ao cua so phuc thu hai: ";
	cin >> y;

	

	cout << "Tong hai so phuc: ";
	cout << x + y;
	cout << "\nHieu hai so phuc: ";
	cout << x - y;
	cout << "\nTich hai so phuc: ";
	cout << x * y;
	cout << "\nThuong hai so phuc: ";
	cout << x / y;
	if (x == y)
		cout << "\n\nSo phuc thu nhat bang so phuc thu hai. ";
	else cout << "\n\nSo phuc thu nhat khac so phuc thu hai. ";

	cout << endl << endl;

	cout << "Moi ban nhap so thuc khi muon cong so phuc thu nhat voi so thuc: ";
	int t;
	cin >> t;

	cout << "Tong giua so phuc 1 va so thuc ma ban da nhap: ";
	cout << x + t;
	cout << endl;
	cout << "Hieu giua so phuc 1 va so thuc ma ban da nhap: ";
	cout << x - t;
	cout << endl;
	cout << "Tich giua so phuc 1 va so thuc ma ban da nhap: ";
	cout << x * t;
	cout << endl;
	cout << "Thuong giua so phuc 1 va so thuc ma ban da nhap: ";
	cout << x / t;
	cout << endl;

	system("pause");

}
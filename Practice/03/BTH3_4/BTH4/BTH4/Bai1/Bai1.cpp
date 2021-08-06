#include"Time.h"
#include<iostream>

using namespace std;

int main() {
	Time a(0, 0, 0);
	
	//Time c(0, 0, 0);
	a.getInfo();
	cout << "Thoi gian cua ban da nhap: ";
	a=a.FormatTime();
	a.Printf();

	int x;
	cout << "\nNhap so giay ma ban muon cong: ";
	cin >> x;
	cout << endl;

	Time c= a.CongThoiGian(x);

	cout << "Thoi gian sau khi cong: ";
	c = c.FormatTime();
	c.Printf();
	cout << endl;

	cout << "Nhap thoi gian ma ban muon tru: ";
	int k;
	cin >> k;
	Time c1 = a.TruThoiGian(k);
	c1 = c1.FormatTime();
	c1.Printf();


}
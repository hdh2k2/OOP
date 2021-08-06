#include<iostream>
#include<string>
#define HHD 10000

using namespace std;

struct DMY {
	int Date, Month, Year;

	void IN() {
		cin >> Date >> Month >> Year;
	}

	void OUT() {
		cout << Date << "/" << Month << "/" << Year;
	}
};

class Candidate {
private:
	string maThiSinh;
	string tenThiSinh;
	//int ngaysinh, thangsinh, namsinh;
	double diemToan, diemVan, diemAnh;
	DMY Birth;

public:
	void getInfo();
	void Output();
	bool KiemTraDiem;
	bool TestKiemTraDiem();
	void getID();
	void getName();


};

bool Candidate::TestKiemTraDiem() {
	return KiemTraDiem;
}

void Candidate::getID() {
	getline(cin, maThiSinh);
}

void Candidate::getName() {
	getline(cin, tenThiSinh);
}

void Candidate::getInfo() {
	cout << "Moi ban nhap ma thi sinh: ";
	getID();
	//cin.ignore();
	cout << "Moi ban nhap ten thi sinh: ";
	getName();

	cout << "Moi ban nhap diem  toan: ";
	cin >> this->diemToan;
	cout << "Moi ban nhap diem  van: ";
	cin >> this->diemVan;
	cout << "Moi ban nhap diem  anh: ";
	cin >> this->diemAnh;

	KiemTraDiem = (diemToan + diemAnh + diemVan) > 15 ? true : false;
	cout << "Moi ban nhap lan luot ngay, thang, nam sinh: ";
	Birth.IN();
	cout << endl;
	cin.ignore();
}

void Candidate::Output() {
	cout << "Ma thi sinh: " << maThiSinh << endl;
	cout << "Ten thi sinh tuong ung: " << tenThiSinh << endl;
	cout << "Ngay thang nam sinh: ";
	Birth.OUT();
	cout << endl;

}



int main() {
	Candidate* arrCandidate = new Candidate[10];
	cout << "Moi ban nhap so luong sinh vien: ";
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "Moi ban nhap thong tin thi sinh thu " << i + 1 << ": \n";
		arrCandidate[i].getInfo();
		//s[i].Output();
	}

	for (int i = 0; i < n; i++) {
		if (arrCandidate[i].TestKiemTraDiem()) {
			cout << "Danh sach cac thi sinh co tong diem lon hon 15: \n\n";
			arrCandidate[i].Output();
		}
	}
}
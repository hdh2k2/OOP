#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#include<iomanip>
#include <stdlib.h>

using namespace std;


class ChungCu {
protected:
	string ten;
	int soTang;
	double dienTich;
	string tenQL;
	string soHuu;

public:
	ChungCu();
	~ChungCu();
	virtual void guiThongBao() = 0;
	virtual void input();
	virtual double laygiatien6phong() = 0;

};

ChungCu::ChungCu() {

}

ChungCu::~ChungCu() {

}

void ChungCu::input() {
	cin.ignore();
	cout << "\t Moi ban nhap ten chung cu: ";
	getline(cin, ten);
	cout << "\t Moi ban nhap so tang cua chung cu: ";
	cin >> soTang;
	do {
		cout << "\t Moi ban nhap dien tich chung cu: ";
		cin >> dienTich;
		if (dienTich < 0)
			cout << "\t Dien tich khong the am, moi ban nhap lai. \n";
	} while (dienTich < 0);

	cout << "\t Moi ban nhap ten nguoi quan li: ";
	cin.ignore();
	getline(cin, tenQL);

}

class CCVinHome :public ChungCu {
private:
public:
	CCVinHome();
	~CCVinHome();
	void guiThongBao();
	double laygiatien6phong();

};

double CCVinHome::laygiatien6phong() {
	double res = 0;
	srand(time(NULL));
	if (dienTich / 6 > 600)
		res = (10 + rand() % (15 + 1 - 10));
	else if (dienTich / 6 <= 600)
		res = (6 + rand() % (10 + 1 - 6));

	return res * soTang * 6;
}


CCVinHome::~CCVinHome() {

}

void CCVinHome::guiThongBao() {
	cout << tenQL << " - " << ten << " - " << soHuu;
}

CCVinHome::CCVinHome() {
	this->soHuu = "Vinhomes";
}


class CCBcon :public ChungCu {
private:
public:
	CCBcon();
	~CCBcon();
	void guiThongBao();
	double laygiatien6phong();

};

double CCBcon::laygiatien6phong() {
	double res = 0;
	srand(time(NULL));
	if (dienTich > 600)
		res = (8 + rand() % (12 + 1 - 8));
	else if (dienTich <= 600)
		res = (5 + rand() % (8 + 1 - 5));

	return res * soTang * 6;
}



CCBcon::~CCBcon() {

}

CCBcon::CCBcon() {
	this->soHuu = "Bcons";
}

void CCBcon::guiThongBao() {
	cout << "\t " << tenQL << " - " << ten << " - " << soHuu;
}


class Quanlichungcu {
private:
	vector<ChungCu*>quanlichungcu;
public:
	void quanli();
	double tongtienthuephong_trongmotthang();


};



void Quanlichungcu::quanli() {
	int luachon;

	system("cls");

	while (true) {

		system("cls");
		cout << "\n\n\t ========= QUAN LI CHUNG CU HHD ========= ";
		cout << "\n\n\t 1. Nhap thong tin chung cu Vinhomes. ";
		cout << "\n\n\t 2. Nhap thong tin chung cu Bcons.";
		cout << "\n\n\t 3. Xuat thong bao ve tinh trang chung cu. ";
		cout << "\n\n\t 4. Xuat tong gia tien thue phong. ";
		cout << "\n\n\t 0. Thoat";
		cout << "\n\n\t ============== END ============== ";
		cout << "\n\n\t Nhap lua chon: ";
		cin >> luachon;


		ChungCu* chungcu;
		if (luachon == 1) {
			chungcu = new CCVinHome;

			cout << "\n\n\t NHAP THONG TIN  \n";
			chungcu->input();
			quanlichungcu.push_back(chungcu);

		}

		else if (luachon == 2) {
			chungcu = new CCBcon;

			cout << "\n\n\t NHAP THONG TIN \n";
			chungcu->input();
			quanlichungcu.push_back(chungcu);


		}

		else if (luachon == 3) {
			system("cls");
			cout << "\n\n\t Danh sach tieu de ma ban quan li nhan duoc: \n\n\t ";
			for (int i = 0; i < quanlichungcu.size(); i++) {
				quanlichungcu[i]->guiThongBao();
				cout << endl;
			}
			system("pause");

		}

		else if (luachon == 4) {
			system("cls");
			cout << "\n\n\n\tTong gia tien thue phong trong 1 thang ma Ban quan li chung cu thu ve: " << tongtienthuephong_trongmotthang() << " trieu dong.";
			system("pause");

		}



		else if (luachon == 0) {
			break;
		}

		else {
			cout << "\n\n\t Lua chon khong hop le. Xin kiem tra lai!!!";
			system("pause");
		}
	}
}

double Quanlichungcu::tongtienthuephong_trongmotthang() {
	double res = 0;
	for (int i = 0; i < quanlichungcu.size(); i++) {
		res += quanlichungcu[i]->laygiatien6phong();
	}

	return res;
}





int main() {
	Quanlichungcu x;
	x.quanli();
}
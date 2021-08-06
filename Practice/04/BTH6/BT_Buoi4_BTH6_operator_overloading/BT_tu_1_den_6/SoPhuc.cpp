#include"SoPhuc.h"

SoPhuc::SoPhuc() {
    PhanThuc = 0;
    PhanAo = 0;
}

SoPhuc::SoPhuc(double PhanThuc) {
    this->PhanThuc = PhanThuc;
    this->PhanAo = 0;
}

SoPhuc::SoPhuc(double PhanThuc, double PhanAo) {
    this->PhanThuc = PhanThuc;
    this->PhanAo = PhanAo;
}

SoPhuc::~SoPhuc() {

}




SoPhuc SoPhuc::operator+(const SoPhuc& SP) {
    SoPhuc sophuc;
    sophuc.PhanThuc = this->PhanThuc + SP.PhanThuc;
    sophuc.PhanAo = this->PhanAo + SP.PhanAo;
    return sophuc;
}


SoPhuc SoPhuc::operator+(const double x) {
    return SoPhuc(this->PhanThuc + x);
}

SoPhuc SoPhuc::operator-(const SoPhuc& SP) {
    SoPhuc sophuc;
    sophuc.PhanThuc = this->PhanThuc - SP.PhanThuc;
    sophuc.PhanAo = this->PhanAo - SP.PhanAo;
    return sophuc;
}

SoPhuc SoPhuc::operator-(const double x) {
    return SoPhuc(this->PhanThuc - x);
}

SoPhuc SoPhuc::operator*(const SoPhuc& SP) {
    SoPhuc sophuc;
    sophuc.PhanThuc = this->PhanThuc * SP.PhanThuc - this->PhanAo * SP.PhanAo;
    sophuc.PhanAo = this->PhanThuc * SP.PhanAo + this->PhanAo * SP.PhanThuc;
    return sophuc;

}

SoPhuc SoPhuc::operator*(const double x) {
    return SoPhuc(this->PhanThuc * x, this->PhanAo * x);
}

SoPhuc SoPhuc:: operator/(const SoPhuc& SP) {
    double temp = pow(SP.PhanThuc, 2) + pow(SP.PhanAo, 2);
    double recyl = 1.0 / temp;
    SoPhuc res;
    res.PhanThuc = recyl * (this->PhanThuc * SP.PhanThuc + this->PhanAo * SP.PhanAo);
    res.PhanAo = recyl * (-this->PhanThuc * SP.PhanAo + this->PhanAo * SP.PhanThuc);
    return res;
}

SoPhuc SoPhuc::operator /(const double x) {
    return SoPhuc(this->PhanThuc / x, this->PhanAo / x);

}

bool SoPhuc::operator==(const SoPhuc& SP) { // Neu tra ve false thi hai so phuc khac nhau
    return ((this->PhanThuc == SP.PhanThuc) && (this->PhanAo == SP.PhanAo));
}

void SoPhuc::Run() {
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
}
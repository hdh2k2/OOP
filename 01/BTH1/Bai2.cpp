#include<iostream>
#include<math.h>
#define HHD 1000

using namespace std;

struct PhanSo
{
	int iTuSo;
	int iMauSo;
};

void Nhap(PhanSo&);
void Xuat(PhanSo, PhanSo);
void RutGon(PhanSo&);
void XuLyXuat(PhanSo&);
int SoSanh(PhanSo, PhanSo);

int main()
{
	PhanSo A;
	PhanSo B;
	cout << "Nhap tu va mau cua phan so thu nhat: ";
	Nhap(A);
	cout << endl;

	cout << "Nhap tu va mau cua phan so thu hai: ";
	Nhap(B);

	Xuat(A, B);
	return 0;
}

void Nhap(PhanSo& K)
{
	do
	{
		cin >> K.iTuSo;
		cin >> K.iMauSo;
		if (K.iMauSo == 0)
			cout << "Mau cua phan so bat buoc phai khac 0. \nMoi ban nhap lai: ";
	} while (K.iMauSo == 0);
}

void Xuat(PhanSo A, PhanSo B)
{
	if (SoSanh(A, B) == 1)
	{
		cout << "Phan so lon hon la phan so thu nhat:";
		RutGon(A);
		XuLyXuat(A);
	}
	else if (SoSanh(A, B) == 0)
	{
		cout << "Phan so lon hon la phan so thu hai:";
		RutGon(B);
		XuLyXuat(B);
	}
	else
		cout << "Hai phan so ma ban da nhap bang nhau.";
}

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	return GCD(b, a % b);
}

void RutGon(PhanSo& K)
{
	int w = GCD(K.iTuSo, K.iMauSo);
	K.iTuSo /= w;
	K.iMauSo /= w;

}

int SoSanh(PhanSo A, PhanSo B)
{
	if (A.iTuSo * B.iMauSo > A.iMauSo * B.iTuSo)
		return 1;
	else if (A.iTuSo * B.iMauSo < A.iMauSo * B.iTuSo)
		return 0;
	else
		return -1;
}

void XuLyXuat(PhanSo& K)
{
	int w = K.iTuSo * K.iMauSo;
	if (w < 0)
	{
		K.iMauSo = abs(K.iMauSo);
		K.iTuSo = w / K.iMauSo;
	}
	if (K.iTuSo != 0)
		if (K.iTuSo % K.iMauSo == 0)
			cout << K.iTuSo / K.iMauSo;
		else
			cout << K.iTuSo << "/" << K.iMauSo;
	else
		cout << "0";
}
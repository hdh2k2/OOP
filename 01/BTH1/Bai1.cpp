#include<iostream>
#include<math.h>
#define HHD 10000

using namespace std;

struct PhanSo
{
	int iTuSo;
	int iMauSo;
};

void Nhap(PhanSo& K);
void Xuat(PhanSo K);
void RutGon(PhanSo& K);
void XuLyXuat(PhanSo& K);

int main()
{
	PhanSo A;

	cout << "Nhap tu va mau cua phan so: ";
	Nhap(A);

	cout << "Phan so da nhap: ";
	Xuat(A);
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

void Xuat(PhanSo K)
{
	RutGon(K);
	XuLyXuat(K);
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



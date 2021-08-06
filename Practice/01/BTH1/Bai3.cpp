#include<iostream>
#include<math.h>
#define HHD 1

using namespace std;

struct PhanSo
{
	int iTuSo;
	int iMauSo;
};

void Nhap(PhanSo& K);
void Xuat(PhanSo A, PhanSo B);
void RutGon(PhanSo& K);
void XuLyXuat(PhanSo& K);
PhanSo Tong(PhanSo& A, PhanSo& B);
PhanSo Hieu(PhanSo& A, PhanSo& B);
PhanSo Tich(PhanSo& A, PhanSo& B);
PhanSo Thuong(PhanSo& A, PhanSo& B);
void Xuat(PhanSo A);

int main()
{
	PhanSo A;
	PhanSo B;

	cout << "Moi ban nhap tu va mau cua phan so thu nhat: ";
	Nhap(A);
	cout << endl;

	cout << "Moi ban nhap tu va mau cua phan so thu hai: ";
	Nhap(B);
	cout << endl;

	Xuat(A, B);
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


void Xuat(PhanSo A)
{
	RutGon(A);
	XuLyXuat(A);
}

void Xuat(PhanSo A, PhanSo B)
{
	RutGon(A);
	RutGon(B);
	cout << "Tong hai phan so: ";
	Xuat(Tong(A, B));
	cout << endl;
	cout << "Hieu hai phan so: ";
	Xuat(Hieu(A, B));
	cout << endl;
	if ((A.iTuSo == 0) || (B.iTuSo == 0))
		cout << "Tich hai phan so: 0";
	else
	{
		cout << "Tich hai phan so: ";
		Xuat(Tich(A, B));
	}
	cout << endl;

	if (B.iTuSo == 0)
		cout << "Khong co phep chia cho 0: ";
	else if (B.iTuSo != 0)
	{
		cout << "Thuong hai phan so: ";
		Xuat(Thuong(A, B));
	}
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

PhanSo Tong(PhanSo& A, PhanSo& B)
{
	PhanSo K;
	K.iTuSo = A.iTuSo * B.iMauSo + A.iMauSo * B.iTuSo;
	K.iMauSo = A.iMauSo * B.iMauSo;
	return K;
}

PhanSo Hieu(PhanSo& A, PhanSo& B)
{
	PhanSo K;
	K.iTuSo = A.iTuSo * B.iMauSo - A.iMauSo * B.iTuSo;
	K.iMauSo = A.iMauSo * B.iMauSo;
	return K;
}

PhanSo Tich(PhanSo& A, PhanSo& B)
{
	PhanSo K;
	K.iTuSo = A.iTuSo * B.iTuSo;
	K.iMauSo = A.iMauSo * B.iMauSo;
	return K;
}

PhanSo Thuong(PhanSo& A, PhanSo& B)
{
	PhanSo K;
	K.iTuSo = A.iTuSo * B.iMauSo;
	K.iMauSo = A.iMauSo * B.iTuSo;
	return K;
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



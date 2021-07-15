#include"CString.h"

CString::CString() {

}

CString::~CString() {

}



istream& operator>>(istream& nhapchuoi, CString& Chuoi)
{
    getline(nhapchuoi, Chuoi.String);
    return nhapchuoi;
}

ostream& operator<<(ostream& xuatchuoi, const CString& Chuoi)
{
    xuatchuoi << Chuoi.String;
    return xuatchuoi;
}




CString CString::operator+(const CString& Chuoi) {
    CString res;
    res.String = String;
    res.String += Chuoi.String;
    return res;
}

void CString::operator=(const CString& Chuoi) {
    String = Chuoi.String;
}

bool CString::operator<(const CString& Chuoi) {
    return (String.length() < Chuoi.String.length());
}

bool CString::operator<=(const CString& Chuoi) {
    return (String.length() <= Chuoi.String.length());
}

bool CString::operator>(const CString& Chuoi) {
    return (String.length() > Chuoi.String.length());
}

bool CString::operator>=(const CString& Chuoi) {
    return (String.length() >= Chuoi.String.length());
}

bool CString::operator==(const CString& Chuoi) {
    return (String.length() == Chuoi.String.length());
}


bool CString::operator!=(const CString& Chuoi) {
    return (String != Chuoi.String);
}

void CString::Run() {

	CString chuoi_1;
	cout << "Moi ban nhap chuoi thu nhat: ";
	cin >> chuoi_1;
	cout << "Moi ban nhap chuoi thu hai: ";
	CString chuoi_2;
	cin >> chuoi_2;
	CString chuoi_3;
	(chuoi_3 = chuoi_1);
	cout << "Chuoi tao thanh sau khi gan chuoi 1 cho chuoi 3: " << chuoi_3;

	cout << "\nChuoi 1 nho hon chuoi 2: " << (chuoi_1 < chuoi_2);
	cout << "\nChuoi 1 nho hon hoac bang chuoi 2: " << (chuoi_1 <= chuoi_2);
	cout << "\nChuoi 1 bang chuoi 2: " << (chuoi_1 == chuoi_2);
	cout << "\nChuoi 1 lon hon chuoi 2: " << (chuoi_1 > chuoi_2);
	cout << "\nChuoi 1 lon hon hoac bang chuoi 2: " << (chuoi_1 >= chuoi_2);
	cout << "\nChuoi 1 khac chuoi 2: " << (chuoi_1 != chuoi_2);

	cout << "\nChuoi duoc tao thanh sau khi cong chuoi 1 voi chuoi 2: " << chuoi_1 + chuoi_2;

}
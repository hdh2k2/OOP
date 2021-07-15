#include"Library.h"

NoiLamViec::NoiLamViec() {
	Noi_Lam_Viec = "0";
}

NoiLamViec::~NoiLamViec() {

}

void NoiLamViec::input() {
	cout << "Moi ban nhap noi lam viec: ";
	getline(cin, Noi_Lam_Viec);
}

void NoiLamViec::output() {
	cout << "Noi lam viec: " << Res();
}

void NoiLamViec::Setter(string Noi_Lam_Viec) {
	this->Noi_Lam_Viec = Noi_Lam_Viec;
}


bool NoiLamViec::IsNLV() {
	if ((Noi_Lam_Viec == "Truong hoc") || (Noi_Lam_Viec == "Nha may") || (Noi_Lam_Viec == "San khau") || (Noi_Lam_Viec == "Benh vien"))
		return true;
	return false;
}

string NoiLamViec::Res() {
	return Noi_Lam_Viec;
}
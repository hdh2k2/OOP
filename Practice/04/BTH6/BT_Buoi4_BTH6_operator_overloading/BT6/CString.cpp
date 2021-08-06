#include"CString.h"


CString::CString(){

}

CString::~CString(){

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




CString CString::operator+(const CString&Chuoi){
    CString res;
    res.String = String;
    res.String += Chuoi.String;
    return res;
}

void CString::operator=(const CString&Chuoi ){
    String = Chuoi.String;
}

bool CString::operator<(const CString& Chuoi){
    return (String.length() < Chuoi.String.length());
}

bool CString::operator<=(const CString& Chuoi){
    return (String.length() <= Chuoi.String.length());
}

bool CString::operator>(const CString& Chuoi){
    return (String.length() > Chuoi.String.length());
}

bool CString::operator>=(const CString& Chuoi){
    return (String.length() >= Chuoi.String.length());
}

bool CString::operator==(const CString& Chuoi){
    return (String.length() == Chuoi.String.length());
}


bool CString::operator!=(const CString& Chuoi){
    return (String != Chuoi.String);
}
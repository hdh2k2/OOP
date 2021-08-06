#pragma once
#include<iostream>
#include<string>
using namespace std;
class CString {
private:
    string String;

public:
    CString();
    ~CString();

    friend istream& operator>>(istream& nhapchuoi, CString& Chuoi);
    friend ostream& operator<<(ostream& xuatchuoi, const CString& Chuoi);

    CString operator+(const CString& Chuoi);
    void operator=(const CString& Chuoi);
    bool operator<(const CString& Chuoi);
    bool operator<=(const CString& Chuoi);
    bool operator>(const CString& Chuoi);
    bool operator>=(const CString& Chuoi);
    bool operator==(const CString& Chuoi);
    bool operator!=(const CString& Chuoi);

    void Run();
};
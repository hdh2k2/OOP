#include "CDate.h"

CDate::CDate() {
    this->ngay = 0;
    this->thang = 0;
    this->nam = 0;
    this->daNhap = false;
}

CDate::CDate(int ngay, int thang, int nam) {
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;
}

CDate::~CDate(){ 

}

istream& operator>>(istream& is, CDate& Date) {
nhap:
    do
    {
        cout << "Moi ban nhap ngay: ";
        is >> Date.ngay;
        if (Date.ngay < 1 || Date.ngay > 31) {
            cout << "Ngay khong hop le\n";
        }
        if (is.fail()) {
            is.clear();
            is.ignore(10000, '\n');
            Date.ngay = -1;
        }
    } while (Date.ngay < 1 || Date.ngay > 31);

    do
    {
        cout << "Moi ban nhap thang: ";
        is >> Date.thang;
        if (Date.thang < 1 || Date.thang > 12) {
            cout << "Thang khong hop le\n";
        }
        if (cin.fail()) {
            is.clear();
            is.ignore(10000, '\n');
            Date.thang = -1;
        }
    } while (Date.thang < 1 || Date.thang > 12);

    switch (Date.thang) {
    case 4: case 6: case 9: case 11: {
        if (Date.ngay == 31) {
            cout << "NGAY KHONG THE VUOT QUA 30\n";
            goto nhap;
        }
    }
    case 2: {
        if (Date.ngay > 29) {
            cout << "NGAY KHONG THE VUOT QUA 29\n";
            goto nhap;
        }
    }
    }

    do
    {
        cout << "Moi ban nhap nam: ";
        is >> Date.nam;
        if (Date.nam <= 0) {
            cout << "Nam khong hop le\n";
        }
        if (is.fail()) {
            is.clear();
            is.ignore(10000, '\n');
            Date.nam = -1;
        }
    } while (Date.nam <= 0);

    if (Date.thang == 2) {
        if (Date.ngay == 29) {
            if (!Date.LeapYear()) {
                cout << "DAY KHONG PHAI LA NAM NHUAN. VUI LONG KIEM TRA LAI\n";
                goto nhap;
            }
        }
    }

    Date.daNhap = true;

    return is;
}

bool CDate::LeapYear() {
    if ((this->nam % 4 == 0 && this->nam % 100 != 0) || this->nam % 400 == 0) {
        return true;
    }
    return false;
}


ostream& operator <<(ostream& os, const CDate& Date) {
    os << Date.ngay << "/" << Date.thang << "/" << Date.nam;
    return os;

}

void CDate:: operator++() {
    //CDate temp ;
    if (this->ngay != SoNgayCuaThang())
    {
        this->ngay++;
    }
    else {
        if (this->ngay == SoNgayCuaThang() && this->thang == 12) {
            this->ngay = 1;
            this->thang = 1;
            this->nam++;
        }
        else {
            this->ngay = 1;
            this->thang++;
        }
    }

}

void CDate:: operator--() {
  
    if (this->ngay == 1) {
        if (this->thang == 3) {
            if (this->LeapYear()) {
                this->ngay = 29;
                this->thang = 2;
            }
            else {
                this->ngay = 29;
                this->thang = 2;
            }
        }

        else if (this->thang ==1 || this->thang == 5 || this->thang == 7 || this->thang == 8 || this->thang == 10 || this->thang == 12) {
            if (this->thang == 1) {
                this->ngay = 31;
                this->thang = 12;
                this->nam--;
            }

            else if (this->thang != 1) {
                this->ngay = 30;
                this->thang--;
            }
        }

        else if (this->thang == 2 || this->thang == 4 || this->thang == 6 || this->thang == 8 || this->thang == 9 || this->thang == 11) {

            this->ngay = 31;
            this->thang--;
        }

    }

    else {
        this->ngay--;
    }
   
}

void CDate::TeseUP(int obj) {
    this->nam += obj / 12;
    this->thang = (this->thang + obj) % 12;
    if (this -> thang == 0)
        this->thang = 12;

}

void CDate::TeseDOWN(int obj) {
    if (this->thang - obj <= 0) {
        TeseDOWN(1 + obj / 12);
        this->thang = 12 - abs(this->thang - obj) % 12;
        if (this->thang == 0)
            this -> thang = 12;
    }

    else {
        this->thang -= obj;
    }

}

CDate CDate::operator+( int x) {
    int temp = SoNgayCuaThang();
    if (this->ngay + x > temp) {
        do {
            temp = SoNgayCuaThang();
            TeseUP(1);
            x = x - (temp - this->ngay);
            this->ngay = 0;
        } while (this->ngay + x > temp);
    }

    this->ngay += x;
    return *this;
    
}

CDate CDate::operator-(int x) {
    int temp = SoNgayCuaThang();
    if (this->ngay - x <= 0 ) {
        do {
            TeseDOWN(1);
            temp = SoNgayCuaThang();
            x = x - this->ngay;
            this->ngay = temp;
        } while (this->ngay - x < 0 );
    }

    this->ngay -= x;
    return *this;

}

int64_t CDate::Chuyen_Ngay_Thang_Nam_Thang_Ngay() {

    long long Ngay = 0;
    for (int i = 0; i < this->nam; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
            Ngay += 366;
        }

        else
            Ngay += 355;
    }

    int Tong_So_Ngay_Cua_Thang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    for (int i = 1; i < this->thang; i++) {
        if ((i == 2) && this->LeapYear()) {
            Ngay += Tong_So_Ngay_Cua_Thang[i - 1] + 1;
        }

        else {
            Ngay += Tong_So_Ngay_Cua_Thang[i - 1];
        }
    }

    return (this->ngay + Ngay);

}

int64_t CDate::operator-(CDate& Date) {
    return this->Chuyen_Ngay_Thang_Nam_Thang_Ngay() - Date.Chuyen_Ngay_Thang_Nam_Thang_Ngay();
}

bool CDate::KiemTraDaNhap() {
    return this->daNhap;
}
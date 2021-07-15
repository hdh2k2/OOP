#include"Time.h"

Time::Time() {
    this->ngay = 0;
    this->thang = 0;
    this->nam = 0;
    this->daNhap = false;
}

Time::Time(int ngay, int thang, int nam) {
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;
}

Time::~Time() { }

void Time::Nhap() {
nhap:
    do
    {
        cout << "Moi ban nhap ngay sinh: ";
        cin >> this->ngay;
        if (this->ngay < 1 || this->ngay > 31) {
            cout << "Ngay sinh khong hop le\n";
        }
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            this->ngay = -1;
        }
    } while (this->ngay < 1 || this->ngay > 31);

    do
    {
        cout << "Moi ban nhap thang sinh: ";
        cin >> this->thang;
        if (this->thang < 1 || this->thang > 12) {
            cout << "Thang sinh khong hop le\n";
        }
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            this->thang = -1;
        }
    } while (this->thang < 1 || this->thang > 12);

    switch (this->thang) {
    case 4: case 6: case 9: case 11: {
        if (this->ngay == 31) {
            cout << "NGAY SINH KHONG THE VUOT QUA 30\n";
            goto nhap;
        }
    }
    case 2: {
        if (this->ngay > 29) {
            cout << "NGAY SINH KHONG THE VUOT QUA 29\n";
            goto nhap;
        }
    }
    }

    do
    {
        cout << "Moi ban nhap nam sinh: ";
        cin >> this->nam;
        if (this->nam <= 0) {
            cout << "Nam sinh khong hop le\n";
        }
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            this->nam = -1;
        }
    } while (this->nam <= 0);

    if (this->thang == 2) {
        if (this->ngay == 29) {
            if (!LeapYear()) {
                cout << "DAY KHONG PHAI LA NAM NHUAN. VUI LONG KIEM TRA LAI\n";
                goto nhap;
            }
        }
    }

    this->daNhap = true;
}

void Time::Xuat() {
    cout << this->ngay << "/" << this->thang << "/" << this->nam;
}

Time Time::TimNgayKeTiep() {
    Time* temp = new Time(this->ngay, this->thang, this->nam);
    if (temp->ngay != SoNgayCuaThang())
    {
        temp->ngay++;
    }
    else {
        if (temp->ngay == SoNgayCuaThang() && temp->thang == 12) {
            temp->ngay = 1;
            temp->thang = 1;
            temp->nam++;
        }
        else {
            temp->ngay = 1;
            temp->thang++;
        }
    }
    return *temp;
}

bool Time::KiemTraDaNhap() {
    return this->daNhap;
}
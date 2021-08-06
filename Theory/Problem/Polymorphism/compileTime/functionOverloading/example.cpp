#include<iostream>

#define cls system("cls")
#define pause system("pause")

using namespace std;

class PhanSo {
private:
    int _tuso;
    int _mauso;
public:
    PhanSo(int _tuso, int _mauso) {
        this->_tuso = _tuso;
        this->_mauso = _mauso;
    };
    PhanSo& operator++(); // Cộng tiền tố
    PhanSo operator++(int); // Cộng hậu tố 
    friend ostream& operator<<(ostream& os, PhanSo _phanso);
};

ostream& operator<<(ostream& os, PhanSo _phanso){
    os << _phanso._tuso << " " << _phanso._mauso;
    return os;
}

PhanSo& PhanSo::operator++(){
    this->_tuso = this->_tuso + this->_mauso;
    return *this;
}

PhanSo PhanSo::operator++(int){
    PhanSo tmp = *this;
    ++tmp;
    return tmp;
}

int main(){
    cls;
    PhanSo phanso(1,2);
    cout << phanso++; // Xài cộng hậu tố
    cout << "\n";
    cout << ++phanso; // Xài cộng tiền tố
    pause;
}
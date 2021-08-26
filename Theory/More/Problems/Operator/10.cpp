
#include<iostream>
using namespace std;

class PhanSo{
private:
    int _tuso, _mauso;
public:
    PhanSo(int _tuso = 0,int _mauso = 1): _tuso(_tuso), _mauso(_mauso){}
    friend PhanSo operator+(PhanSo ps1, PhanSo ps2){
        return PhanSo(ps1._tuso * ps2._mauso + ps2._tuso * ps1._mauso, ps1._mauso * ps2._mauso);
    }
    operator float(){
        return (float)_tuso / _mauso;
    }

    friend ostream&operator <<(ostream&os, PhanSo ps){
        os << ps._tuso << "/" << ps._mauso;
    }

};

int main(){
    PhanSo ps1(1, 2);
    cout << "A = ps1 + 2 = " << ps1 << " + 2 = " << ps1 + 2 << endl;
    return 0;
}
#include<iostream>

#define cls system("cls")
#define pause system("pause")

using namespace std;

class A{
public: 
    int a;
    A(int aa = 0):a(aa){}

    int &operator[](int tt){
        cout << "#"; 
        return tt;
    }

    int operator[](int tt) const{
        cout << "*"; 
        return tt;
    }

};

void xuat(const A&a){
    int tam = a[5];
}


int main(){
    cls;
    A a(7);
    xuat(a);
    a[3] = 9;
    int tam = a[5];
    xuat(tam);
    return 0;

}
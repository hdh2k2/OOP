#include"library.h"

class A {
private:
    int x,y;
public:
    virtual void Xuat() = 0;
};

void A::Xuat(){
    cout <<"A";
}

int main(){
    A a;
    a.Xuat();
}
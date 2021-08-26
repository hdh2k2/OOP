#include"library.h"

class A{
public:
    void outPut(){
        cout << "1";
    }
};

class B:public A{
public:
    void outPut(){
        cout << "2";
    }
};

int main(){
    cls;
    B b;
    b.outPut(); // outPut has been Overriding
    pause;
}


#include"library.h"

class A{
public:
    void outPut(){
        cout << "1";
    }
};

class B: virtual public A{
public:
    void outPut(){
        cout << "2";
    }
};

class C: virtual public A{
public:
    void outPut(){
        cout << "3";
    }
};

class D: public C, B{
public:
    void outPut(){
        cout << "4";
    }
};


int main(){
    cls;
    A *a = new D();
    a->outPut(); // outPut has been Overriding
    delete a;
    pause;
}
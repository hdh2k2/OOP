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

class C:public B{
public:
    void outPut(){
        cout << "3";
    }
};

int main(){
    cls;
    C *c = new C;
    c->outPut(); // outPut has been Overriding
    delete c;
    pause;
}
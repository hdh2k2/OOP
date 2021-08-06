#include"library.h"

class A{
public:
    virtual void outPut(){
        cout << "1";
    }
};

class B:public A{
public:
    A::outPut();
    void outPut(){
        cout << "2";
    }
};

int main(){
    cls;
    A *a = new B;
    a->outPut(); // outPut has been Overriding
    delete a;
    pause;
}


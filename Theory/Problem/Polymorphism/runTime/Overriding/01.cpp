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
    B *b = new B;
    b->outPut(); // outPut has been Overriding
    delete b;
    pause;
}
#include<iostream>
using namespace std;

class A{
public:
    A() {
        cout << " A ";
    }

    ~A() {
        cout << " ~A ";
    }
    
};

class B:public A{
public:
    B() {
        cout << " B ";
    }

    ~B() {
        cout << " ~B ";
    }
};

int main(){
    B ba;
    //B *b = new B;
    //delete b;
    cout << "test";
    
    return 0;
}
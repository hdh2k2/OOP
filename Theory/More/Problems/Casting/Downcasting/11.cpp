
#include<iostream>
using namespace std;

class A{
public:
    int a = 100;
    void aa() {
        cout << " A ";
    }
    
};

class B:public A{
public:
    int b = 10;
    void aa() { cout << "B"; }
    void aa1() {
        cout << " A ";
    }
};

int main(){
    A a;
    B *b = (B *)&a;
    cout << b->a;
    cout << "\n";
    cout << b->b;
    b->aa1();
    return 0;
}
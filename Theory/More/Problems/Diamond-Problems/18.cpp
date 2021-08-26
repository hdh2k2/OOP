#include<iostream>

using namespace std;

class A{
protected:
    int a = 1;
public:
    void outPut(){
        cout << "a = " << a << endl;
    }
    
};

class B: virtual public A{
protected:
    int b = 2;
public:
    void outPut(){
        cout << "b = " << b << endl;
    }
    
};

class C: virtual public A{
public:
    int c = 3;
    void outPut(){
        cout << "c = " << c << endl;
    }
};

class D:public C, public B{
public:
    int d = 4;
    void outPut(){
        cout << "d = " << d << endl;
    }
};

int main(){
    A *a = new D;
    a->outPut();
    return 0;
}

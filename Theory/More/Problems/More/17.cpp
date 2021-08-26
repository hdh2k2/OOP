#include<iostream>

using namespace std;

class A{
protected:
    int a = 10;
public:
    A(){
        a = 5;
    }

    void outPut(){
        cout << "a = " << a << endl;
    }
    
};

class B{
protected:
    int b = 100;
public:
    B(){
        b = 50;
    }

    void outPut(){
        cout << "b = " << b << endl;
    }
    
};

class C:  public A, public B{
};

int main(){
    C c;
    c.outPut();
    return 0;
}

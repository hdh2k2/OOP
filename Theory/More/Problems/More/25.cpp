#include<iostream>

using namespace std;

class A{
protected:
    int a = 10;
public:
  
};

class B: virtual public A{
protected:
    int b = 100;
public:

};

class C: virtual public A{
public:
    int c = 1;
};

class D:  public B, C{
public:
    void outPut(){
        cout << a << b << c;
    }
};

int main(){
    D d;
    d.outPut();
    return 0;
}

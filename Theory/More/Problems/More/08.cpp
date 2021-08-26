
#include<iostream>
using namespace std;

class A{
public:
    virtual int aa(){
        return 0;
    }
    
};

class B:public A{
public:
    
};

int main()
{
    A a;
    B b;
    a = b;

    return 0;
}
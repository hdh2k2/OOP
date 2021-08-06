#include<iostream>

#define cls system("cls")
#define pause system("pause")

using namespace std;

class A{
public:
    virtual ~A(){
        cout << " Delete A ";
    }
};

class B:public A{
public:
    virtual ~B(){
        cout << " Delete B ";
    }
};

class C:public B{
public:
    ~C(){
        cout << " Delete C ";
    }
};

int main(){
    cls;
    C *c = new C;
    delete c;
    pause;
}
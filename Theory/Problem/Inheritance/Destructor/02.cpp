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
    ~B(){
        cout << " Delete B ";
    }
};

int main(){
    cls;
    B *b = new B;
    delete b;
    pause;
}
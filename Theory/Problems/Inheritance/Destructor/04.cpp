#include<iostream>

#define cls system("cls")
#define pause system("pause")

using namespace std;

class A{
public:
    ~A(){
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
    A *a = new B;
    delete a;
    pause;
}
#include<iostream>

#define cls system("cls")
#define pause system("pause")

using namespace std;

class A{
public:
    A(){
        cout << " A ";
    }
};

class B:public A{
public:
    B(){
        cout << " B ";
    }
};

class C:public B{
public:
    C(int x){
        cout << " C ";
    }
};

int main(){
    cls;
    C *c = new C(5);
    delete c;
    pause;
}
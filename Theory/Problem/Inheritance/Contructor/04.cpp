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
        
    }

    B(int x){
        cout << " B ";
    }
};

class C:public B{
public:
    C(int x);
    C(int x, int y){
        cout << " C ";
    }
};

int main(){
    cls;
    C *c = new C(5, 7);
    delete c;
    pause;
}
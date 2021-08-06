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

    B(int x){
        cout << " B' ";
    }

    B(int x, int y){
        cout << " B'' ";
    }
};

class C:public B{
public:
    C(){
        cout << " C ";
    }

    C(int x){
        cout << " C' ";
    }
    
    C(int x, int y){
        cout << " C'' ";
    }
};

int main(){
    cls;
    C *c = new C(5, 7); // Same A *a = new C(5, 7)
    delete c;
    pause;
}
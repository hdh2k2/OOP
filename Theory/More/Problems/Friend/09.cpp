
#include<iostream>
using namespace std;

class A{
    int a = 10;
    friend class B;
};

class B{
public:
    void display(A&a){
        cout << a.a;
    }
    
};

int main(){
    A a;
    B b;
    b.display(a);
    return 0;
}
#include<iostream>

#define cls system("cls")
#define pause system("pause")

using namespace std;

class A{
    int aa = 0;
    friend class B;
};

class B{
public:
    void Display(A &a){
        cout << "Gia tri cua aa: " << a.aa;
    }
};

int main(){
    cls;
    A a;
    B b;
    b.Display(a);
    return 0;

}
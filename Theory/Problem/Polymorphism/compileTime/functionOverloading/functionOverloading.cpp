#include<iostream>

using namespace std;

class A{
public:
    void outPut(int x){
        cout << x << " ";
    }

    void outPut(double x){
        cout << x << " ";
    }

    void outPut(double x, int y){
        cout << x << " " << y << " ";
    }
};

int main(){
    A a;
    a.outPut(1);
    a.outPut(1.2);
    a.outPut(1, 2);
}
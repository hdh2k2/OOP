#include<iostream>

using namespace std;

class A{
public:
    int x,y;
    void input(){
        cin >> x >> y;
        output();
    }

    void output(){
        cout << x << "\t-\t" << y << "\t=\t" << x - y;
    }
    
};

class B:public A{
public:
    void output(){
        cout << x << "\t-\t" << y << " = " << x + y;
    }
};

int main(){
    B *b = new B;
    b->input();

    return 0;
}

// Chưa giải quyết phân giải tĩnh - Đối với con trỏ lớp kế thừa
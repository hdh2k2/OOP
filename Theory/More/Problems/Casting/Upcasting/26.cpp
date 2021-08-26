#include<iostream>

using namespace std;

class A {
public:
    int x = 10, y = 8;
    virtual void output() {
        cout << "ok";
    };
};

class B :public A {
public:
    void output() {
        cout << x << "\t+\t" << y << "\t=\t" << x + y<<endl;
    }
};

class C :public A {
public:
    void output() {
        cout << x << "\t-\t" << y << "\t=\t" << x - y<<endl;
    }
};

int main() {
    A** a = new A*;
    a[0] = new B;
    a[1] = new C;
    a[0]->output();
    a[1]->output();

    return 0;
}


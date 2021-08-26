#include<iostream>

using namespace std;

class A{
public:
    int x = 10, y = 8;
    virtual void output() = 0;
};

class B:public A{
public:
    void output(){
        cout << x << "\t+\t" << y << "\t=\t" << x + y;
    }
};

class C:public A{
public:
    void output(){
        cout << x << "\t-\t" << y << "\t=\t" << x - y;
    }
};

int main(){
    B a;
    A *b = &a;
    b->output();
    return 0;
}

// Upcasting từ lớp cơ sở A đến lớp dẫn xuất B
#include<iostream>

using namespace std;

class A{
public:
    A(){
        cout << "Contructor a \n";
    }

    ~A(){
        cout << "Destructor a\n";
    }
};

int main(){
    for (int i = 0;i < 100; i ++)
        A a;
    return 0;
}

// Destructor có thể gọi sau khi khởi động return 0 trong hàm main

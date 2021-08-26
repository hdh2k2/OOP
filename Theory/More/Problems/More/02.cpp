#include<iostream>

#define cls system("cls")
#define pause system("pause")

using namespace std;

class A{
public:
    A(){
        
    }

    A (const A& a){
        cout << "A";
    }

    A&operator = (const A& a){
        cout << "B";
        return *this;
    }
};


int main(){
    cls;
    A a1, a2, a3;
    A a4(a1 = a2 = a3); // BBA
    A a5(a4 = a3); // BA, same a5 = a4 = a3, Vì a5 chưa được khởi tạo trước nên chương trình in ra BA
    pause;
}

// Destructor có thể gọi sau khi khởi động return 0 trong hàm main

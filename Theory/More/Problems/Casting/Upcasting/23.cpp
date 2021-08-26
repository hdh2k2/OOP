#include<iostream>

using namespace std;

class A{
public:
    int x = 10, y = 8;
    virtual void output() = 0{
        cout << "ok";
    };
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

/*

    Upcasting từ lớp cơ sở A đến lớp dẫn xuất B, 
    Trường hợp xét trình biên dịch của MC - MingW thì compiler cho phép chúng ta định nghĩa hàm thuần ảo có nội dung.
    Trường hợp xét trình biên dịch trên C++ (10.4/2) chuẩn là g++ thì trình biên dịch không cho phép chúng ta tạo 1 
    hàm thuần ảo được chứa nội dung.

    Gợi ý: Chạy chương trình bằng cách truyền vào tham số dòng lệnh trong main (argv).

*/
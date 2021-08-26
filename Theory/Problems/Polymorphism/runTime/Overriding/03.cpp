#include"library.h"

class A{
public:
    void outPut(){
        cout << "1";
    }
};

class B:public A{
public:
    void outPut(){
        cout << "2";
    }
};

class C:public B{
public:
    void outPut(){
        cout << "3";
    }
};

int main(){
    cls;
    A *a = new C;
    a->outPut(); // outPut has been Overriding
    delete a;
    pause;
}

/*
    Vấn đề đặt ra ở đây: Dòng 26 chúng ta thực hiện liên kết động giữa con trỏ a của lớp A sang lớp C
    Mong muốn của chúng ta ở dòng 27, khi a->outPut() sẽ xuất ra màn hình số 3 (vì con trỏ a đang trỏ tới lớp C)
    nhưng chương trình lại in ra số 1, không như ta mong muốn.

    Điều này được gọi là: Vấn đề về sự phân giải tĩnh hay còn gọi là sự liên hợp tĩnh

*/

/*

    Cách sữa lỗi: Chúng ta chỉ cần thêm từ khóa virtual vào sau void và trước outPut() ở dòng số 5 thì vấn đề sẽ được giải quyết.

*/
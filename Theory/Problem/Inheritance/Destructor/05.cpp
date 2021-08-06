#include<iostream>

#define cls system("cls")
#define pause system("pause")

using namespace std;

class A{
public:
    ~A(){
        cout << " Delete A ";
    }
};

class B:public A{
public:
    ~B(){
        cout << " Delete B ";
    }
};

int main(){
    cls;
    A *a = new B;
    delete a;
    pause;
}

/*
    Vấn đề đặt ra ở đây: Dòng 24 chúng ta thực hiện liên kết động giữa con trỏ a của lớp A sang lớp B
    Mong muốn của chúng ta ở dòng 25, sau khi xóa đi đối tượng a thì vùng nhớ của 2 phần liên kết A và B phải được
    giải phóng nhưng kết quả cho ta thấy chỉ có vùng nhớ của a trong lớp A được giải phóng (hay nói cách khác là chỉ có hàm
    hủy trong lớp A được thực thi).

*/

/*

    Cách sữa lỗi: Chúng ta chỉ cần thêm từ khóa virtual vào sau void và trước destructor của lớp A ở dòng số 10 thì vấn đề sẽ được giải quyết.
    Lúc này, bạn có thể hiểu đơn giản, dòng 10 sẽ không được thực thi, lúc này con trỏ a sẽ nhảy xuống destructor của lớp B để thực thi hàm hủy
    và theo tính kế thừa, sau khi B được hủy, A sẽ được hủy.

*/
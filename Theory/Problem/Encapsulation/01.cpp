#include<iostream>

using namespace std;

class Base{
private:
    int x, y; // Đóng gói thành phần x, y trong lớp
public:
    int get(){
        return x;
    } // Truy cập thuộc tính x đã đóng gói

    void setter(int x){
        this->x = x;
    } // Thay đổi thuộc tính x
};

int main(){

}
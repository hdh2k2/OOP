#include<iostream>

#define cls system("cls")
#define pause system("pause")

using namespace std;

class T{
public:
    int t;
public:
    // Thiết lập constructor mặc định 
    T(int t = 0 ):t(5){
        this->t = t;
    }

    int GetSet(int tt = 0){
        t = (tt == 0) ? t : tt;
        return t + 1;
    }
};

int main(){
    cls;
    T a, b(1);
    T c(a.GetSet(b.GetSet())); 
    cout << a.GetSet() << " " << b.GetSet() << " " << c.GetSet();
    pause;
}

// Vấn đề xảy ra ở dòng 27 cho ta thấy b.GetSet() không có đối số truyền vào, compiler vẫn không hiện lỗi
// Vì compiler định nghĩa không có đối số truyền vào, mặc định là 0, nhưng vì ở dòng 25 ta khởi tạo giá trị
// t trong class T của đối tương b là 1 nên khi b.GetSet(), đối số truyền vào sẽ là 1
// Lý giải tương tự cho dòng 25, khi khai báo " T a "  mà không cần " T a() "
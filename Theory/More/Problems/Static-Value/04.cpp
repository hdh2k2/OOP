#include<iostream>

#define cls system("cls")
#define pause system("pause")

using namespace std;

class T{
public:
    static int i;
    T() { i++; }
    T(int){}
    ~T() { i--; }

};

int T::i = 0;

int main(){
    cls;
    
    T c, d, e; // Tăng i = 3
    //T *a = new T;
    T *a = NULL;
    cout << c.i;
    //delete (a);
    delete a;
    cout << &c << " " << &d;
    cout << T::i << endl;
    
    pause;
    return 0;
    // Lúc này 3 biến c, d, e mới bị hủy và i = 0; hủy khi kết thúc chương trinh
}
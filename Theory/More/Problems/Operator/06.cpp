#include<iostream>

#define cls system("cls")
#define pause system("pause")

using namespace std;

class A{
private:
    int a;
public:
    A(int aa):a(aa){}
    friend ostream &operator <<(ostream&os, const  A& a){
        os << a.a << endl;
    }
};


int main(){
    cls;
    A a(7);
    cout << a;
    operator<<(cout, a);

    return 0;

}
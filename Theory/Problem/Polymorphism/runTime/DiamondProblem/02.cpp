#include"library.h"

class BaseA{ 
protected:
    int A; 
public: 
    BaseA(){ 
        A = 5; 
    } 

    void Print(){ 
        cout<<"A = "<<A<<endl; 
    } 
}; 

class BaseB{ 
protected:
    int B; 
public: 
    BaseB(){ 
        B = 10; 
    } 

    void Print(){
        cout<<"B = "<<B<<endl; 
    }
}; 

class Derive : public BaseA, public BaseB {}; 

int main() {
    Derive d; 
    d.Print(); 
} 

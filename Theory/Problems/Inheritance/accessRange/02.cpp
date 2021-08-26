#include"library.h"
 
class A{
private:
    int a;
protected:
    int x;  
public:
    void setVal(int v){
        x=v;    
    }
};
 
class B:private A {
public:
    void printVal(void){
        setVal(10);
        cout << "Value of x: " << x << endl; 
    }
};
 
int main(){
    B objB; 
    objB.printVal();
    return 0;
}
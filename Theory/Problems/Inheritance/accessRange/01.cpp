#include"library.h"

class A {
private:
    int a,b;
public:
    int c,d;
protected:
    int e, f;
};

class B: private  A{};
class C: public  B{};

int main(){
    C *c = new C;
#if 0   
    c->a;
    c->b;
    c->c;
    c->d;
    c->e;
    c->f;
#endif // Wrong
    delete c;

}
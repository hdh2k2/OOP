# **Quiz**

1. Một lớp có thể *c*hứa những gì ?

    A. Dữ liệu
    
    B. Phương thức

    C. Cả a và b

    D. Tất cả đều sai

2. Mỗi đối tượng thuộc *c*ùng 1 lớp 

    A. Có một bản copy tất cả các hàm và các thuộc tính của lớp 

    B. Có một bản copy tất cả các thuộc tính của lớp 

    C. Có một bản copy tất cả các hàm của lớp 

    D. Chia sẻ con trỏ trỏ tới các thuộc tính và các hàm của lớp 

3. Về tổng quát trong OOP, cho *b*iểu thức x.y có nghĩa là: 

    A. Truy cập thành phần x của đối tượng y 

    B. Truy cập thành phần y của đối tượng x 

    C. Truy cập thành phần y của đối tượng được trỏ tới bởi x 

    D. Tất cả đều sai 

4. Cách thông thường để truy *c*ập một trường dữ liệu dạng private của một lớp 

    A. Kế thừa lớp đó sau đó truy cập thông qua lớp dẫn xuất 

    B. Khai báo một hàm bạn hoặc lớp bạn để lấy quyền truy cập 
    
    C. Truy cập thông qua cặp hàm get/set 

    D. Tất cả các cách trên đều đúng. 

5. Đặc trưng củ*a* lập trình hướng đối tượng là gì: 

    A. Data Encapsulation, Inheritance & Polymorphism 

    B. Data Encapsulation, Inheritance, Polymorphism & Exception handling 

    C. Data Encapsulation, Inheritance, Polymorphism & Friend 
    
    D. Data Encapsulation, Inheritance, Polymorphism & Overloading 

6. Trong 1 *đ*oạn chương trình, một constructor không có bất kỳ tham số nào gọi là ______ constructor 
    
    A. custom 
    
    B. dynamic 
    
    C. static 

    D. default 

7. Câu nào đúng khi nói về *c*onstructor 
    
    1. Một lớp có thể có nhiều hơn 1 constructor 
    
    2. Constructor có thể được kế thừa 
    
    3. Constructor không thể được khai báo trong vùng protected của lớp 
    
    4. Constructor có thể có số lượng tham số tùy ý 
    
    5. Constructor có thể trả về kiểu dữ liệu void 

        A. 1, 2, 3, 4 
        
        B. 1, 2, 4 
        
        C. 1, 3, 4 
        
        D. 1, 2, 3, 5 

8. Một h*à*m destructor nhận bao nhiêu tham số: 

    A. 0 
    
    B. 1 
    
    C. 2 
    
    D. Số lượng tham số tùy ý 

9. Về mặt b*ả*n chất, destructor có thể dùng ở dạng **virtual destructor**

    A. Đúng

    B. Sai

10. Điểm khác biệt giữa *c*onstructor và destructor là 

    A. Constructor có thể nhận tham số còn destructor thì không 

    B. Constructor có thể được overload còn destructor thì không 

    C. Cả A và B đều đúng 
    
    D. Cả A và B đều sai 

11. Cho *đ*ịnh nghĩa các class như sau: 
    ```C++
    class A { };

    class B: protected A { }; 
    ```
    Đều gì xảy ra khi biên dịch: 

    A. Không thể biên dịch do thân của class A chưa được cài đặt 
        
    B. Không thể biên dịch do thân của class B chưa được cài đặt 
        
    C. Không thể biên dịch do class B kế thừa từ A không phải kiểu kế thừa public 
        
    D. Biên dịch thành công 

12. *C*họn phát biểu đúng nhất về quan hệ nhiều - nhiều giữa hai lớp đối tượng 

    A. Một đối tượng thuộc lớp này quan hệ với nhiều đối tượng thuộc lớp kia và một đối tượng thuộc lớp kia có quan hệ duy nhất với một đối tượng thuộc lớp này. 
    
    B. Một đối tượng thuộc lớp này quan hệ với một đối tượng thuộc lớp kia và một đối tượng thuộc lớp kia có quan hệ duy nhất với một đối tượng thuộc lớp này. 
    
    C. Một đối tượng thuộc lớp này quan hệ với nhiều đối tượng thuộc lớp kia và một đối tượng thuộc lớp kia có quan hệ với nhiều đối tượng thuộc lớp này. 
    
    D. Lớp đối tượng này là trường hợp đặc biệt của lớp đối tượng kia và lớp đối tượng kia là trường hợp tổng quát của lớp đối tượng này. 


13. Qu*á* trình một lớp được kế thừa từ nhiều lớp được gọi là: 

    A. multiple inheritance 

    B. multilevel inheritance 
    
    C. default inheritance 
    
    D. multiplex inheritance 

14. Khi dẫn xuất một lớp cơ sở theo kế thừa private, c*á*c thành viên public của lớp cơ sở trở thành các thành viên _______ của lớp dẫn xuất, các thành viên protected của lớp cơ sở trở thành các thành viên ________ của lớp dẫn xuất 

    A. private private 

    B. public protected 

    C. protected protected 

15. Cho *đ*oạn chương trình sau (): 
    ```C++
    class A { 

    private:

        int m_iPrivate; 

    protected:

        int m_iProtected; 

    public: 

        int m_iPublic; 

    }; 
    ```

    Xét class C : protected A {}; 

    Khi đó, trạng thái của các thuộc tính trong lớp C sẽ là: 

    ________ không thể truy xuất 

    ________ có tầm vực protected. 

    ________ có tầm vực protected. 

    A. m_iPrivate, m_iProtected, m_iPublic 

    B. m_iProtected, m_iPublic, m_iPrivate 

    C. m_iPrivate, m_iPublic, m_iProtected 

    D. Câu a, c đúng 

16. Xem xét *đ*oạn mã sau: 
    ```C++
    class A {

    private:

        int a,b; 

    public:

        int c,d;

    protected:

        int e,f;

    };

    class B: private A{}; 

    class C: public B{}; 
    ```

    Hỏi lớp C sử dụng được các biến thành viên nào của lớp A 

    A. a, b 

    B. a, b, c, d 

    C. c, d, e, f 

    D. Tất cả câu trên đều sai 

17. Việc kế thừ*a* giữa 2 lớp chỉ nên được thực hiện khi và chỉ khi giữa chúng có quan hệ ________, có nghĩa là lớp này là một trường hợp đặc biệt của lớp kia. 

    A. Is -a 

    B. Has -a 

    C. Một - một 

    D. Một - nhiều 

18. Cho đo*ạ*n chương trình sau: 
    ```C++
    class A{};

    class B: public class A{}; 
    class C: private class B{};

    int main(){ 
        B *pb; 
        C c; 
        A a; 
    }
    ``` 

    Câu lệnh nào sau đây là đúng: 

    A. pb = & c; 

    B. pb= & a; 

    C. C = & a; 

    D. Cả 3 câu đều đúng 

19. Toán tử :: đượ*c* gọi là 

    A. Toán tử truy vấn dữ liệu 

    B. Toán tử hai chấm 

    C. Toán tử phân giải miền xác định 

    D. Toán tử gán 

20. Khi thực thi đo*ạ*n chương trình sau kết quả sẽ là 
    ```C++
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
        
    class BaseB { 
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
    ``` 
    A. Chương trình báo lỗi 

    B. Màn hình xuất hiện: A = 5 

    C. Màn hình xuất hiện: B = 10 

    D. Màn hình xuất hiện: A = 5 B = 10 


21. Thế nào là overriding (trong OOP)

    A. Lớp dẫn xuất định nghĩa một hàm cùng tên nhưng khác kiểu trả về với một hàm ở lớp cơ sở 

    B. Lớp dẫn xuất định nghĩa một hàm cùng tên, cùng kiểu trả về nhưng khác các đối số với một hàm ở lớp cơ sở. 

    *C.* Lớp dẫn xuất định nghĩa một hàm hoàn toàn giống lớp cơ sở 

    D. Lớp dẫn xuất định nghĩa một hàm cùng tên, cùng các đối số nhưng khác kiểu trả về với một hàm ở lớp cơ sở 

22. Ta xây dựng một hàm thành phần là phương thức ảo *b*ằng cách thêm từ khóa ________ vào trước khai báo hàm. 
    
    A. static 
    
    B. virtual 
    
    C. abstract 
    
    D. const 

23. Xét đoạn chương trình *b*ên dưới: 
    ```C++
    class Animal { 
    public: 
        void Talk() { 
            cout << "Don't know how to talk!" << endl; 
        } 
    }; 

    class Cat: public Animal { 
    public: 
        void Talk() { 
            cout << "Meo meo!" << endl; 
        } 
    };

    int main(){ 
        Cat obj; 
        Animal *p = &obj; 
        p->Talk(); 
        delete p;
    } 
    ```
    Kết quả của chương trình: 
    
    A. Meo meo! 
    
    B. Don't know how to talk! 
    
    C. Cả hai câu đều đúng 
    
    D. Cả hai câu đều sai 

24. Để overloa*d*ing toán tử + thì ta có thể sử dụng: 
    
    A. hàm member 
    
    B. hàm friend 
    
    C. hàm non-member và non-friend 
    
    D. cả 3 cách trên 

25. Cho *đ*oạn chương trình bên dưới:
    ```C++
    class A {
    private:
        int a = 1, b = 2;
    public:
        int c = 3, d = 4;
    protected:
        int e = 5, f = 6;
    };

    class B: private  A{};
    class C: public  B{};

    int main(){
        C *c = new C;
        cout << c->c;
        cout << c->d;
        delete c;
    
    }    
    ```
    Chương trình sẽ in ra gì khi chúng ta biên dịch:

    A. 34

    B. 3 4
    
    C. Chương trình báo lỗi

    D. Chương trình không in ra gì cả

26. Cho đo*ạ*n chương trình bên dưới:
    ```C++
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

    int main(){
        A *a = new B;
        a->outPut(); 
        delete a;
    }
    ```
    Chương trình sẽ in ra gì khi chúng ta biên dịch:

    A. 1

    B. 2
    
    C. Chương trình báo lỗi

    D. Chương trình không in ra gì cả

27. Khi thực hiện đoạn chương trình *b*ên dưới, kết quả là:
    ```C++  
    class PhanSo {
    private:
        int _tuso;
        int _mauso;
    public:
        PhanSo(int _tuso, int _mauso) {
            this->_tuso = _tuso;
            this->_mauso = _mauso;
        };
        PhanSo& operator++();
        PhanSo operator++(int);
        friend ostream& operator<<(ostream& os, PhanSo _phanso);
    };

    ostream& operator<<(ostream& os, PhanSo _phanso){
        os << _phanso._tuso << " " << _phanso._mauso;
        return os;
    }

    PhanSo& PhanSo::operator++(){
        this->_tuso = this->_tuso + this->_mauso;
        return *this;
    }

    PhanSo PhanSo::operator++(int){
        PhanSo tmp = *this;
        ++tmp;
        return *this;
    }

    int main(){
        PhanSo phanso(1,2);
        cout << phanso++;
    }
    ```
    A. 3 2

    B. 1 2 

    C. Chương trình báo lỗi

    D. 12

28. Cho đoạn chương trình *d*ưới đây
    ```C++
    class A {
    private:
        int x = 1;
        int y = 2;
    public:
        virtual void Xuat() = 0;
    };

    void A::Xuat(){
        cout << x << y;
        cout <<"A";
    }

    int main(){
        A a;
        a.Xuat();
    }
    ```
    Điều gì xảy ra nếu chúng ta biên dịch chương trình:

    A. Màn hình xuất hiện: 12 A

    B. Màn hình xuất hiện: 1 2A

    C. Màn hình xuất hiện: 12A
    
    D. Chương trình báo lỗi

29. Cho đoạn chương trình *d*ưới đây
    ```C++
    class A{
    public:
        virtual void outPut(){
            cout << "1";
        }
    };

    class B:public A{
    public:
        A::outPut();
        void outPut(){
            cout << "2";
        }
    };

    int main(){
        A *a = new B;
        a->outPut(); 
        delete a;
    }
    ```
    Điều gì xảy ra nếu chúng ta biên dịch chương trình:

    A. Màn hình xuất hiện: 12

    B. Màn hình xuất hiện: 1

    C. Màn hình xuất hiện: 2
    
    D. Chương trình báo lỗi

30. Cho đo*ạ*n chương trình dưới đây
    ```C++
    class A{
    public:
        void outPut(int x) { cout << x; };
        void outPut(float x) { cout << x; };
        void outPut(double x) { cout << x; };
    };

    int main(){
        A a;
        a.outPut(1);
        a.outPut(1.2);
        a.outPut(1.3);
    }
    ```
    Điều gì xảy ra nếu chúng ta biên dịch chương trình:

    A. Màn hình xuất hiện: 11.21.3

    B. Màn hình xuất hiện: 1 1.2 1.3

    C. Chương trình báo lỗi thực thi
    
    D. Chương trình báo lỗi biên dịch

31. Cho đoạn *c*hương trình dưới đây
    ```C++
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

    int main(){
        cls;
        B b;
        b.outPut();
        pause;
    }
    ```
    Điều gì xảy ra nếu chúng ta biên dịch chương trình:

    A. Màn hình xuất hiện: 12

    B. Màn hình xuất hiện: 1

    C. Màn hình xuất hiện: 2
    
    D. Chương trình báo lỗi
# **Đáp án**




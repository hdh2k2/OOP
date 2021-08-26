# **Vấn đề**
## Diamond problem:

- Chương trình
    ```C++
     1 #include<iostream>

     2 #define cls system("cls")
     3 #define pause system("pause")

     4 using namespace std;

     5 class A{
     6 public:
     7     void outPut(){
     8         cout << "1";
     9     }
    10 };

    11 class B: public A{
    12 public:
    13     void outPut(){
    14         cout << "2";
    15     }
    16 };

    17 class C: public A{
    18 public:
    19     void outPut(){
    20         cout << "3";
    21     }
    22 };

    23 class D: public C, B{
    24 public:
    25     void outPut(){
    26         cout << "4";
    27     }
    28 };


    29 int main(){
    30     cls;
    31     A *a = new D();
    32     a->outPut(); // hàm outPut đã được ghi đè
    33     delete a;
    34     pause;
    35 }
    ```
- Bạn hiện tại có 4 lớp: A, B, C, D

    - Lớp cơ sở: A

    - Lớp B và C kế thừa kiểu "public" từ lớp A

    - Lớp D kế thừa kiểu "public" từ lớp B và lớp C

- Sơ đồ lớp hiện hành cho 4 lớp như sau

        A   A  
        |   |
        B   C  
         \ /  
          D 

- Như ở dòng code số 31, bạn đang thực hiện thao tác liên kết động để tạo liên kết giữa lớp cơ sở A với lớp dẫn xuất D. 

    Hơn nữa, tại dòng 32, bạn lại thực hiện ghi đè lời gọi hàm outPut, việc làm này là bất khả thi.

    Lý do: Bạn có thể nhìn sơ đồ lớp phía trên, việc thực hiện lời gọi hàm outPut sẽ khiến compiler bị mơ hồ, không biết bạn gọi đến

    phương thức nào trong lớp nào, vì lớp dẫn xuất A tạo 2 nhánh trong 1 cây kế thừa. 
    
    Lý giải đơn giản hơn: Vì chỉ có 1 lớp cơ sở A, nên B::A và C::A là như nhau, do đó bạn không thể nào có lời gọi hàm outPut từ lớp D.

## Giải pháp 
- Giải pháp đưa ra để giải quyết vấn đề trên: Bạn dùng kế thừa ảo như sau

- Chương trình
    ```C++
     1 #include<iostream>

     2 #define cls system("cls")
     3 #define pause system("pause")

     4 using namespace std;

     5 class A{
     6 public:
     7     void outPut(){
     8         cout << "1";
     9     }
    10 };

    11 class B: virtual public A{
    12 public:
    13     void outPut(){
    14         cout << "2";
    15     }
    16 };

    17 class C: virtual public A{
    18 public:
    19     void outPut(){
    20         cout << "3";
    21     }
    22 };

    23 class D: public C, B{
    24 public:
    25     void outPut(){
    26         cout << "4";
    27     }
    28 };


    29 int main(){
    30     cls;
    31     A *a = new D();
    32     a->outPut(); // hàm outPut đã được ghi đè
    33     delete a;
    34     pause;
    35 }
    ```
- Sơ đồ lớp hiện hành cho 4 lớp như sau

          A  
         / \  
        B   C  
         \ /  
          D 

- Ở dòng số 11 và dòng số 17, tôi đã thêm từ khóa virtual vào dạng kế thừa kiểu public (đây có thể hiểu là kế thừa ảo).
    
    Lúc này, sơ đồ lớp của chúng ta sẽ trở thành 1 vòng khép kín và đặc biệt lớp cơ sở A không còn phân chia nữa.

    Lúc này, việc thực hiện lời gọi hàm outPut từ lớp D là hoàn toàn hợp lí. Vấn đề đã được giải quyết.

## Lời kết
- Vấn đề này thực sự khá quan trọng và thường các bạn rất dễ gặp phải trong quá trình thực hiện đa kế thừa. Các bạn cần lưu ý 

- Mong rằng những lý giải trên có thể giúp bạn hiểu hơn về "diamond problem"



# **Tìm hiểu thêm** 

[Multiple inheritance](https://en.wikipedia.org/wiki/Multiple_inheritance)
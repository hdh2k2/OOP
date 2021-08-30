# **Phần lời giải tham khảo câu 1 và 2**

Câu 1:

a. Hãy trình bày đặt điểm của tính đóng gói (encapsulation) trong lập trình hướng đối tượng. Trường hợp nào có thể vi phạm tính đóng gói? Cho ví dụ minh họa 

Gợi ý:
[01](https://cppdeveloper.com/tutorial/tinh-dong-goi-encapsulation-trong-lap-trinh-huong-doi-tuong/)
[02](https://codelearn.io/sharing/tinh-dong-goi-trong-oop#:~:text=T%C3%ADnh%20%C4%91%C3%B3ng%20g%C3%B3i%20%C4%91%C6%B0%E1%BB%A3c%20th%E1%BB%83%20hi%E1%BB%87n%20khi%20m%E1%BB%97i%20%C4%91%E1%BB%91i%20t%C6%B0%E1%BB%A3ng,%C4%91%C6%B0%E1%BB%A3c%20g%E1%BB%8Di%20l%C3%A0%20ph%C6%B0%C6%A1ng%20th%E1%BB%A9c.&text=%C4%90%C3%B3%20ch%C3%ADnh%20l%C3%A0%20t%C3%ADnh%20%C4%91%C3%B3ng%20g%C3%B3i%20(Encapsulation).)
[03](https://freetuts.net/tinh-dong-goi-encapsulation-trong-java-1125.html)
[04](https://beginnersbook.com/2013/03/oops-in-java-encapsulation-inheritance-polymorphism-abstraction/)


b. Hãy trình bày những ưu điểm của kế thừa trong việc lập trình hướng đối tượng và cho ví dụ minh họa

Gợi ý: [01](https://vn.got-it.ai/blog/tinh-ke-thua-trong-oop-va-cac-loai-ke-thua-ban-can-biet#:~:text=%C6%AFu%20%C4%91i%E1%BB%83m%20c%E1%BB%A7a%20T%C3%ADnh%20k%E1%BA%BF%20th%E1%BB%ABa,-Nh%C3%ACn%20chung%2C%20T%C3%ADnh&text=T%C3%ADnh%20k%E1%BA%BF%20th%E1%BB%ABa%20gi%C3%BAp%20t%C4%83ng,n%C3%A2ng%20cao%20%C4%91%E1%BB%99%20tin%20c%E1%BA%ADy.&text=T%C3%ADnh%20k%E1%BA%BF%20th%E1%BB%ABa%20gi%C3%BAp%20h%E1%BA%A1n,kh%E1%BA%A3%20n%C4%83ng%20m%E1%BB%9F%20r%E1%BB%99ng%20m%C3%A3.)
[02](https://codelearn.io/sharing/tinh-ke-thua-trong-oop)
[03](https://beginnersbook.com/2017/08/cpp-inheritance/)


Câu 2: Cho lớp phân số (CPhanSo). Hãy khai báo và định nghĩa các phương thức cần thiết để các đối tượng thuộc lớp CPhanSo có thể thực hiện được các câu lệnh sau:

```C++
CPhanSo a(5, 3);
CPhanSo b, c, kq;
cin >> b >> c;
kq = a + b + c + 5;
cout << "Kết quả là: " << kq;
if (a == b)
    cout << "Phan so a bang phan so b" << endl;

```

Gợi ý hướng làm

```C++
class CPhanSo(){
private:
    int _tuso;
    int _mauso;
public;
    CPhanSo(){

    }
    CPhanSo(int _tuso, int _mauso){
        this->_tuso = _tuso;
        this->_mauso = _mauso;
    }

    CPhanSo operator+(double x);
    CPhanSo operator+(CPhanSo _phanso);
    bool operator==(const CPhanSo& Ps);

    friend istream& operator>>(istream& nhapPhanSo, CPhanSo& _phanso);
}

bool CPhanSo::operator==(const CPhanSo& Ps) {
    return (this->_tuso * Ps._mauso - this->_mauso * Ps._tuso  == 0);
}

CPhanSo CPhanSo::operator+(CPhanSo _phanso){
    CPhanSo res = this;
    res._tuso = this->_tuso * _phanso._mauso + this->_mauso * _phanso._tuso;
    res._mauso = this->_mauso*_phanso._mauso;
    return res;
}

CPhanSo CPhanSo::operator+(double x) {
    PHANSO res;
    res._tuso_ = this->_tuso * 1 + x * this->_mauso;
    res._mauso = this->_mauso ;
    return res;
}

istream& operator>>(istream& nhapPhanSo, CPhanSo& _phanso){
    nhapPhanSo >> this->_tuso >> this->_mauso;
    return nhapPhanSo; 
}

```

# **Xem thêm**
[Source code lời giải bài phân số](https://github.com/hieuhdh/OOP/tree/master/Practice/04/BTH6/PhanSo_DaSua)

# Note

Phía trên là 2 bài code giải đề thi cuối kì **2019-2020**

**Lưu ý:** 
- Bài code trong thư mục deu chỉ phục vụ cho việc rèn luyện kĩ năng như:
	- 4 tính chất của oop, liên kết động, sửa lỗi diamond
	- Vì thời gian dự thi có hạn nên đoạn code trên không phục vụ cho việc làm bài trong giờ thi, cũng như chưa triệt để các lớp đối tượng cần thiết. 
- Bài code trong thư mục CodeGiay chính là lời giải hoàn chỉnh, phù hợp cho việc giải đề trên giấy trong giờ thi, ngoài ra bạn cũng có thể dùng tiếng việt không dấu trong code.
      

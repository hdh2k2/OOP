# **Phần lời giải tham khảo câu 1 và 2**

Câu 1:

a. Phân biệt khái niệm overload (tải chồng) và override (ghi đè) 

1. Override phải dựa trên một phương thức từ mối quan hệ IS-A, còn Overload không nhất thiết phải như vậy. Override có thể xảy ra trong một lớp.


2. Các phương thức Overriding được chọn dựa trên kiểu đối tượng, trong khi các phương thức Overloading được chọn dựa trên kiểu biến (tham chiếu).

3. Overriding xảy ra tại thời điểm chạy, trong khi Overloading xảy ra tại thời gian biên dịch.

b. Phân biệt các kiểu kế thừa private, protected, public

1. Kế thừa kiểu private: Các thuộc tính thuộc tầm vực Protected và Public của lớp cơ sở sau khi kế thừa xuống lớp dẫn xuất, các thuộc tính đó sẽ có tầm vực Private ở lớp dẫn xuất.

2. Kế thừa kiểu protected: Các thuộc tính thuộc tầm vực Protected và Public của lớp cơ sở sau khi kế thừa xuống lớp dẫn xuất, các thuộc tính đó sẽ lần lượt có tầm vực Protected và Public ở lớp dẫn xuất.

3. Kế thừa kiểu public: Các thuộc tính thuộc tầm vực Protected và Public của lớp cơ sở sau khi kế thừa xuống lớp dẫn xuất, các thuộc tính đó sẽ có tầm vực Public ở lớp dẫn xuất.

Câu 2: Xây dựng các lớp thời gian (giờ, phút, giây) với các toán tử >>, << để nhập xuất và toán tử ++ để tăng thời gian thêm 1 giây.

```C++
class ThoiGian(){
private:
    int _gio;
    int _phut;
    int _giay;
public;
    ThoiGian& operator ++(){
        this->_giay ++;
        return *this;
    }

    friend istream& operator>>(istream& nhapThoiGian, ThoiGian& _thoigian);
    friend ostream& operator<<(ostream& xuatThoiGian, const ThoiGian& _thoigian);
}

istream& operator>>(istream& nhapThoiGian, ThoiGian& _thoigian){
    nhapThoiGian >> this->_gio >> this->_phut >> this-> _giay;
    return nhapThoiGian; 
}

ostream& operator<<(ostream& xuatThoiGian, const ThoiGian& _thoigian){
    xuatThoiGian << this->_gio << ":" << this->_phut << ":" << this->_giay;
    return xuatThoiGian;
}

```

# **Xem thêm**
[Source code lời giải bài thời gian](https://github.com/hieuhdh/OOP/tree/master/Practice/04/BTH6/BT_Buoi4_BTH6_operator_overloading/BT3_va_BT4)
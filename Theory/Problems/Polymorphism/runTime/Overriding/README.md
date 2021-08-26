# Quy tắc ghi đè một phương thức:

1. Nó phải là một phương thức được xác định thông qua mối quan hệ IS-A (thông qua mở rộng hoặc thực hiện). Đây là lý do tại sao bạn có thể thấy nó được gọi là đa hình kiểu con.

2. Nó phải có cùng danh sách đối số như định nghĩa phương thức ban đầu.
Nó phải có cùng kiểu trả về hoặc kiểu trả về là lớp con của kiểu trả về của định nghĩa phương thức ban đầu.

3. Nó không thể có công cụ sửa đổi quyền truy cập hạn chế hơn.

4. Nó có thể có một công cụ sửa đổi quyền truy cập ít hạn chế hơn.

5. Nó không được thông qua một ngoại lệ mới hoặc đã kiểm tra rộng hơn.

6. Nó có thể thông qua 1 cách hẹp hơn, ít hơn hoặc không có ngoại lệ được kiểm tra, ví dụ: một phương thức khai báo IOException có thể bị ghi đè bởi một phương thức khai báo một FileNotFoundException (vì nó là một lớp con của IOException).

7. Phương thức ghi đè có thể ném ra bất kỳ ngoại lệ nào chưa được kiểm tra, bất kể phương thức ghi đè có khai báo ngoại lệ hay không.

# Tìm hiểu thêm

[Tại đây](https://www.freecodecamp.org/news/polymorphism-in-java-tutorial-with-object-oriented-programming-example-code/)
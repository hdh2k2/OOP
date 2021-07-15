/*

		6.	Một nông trại chăn nuôi có 3 loại gia súc: bò, cừu, và dê. Mỗi loại gia súc đều có thể 
			sinh con, cho sữa và phát ra tiếng kêu riêng của chúng. Khi đói, các gia súc sẽ phát ra tiếng 
			kêu để đòi ăn. Sau một thời gian chăn nuôi, người chủ nông trại muốn thống kê xem trong nông trại 
			có bao nhiêu gia súc ở mỗi loại, tổng số lit sữa mà tất cả các gia súc của ông đã cho. 

			
			Áp dụng kế thừa, xây dựng chương trình cho phép người chủ nông trại nhập vào số lượng gia súc ban đầu ở mỗi loại.
					a. Một hôm người chủ nông trại đi vắng, tất cả gia súc trong nông trại đều đói. 
					Hãy cho biết những tiếng kêu nghe được trong nông trại.

					b. Chương trình sẽ đưa ra thống kê các thông tin người chủ mong muốn (nêu trên) sau một lứa 
					sinh và một lược cho sữa của tất cả gia súc. Biết rằng:
							-    Tất cả gia súc ở mỗi loại đều sinh con.
							-    Số lượng sinh của mỗi gia súc là ngẫu nhiên.
							-    Tất cả gia súc ở mỗi loại đều cho sữa.
							-    Số lit sữa mỗi gia súc cho là ngẫu nhiên nhưng trong giới hạn sau:
										•   Bò: 0 – 20 lít.
										•   Cừu: 0 – 5 lít.
										•   Dê: 0 – 10 lít.


*/
#pragma comment(lib, "winmm.lib")
#include<iostream>
#include<windows.h>
#include"NongTrai.h"
using namespace std;


int main() {
	//system("color f0");
	//system("color f08");

	NongTrai* x = new NongTrai;
	x->MENU();

	delete x;
	system("pause");
	/*
		Giải thích test: Giả sử lúc đầu số lượng gia súc trong trang trại là 0 con, thì nhập 1 con bò sẽ không cho ra con và sữa 
				 	 	 (input 0), add lần nữa thành 2 con bò có thể cho ra con và sữa và cứ các con sinh ra lớn lên có thể cộng 
						 dồn lượng con sinh ra hoặc chỉ có 2 con bố mẹ sinh ra tiếp. 
	*/
}
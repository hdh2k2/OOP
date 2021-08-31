#include"QuanLi.h"

/* Test mẫu

2000 1200
4
3 1 2 0
2
200 800
1
1000
4
400 500 900 100
3
200 200 0

*/

int main() {
	QuanLi* _quanli = new QuanLi;
	_quanli->run();
	delete _quanli;
}
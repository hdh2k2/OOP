#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main() {
	int i = 1;
	cout << ++i + ++i + i++ + ++i + i++;
}
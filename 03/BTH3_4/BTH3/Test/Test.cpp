#include "IntegerArray.h"
#include<iostream>

using namespace std;

int main()
{
	IntegerArray   a(3);

	a[0] = 0; a[1] = 1; a[2] = 2;

	a.ElementAt(1) = 3;
	a.ElementAt(2) = 4;

	for (int i = 0; i < a.GetLength(); i++)
		cout << a[i] << endl;
}

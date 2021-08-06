#include <iostream>
#include "IntegerArray.h"
using namespace std;

IntegerArray::IntegerArray(int iLength)
{
	if (iLength < 0)
	{
		cout << "Loi: chieu dai mang la so am.";
		return;
	}

	m_iLength = iLength;
	m_pElement = new int[m_iLength];
}

int IntegerArray::GetLength()
{
	return m_iLength;
}

int& IntegerArray::ElementAt(int iIndex)
{
	if (iIndex < 0 || iIndex >= m_iLength)
		cout << "Loi: truy xuat phan tu ngoai pham vi mang.";

	return m_pElement[iIndex];
}

int& IntegerArray::operator [](int iIndex)
{
	return ElementAt(iIndex);
}

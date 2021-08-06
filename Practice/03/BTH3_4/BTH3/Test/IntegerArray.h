class IntegerArray
{
private:
	int* m_pElement;
	int       m_iLength;


public:
	IntegerArray(int iLength);

	int GetLength();
	int& ElementAt(int iIndex);
	int& operator [](int iIndex);

};





#include <iostream>
using namespace std;

class Temp
{
private:
	int TEMP;
public:
	Temp()
	{
		TEMP = 25;
	}
	void TempFunction()
	{
		cout << "TEMP: " << TEMP << endl;
	}
	void SetTemp(int T)
	{
		TEMP = T;
	}
};

class MyPtr
{
private:
	Temp Temp *ptr;
public:
	MyPtr(Temp *p = NULL)
	{
		ptr = p;
	}
	operator Temp *()
	{
		return ptr;
	}
	Temp *operator->()
	{
		return ptr;
	}
	MyPtr operator++()
	{
		ptr++;
		return *this;
	}
};

void main()
{
	Temp *main_ptr = new Temp;
	main_ptr->TempFunction();
	MyPtr pTemp(main_ptr);
	pTemp->TempFunction();
	
	Temp *arr_ = new Temp[3];
	for (int i = 0; i < 3; ++i)
	{
		arr_[i].SetTemp(i);
	}
}
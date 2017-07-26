#include <iostream>
using namespace std;
class Temp
{
private:
	int TEMP;
public:
	Temp() { TEMP = 25; }
	void TempFunction()
	{
		cout << "TEMP = " << TEMP << endl;
	}
	void TempSet(int T)
	{
		TEMP = T;
	}
};

class SmartPointer
{
private:
	Temp *ptr;
	int count_copy;
public:
	SmartPointer(Temp *p = NULL)
	{
		count_copy = 0;
		ptr = p;
	}
	
	SmartPointer(const SmartPointer &obj)
	{
		ptr = obj.ptr;
		count_copy++;
	}

	SmartPointer operator=(const SmartPointer &obj)
	{
		ptr = obj.ptr;
		ptr = obj.ptr;
		count_copy++;
		return *this;
	}

	~SmartPointer()
	{
		if (ptr != NULL && count_copy == 0)
		{
			cout << "\n~Delete Obj\n";
			delete[]ptr;
		}
		else
		{
			count_copy--;
			cout << "\n~Delete copy\n";
		}
	}

	Temp *operator->()
	{
		return ptr;
	}
};

void main()
{
	Temp *main_ptr = new Temp;
	SmartPointer PTR(main_ptr);
	PTR->TempSet(100);
	PTR->TempFunction();
	SmartPointer PTR2 = PTR;
}
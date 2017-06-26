#include <iostream>
using namespace std;

class A
{
private:
	int a[10];
	int size;
public:
	A()
	{
		size = 10;
		for (int i = 0; i < 10; i++)
		{
			a[i] = i + 1;
		}
	}
	int &operator[](int j)
	{
		return a[j];
	}
	int Get() const
	{
		return size;
	}
};

void main()
{
	A obj;
	cout << "ont obj:\n";
	for (int i = 0; i < obj.Get(); i++)
	{
		cout << obj[i] << " ";

		cout << "\n\n";
		A array[3];
		cout << "Array of obj:\n";
		for (int j = 0; j < obj.Get(); j++)
		{
			cout << array[i][j] << " ";
		}
	}
}
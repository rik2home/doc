#include <iostream>
using namespace std;

#include <malloc.h>

class SomeClass
{
private:
	int some;
public:
	void *operator new(size_t size, char *str = "New");
	void operator delete(void *ptr);
	void *operator new[](size_t fullsize, char *str = "New []");
	void operator delete[](void *ptr);
};

void *SomeClass::operator new (size_t size, char *str)
{
	cout << "\n" << str << "\n";
	void *ptr = malloc(size);
	if (!ptr)
	{
		cout << "\nError memory new!!!\n";
	}
	else
	{
		cout << "\nMemory new - OK!!!\n";
	}
	return ptr;
}

void *SomeClass::operator new[](size_t fullsize, char *str)
{
	cout << "\n" << str << "\n";
	void *ptr = malloc(fullsize);
	if (!ptr)
	{
		cout << "\nError memory new[]!!!\n";
	}
	else
	{
		cout << "\nMemory new[]- OK\n";
	}
	return ptr;
}

void SomeClass::operator delete (void *ptr)
{
	cout << "\nDelete memory\n";
}

void SomeClass::operator delete[](void *ptr)
{
	free(ptr);
	cout << "\nDelete [] memory\n";
}

void main()
{
	SomeClass *p = new SomeClass;
	SomeClass *r = new SomeClass[3];
	delete p;
	delete[]r;
}
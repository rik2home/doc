#include "Persone.h"
#include <iostream>

inline Persone::Persone()
{
	Name = "defName";
	Age = 0;
	Sex = "NoSex";
	TelNum = "No tel num";
}

inline Persone::Persone(string name, int age, string sex, string telnum)
{
	Name = name;
	Age = age;
	Sex = sex;
	TelNum = telnum;
}

inline void Persone::setName(string name)
{
	Name = name;
}

inline void Persone::setAge(int age)
{
	Age = age;
}

inline void Persone::setSex(string sex)
{
	Sex = sex;
}

inline void Persone::setTel(string telnum)
{
	TelNum = telnum;
}

inline void Persone::Print()
{
	cout << Name << "\t" << Age << "\t" << Sex << "\t" << TelNum << endl;
}

void main()
{
	Persone A;
	A.Print();
	A.setName("Ivan");
	A.setAge(23);
	A.setSex("man");
	A.setTel("734-342-34");
	A.Print();
	Persone B("Ruslan", 43, "man", "12312-12313-23");
	B.Print();
}


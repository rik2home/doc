#ifndef PERSONE_H
#define PERSONE_H
#include <string>
using namespace std;
class Persone
{
private:
	string Name;
	int Age;
	string Sex;
	string TelNum;
public:
	Persone();
	Persone(string name, int age, string sex, string telnum);
	void setName(string name);
	void setAge(int age);
	void setSex(string sex);
	void setTel(string telnum);
	void Print();
	~Persone() {};
};


#endif
#ifndef PERSONAL_H
#define PERSONAL_H

using namespace std;

class Personal
{
private:
	char *picture_data;
	char *name;
	int age;
public:
	Personal(char *p, char *n, int a);
	const char *Name()const { return name; }
	int Age() const { return age; }
	const char *Picture() { return picture_data; }
	void SetName(const char *n);
	void SetAge(int a);
	void SetPicture(const char *p);
};
#endif // !PERSONAL_H

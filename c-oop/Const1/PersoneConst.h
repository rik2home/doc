#ifndef PERSONE_CONST_H
#define PERSONE_CONST_H
#include <string.h>

class Persone
{
private:
	char *picture_data;
	char *name;
	int age;
public:
	Persone(char *p, char *n, int a);
	const char *Name() const { return name; }
	int Age() const { return age; }
	const char *Picture() const { return picture_data; }

	void SetName(const char *n) {
		strcpy(name, n);
	}
	void SetAge(int a) {
		age = a;
	}
	void SetPicture(const char *p) {
		strcpy(picture_data, p);
	}
};
#endif // !PERSONECONST_H

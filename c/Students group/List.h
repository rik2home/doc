#ifndef __LIST_H__
#define __LIST_H__

struct Date
{
	unsigned day;
	unsigned month;
	unsigned year;
};

struct Address
{
	char *country;
	char *city;
	char *streetName;
	unsigned streetNum;
	unsigned postIndex;
};

struct List
{
	char *name;
	char *surname;
	Date birthday;
	char *sex;
	char *phoneNum;
	Address address;
};

void AddMemory(List *&list, int &size);
void DeleteMemory(List *&list, int &size);

void AddSubsc(List *&list, int &size);
void DeleteCertainSubsc(List *&list, int &size);
void DeleteAllSubsc(List *&list, int &size);

void InputData(List *list, int i);
void OutputData(List *list, int i);

int SubscNum(int size);

void ChangeCertainSubsc(List *list, int size);
void ChangeCertainField(List *list, int i);

void ShowCertainSubsc(List *list, int size);
void ShowAllSubsc(List *list, int size);

void SaveToFile(List *list, int size);
void LoadFromFile(List *&list, int &size);

void SearchSubsc(List *list, int size);
void SortSubscBySurname(List *&list, int size);

void Exit(List *&list);

#endif

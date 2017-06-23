#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "List.h"
using namespace std;

int SubscNum(int size)
{
	int n = 0;

	cout << "Введите номер абонента (от 1 до " << size << "): " << flush;
	cin >> n;
	cout << endl << endl;

	if (n < 1 || n > size)
	{
		cout << "Абонента под таким номером не существует!!!\n\n" << flush;
		return -1;
	}

	return n - 1;
}

void DeepCopy(char *&temp, char *&cur)
{
	temp = new char[strlen(cur) + 1];
	strcpy(temp, cur);
}

void AddMemory(List *&list, int &size)
{
	if (size == 0)
	{
		list = new List[1];
	}
	else
	{
		List *temp = new List[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];

			DeepCopy(temp[i].name, list[i].name);
			DeepCopy(temp[i].surname, list[i].surname);
			DeepCopy(temp[i].sex, list[i].sex);
			DeepCopy(temp[i].phoneNum, list[i].phoneNum);
			DeepCopy(temp[i].address.country, list[i].address.country);
			DeepCopy(temp[i].address.city, list[i].address.city);
			DeepCopy(temp[i].address.streetName, list[i].address.streetName);
		}
		delete[]list;
		list = temp;
	}
	list[size].name = new char[30];
	list[size].surname = new char[50];
	list[size].sex = new char[20];
	list[size].phoneNum = new char[20];
	list[size].address.country = new char[30];
	list[size].address.city = new char[50];
	list[size].address.streetName = new char[50];

	size++;
}

void DeleteMemory(List *&list, int &size)
{
	if (size == 1)
	{
		delete[]list;
		list = nullptr;
	}
	else
	{
		int n = SubscNum(size);

		List *temp = new List[size - 1];
		for (int i = 0; i < n; i++)
		{
			temp[i] = list[i];

			DeepCopy(temp[i].name, list[i].name);
			DeepCopy(temp[i].surname, list[i].surname);
			DeepCopy(temp[i].sex, list[i].sex);
			DeepCopy(temp[i].phoneNum, list[i].phoneNum);
			DeepCopy(temp[i].address.country, list[i].address.country);
			DeepCopy(temp[i].address.city, list[i].address.city);
			DeepCopy(temp[i].address.streetName, list[i].address.streetName);
		}
		for (int i = n + 1; i < size; i++)
		{
			temp[i - 1] = list[i];

			DeepCopy(temp[i - 1].name, list[i].name);
			DeepCopy(temp[i - 1].surname, list[i].surname);
			DeepCopy(temp[i - 1].sex, list[i].sex);
			DeepCopy(temp[i - 1].phoneNum, list[i].phoneNum);
			DeepCopy(temp[i - 1].address.country, list[i].address.country);
			DeepCopy(temp[i - 1].address.city, list[i].address.city);
			DeepCopy(temp[i - 1].address.streetName, list[i].address.streetName);
		}
		delete[]list;
		list = temp;
	}	
	size--;
}

void InputData(List *list, int i)
{
	cout << "Имя: " << flush;
	/*cin.ignore(1);*/
	cin.getline(list[i].name, 30);
	cout << "Фамилия: " << flush;
	cin.getline(list[i].surname, 50);
	cout << "Дата рождения\nдень: " << flush;
	cin >> list[i].birthday.day;
	cout << "месяц: " << flush;
	cin >> list[i].birthday.month;
	cout << "год: " << flush;
	cin >> list[i].birthday.year;
	cout << "Пол: " << flush;
	cin.ignore(1);
	cin.getline(list[i].sex, 20);
	cout << "Номер телефона: " << flush;
	cin.getline(list[i].phoneNum, 20);
	cout << "Адрес\nСтрана: " << flush;
	cin.getline(list[i].address.country, 20);
	cout << "Город: " << flush;
	cin.getline(list[i].address.city, 20);
	cout << "Улица: " << flush;
	cin.getline(list[i].address.streetName, 30);
	cout << "Номер дома: " << flush;
	cin >> list[i].address.streetNum;
	cout << "Почтовый индекс: " << flush;
	cin >> list[i].address.postIndex;
	cout << endl << endl;
}

void OutputData(List *list, int i)
{
	cout << "**********************************************\n";
	cout << "\tАбонент № " << i + 1 << endl << endl;
	cout << "Имя: " << list[i].name << endl;
	cout << "Фамилия: " << list[i].surname << endl;
	printf("День рождения: %02d.%02d.%4d\n", list[i].birthday.day, list[i].birthday.month, list[i].birthday.year);
	cout << "Пол: " << list[i].sex << endl;
	cout << "Номер телефона: " << list[i].phoneNum << endl;
	cout << "Страна: " << list[i].address.country << endl;
	cout << "Город: " << list[i].address.city << endl;
	cout << "Улица: " << list[i].address.streetName << endl;
	cout << "Номер дома: " << list[i].address.streetNum << endl;
	cout << "Почтовый индекс: " << list[i].address.postIndex << endl;
	cout << "**********************************************\n\n";
}

void AddSubsc(List *&list, int &size)
{
	AddMemory(list, size);
	InputData(list, size - 1);

	cout << "Новый абонент был успешно добавлен!\n\n" << flush;
}

void DeleteCertainSubsc(List *&list, int &size)
{
	if (size == 0)
	{
		cout << "Список абонентов пуст!\n\n" << flush;
		return;
	}

	DeleteMemory(list, size);

	if (size)
		cout << "Абонент был успешно удален!\n\n" << flush;
	else  
		cout << "Список абонентов теперь пуст!\n\n" << flush;
}

void DeleteAllSubsc(List *&list, int &size)
{
	if (size == 0)
	{
		cout << "Список абонентов пуст!\n\n" << flush;
		return;
	}

	delete[]list;
	list = nullptr;
	size = 0;

	cout << "Список абонентов теперь пуст!\n\n" << flush;
}

void ShowCertainSubsc(List *list, int size)
{
	if (size == 0)
	{
		cout << "Список абонентов пуст!!!\n\n" << flush;
		return;
	}

	int i = SubscNum(size);
	if (i != -1)
		OutputData(list, i);
}

void ShowAllSubsc(List *list, int size)
{
	if (size == 0)
	{
		cout << "Список абонентов пуст!!!\n\n" << flush;
		return;
	}

	for (int i = 0; i < size; i++)
		OutputData(list, i);
}

void ChangeCertainSubsc(List *list, int size)
{
	if (size == 0)
	{
		cout << "Список абонентов пуст!!!\n\n" << flush;
		return;
	}

	int i = SubscNum(size);
	if (i != -1)
		ChangeCertainField(list, i);
}

void ChangeCertainField(List *list, int i)
{
	char choice = 0;

	cout << "Что вы хотели бы изменить?\n"
			"1. Имя абонента\n"
			"2. Фамилия абонента\n"
			"3. Дата рождения\n"
			"4. Пол\n"
			"5. Номер телефона\n"
			"6. Aдрес\n"
			"7. Всю инфoрмацию\n" << flush;
	choice = _getch();

	if (choice < '1' || choice > '7')
	{
		cout << "Данных с таким номером не существует!\n\n" << flush;
		return;
	}

	switch (choice - '0')
	{
	case 1:
		cout << "Новое имя: " << flush;
		cin.ignore(1);
		cin.getline(list[i].name, 30);
		break;
	case 2:
		cout << "Новая фамилия: " << flush;
		cin.ignore(1);
		cin.getline(list[i].surname, 50);
		break;
	case 3:
		cout << "Новая дата рождения: \n";
		cout << "День: " << flush;
		cin.ignore(1);
		cin >> list[i].birthday.day;
		cout << "Месяц: " << flush;
		cin >> list[i].birthday.month;
		cout << "Год: " << flush;
		cin >> list[i].birthday.year;
		break;
	case 4:
		cout << "Новый пол: " << flush;
		cin.ignore(1);
		cin.getline(list[i].sex, 20);
		break;
	case 5:
		cout << "Новый номер телефона: " << flush;
		cin.ignore(1);
		cin.getline(list[i].phoneNum, 20);
		break;
	case 6:
		cout << "Новый адрес\n";
		cout << "Страна: " << flush;
		cin.ignore(1);
		cin.getline(list[i].address.country, 20);
		cout << "Город: " << flush;
		cin.getline(list[i].address.city, 20);
		cout << "Улица: " << flush;
		cin.getline(list[i].address.streetName, 30);
		cout << "Номер дома: " << flush;
		cin >> list[i].address.streetNum;
		cout << "Почтовый индекс: " << flush;
		cin >> list[i].address.postIndex;
		break;
	case 7:
		InputData(list, i);
		break;
	}

	cout << "Информация успешно обновлена!\n\n" << flush;
}

void SaveFields(List list, FILE *stream)
{
	// Name
	int len = strlen(list.name);
	fwrite(&len, sizeof(len), 1, stream);
	fwrite(list.name, sizeof(char), len, stream);

	// Surname
	len = strlen(list.surname);
	fwrite(&len, sizeof(len), 1, stream);
	fwrite(list.surname, sizeof(char), len, stream);

	// Birthday
	fwrite(&list.birthday.day, sizeof(list.birthday.day), 1, stream);
	fwrite(&list.birthday.month, sizeof(list.birthday.month), 1, stream);
	fwrite(&list.birthday.year, sizeof(list.birthday.year), 1, stream);

	// Sex
	len = strlen(list.sex);
	fwrite(&len, sizeof(len), 1, stream);
	fwrite(list.sex, sizeof(char), len, stream);

	// Phone number
	len = strlen(list.phoneNum);
	fwrite(&len, sizeof(len), 1, stream);
	fwrite(list.phoneNum, sizeof(char), len, stream);

	// Address
	// Country
	len = strlen(list.address.country);
	fwrite(&len, sizeof(len), 1, stream);
	fwrite(list.address.country, sizeof(char), len, stream);

	// City
	len = strlen(list.address.city);
	fwrite(&len, sizeof(len), 1, stream);
	fwrite(list.address.city, sizeof(char), len, stream);

	// Street name
	len = strlen(list.address.streetName);
	fwrite(&len, sizeof(len), 1, stream);
	fwrite(list.address.streetName, sizeof(char), len, stream);

	// Street number
	fwrite(&list.address.streetNum, sizeof(list.address.streetNum), 1, stream);
	// Post index
	fwrite(&list.address.postIndex, sizeof(list.address.postIndex), 1, stream);
	//// Name
	//int len = strlen(list[i].name);
	//fwrite(&len, sizeof(len), 1, stream);
	//fwrite(list[i].name, sizeof(char), len, stream);

	//// Surname
	//len = strlen(list[i].surname);
	//fwrite(&len, sizeof(len), 1, stream);
	//fwrite(list[i].surname, sizeof(char), len, stream);

	//// Birthday
	//fwrite(&list[i].birthday.day, sizeof(list[i].birthday.day), 1, stream);
	//fwrite(&list[i].birthday.month, sizeof(list[i].birthday.month), 1, stream);
	//fwrite(&list[i].birthday.year, sizeof(list[i].birthday.year), 1, stream);

	//// Sex
	//len = strlen(list[i].sex);
	//fwrite(&len, sizeof(len), 1, stream);
	//fwrite(list[i].sex, sizeof(char), len, stream);

	//// Phone number
	//len = strlen(list[i].phoneNum);
	//fwrite(&len, sizeof(len), 1, stream);
	//fwrite(list[i].phoneNum, sizeof(char), len, stream);

	//// Address
	//// Country
	//len = strlen(list[i].address.country);
	//fwrite(&len, sizeof(len), 1, stream);
	//fwrite(list[i].address.country, sizeof(char), len, stream);

	//// City
	//len = strlen(list[i].address.city);
	//fwrite(&len, sizeof(len), 1, stream);
	//fwrite(list[i].address.city, sizeof(char), len, stream);

	//// Street name
	//len = strlen(list[i].address.streetName);
	//fwrite(&len, sizeof(len), 1, stream);
	//fwrite(list[i].address.streetName, sizeof(char), len, stream);

	//// Street number
	//fwrite(&list[i].address.streetNum, sizeof(list[i].address.streetNum), 1, stream);
	//// Post index
	//fwrite(&list[i].address.postIndex, sizeof(list[i].address.postIndex), 1, stream);
}

void SaveToFile(List *list, int size)
{
	if (size == 0)
	{
		cout << "Список абонентов пуст!!!\n\n" << flush;
		return;
	}

	FILE *stream;

	if ((stream = fopen("Phonebook.txt", "w")) == NULL)
	{
		cout << "Cannot open file.\n\n" << flush;
		return;
	}

	fwrite(&size, sizeof(size), 1, stream);
	for (int i = 0; i < size; i++)
		SaveFields(list[i], stream);

	if (!ferror(stream))
		cout << "Данные успешно записаны.\n\n" << flush;

	fflush(stream);
	fclose(stream);
}

void LoadFields(List &list, FILE *stream)
{
	int len = 0;
	
	// Name
	fread(&len, sizeof(len), 1, stream);
	if (strlen(list.name) != len + 1)
	{
		delete[]list.name;
		list.name = new char[len + 1];
	}
	fread(list.name, sizeof(char), len, stream);
	list.name[len] = '\0';

	// Surname
	fread(&len, sizeof(len), 1, stream);
	if (strlen(list.surname) != len + 1)
	{
		delete[]list.surname;
		list.surname = new char[len + 1];
	}
	fread(list.surname, sizeof(char), len, stream);
	list.surname[len] = '\0';

	// Birthday
	fread(&list.birthday.day, sizeof(list.birthday.day), 1, stream);
	fread(&list.birthday.month, sizeof(list.birthday.month), 1, stream);
	fread(&list.birthday.year, sizeof(list.birthday.year), 1, stream);

	// Sex
	fread(&len, sizeof(len), 1, stream);
	if (strlen(list.sex) != len + 1)
	{
		delete[]list.sex;
		list.sex = new char[len + 1];
	}
	fread(list.sex, sizeof(char), len, stream);
	list.sex[len] = '\0';

	// Phone number
	fread(&len, sizeof(len), 1, stream);
	if (strlen(list.phoneNum) != len + 1)
	{
		delete[]list.phoneNum;
		list.phoneNum = new char[len + 1];
	}
	fread(list.phoneNum, sizeof(char), len, stream);
	list.phoneNum[len] = '\0';

	// Address
	// Country
	fread(&len, sizeof(len), 1, stream);
	if (strlen(list.address.country) != len)
	{
		delete[]list.address.country;
		list.address.country = new char[len + 1];
	}
	fread(list.address.country, sizeof(char), len, stream);
	list.address.country[len] = '\0';

	// City
	fread(&len, sizeof(len), 1, stream);
	if (strlen(list.address.city) != len + 1)
	{
		delete[]list.address.city;
		list.address.city = new char[len + 1];
	}
	fread(list.address.city, sizeof(char), len, stream);
	list.address.city[len] = '\0';

	// Street name
	fread(&len, sizeof(len), 1, stream);
	if (strlen(list.address.streetName) != len + 1)
	{
		delete[]list.address.streetName;
		list.address.streetName = new char[len + 1];
	}
	fread(list.address.streetName, sizeof(char), len, stream);
	list.address.streetName[len] = '\0';

	// Street number
	fread(&list.address.streetNum, sizeof(list.address.streetNum), 1, stream);
	// Post index
	fread(&list.address.postIndex, sizeof(list.address.postIndex), 1, stream);
}

void LoadFromFile(List *&list, int &size)
{
	FILE *stream;

	if ((stream = fopen("Phonebook.txt", "r")) == NULL)
	{
		cout << "Cannot open file.\n\n" << flush;
		return;
	}

	int newSize;
	fread(&newSize, sizeof(newSize), 1, stream);

	if (size != newSize)
	{
		delete[]list;
		list = new List[newSize];
		for (int i = 0; i < newSize; i++)
		{
			list[i].name = new char[30];
			list[i].surname = new char[50];
			list[i].sex = new char[20];
			list[i].phoneNum = new char[20];
			list[i].address.country = new char[30];
			list[i].address.city = new char[50];
			list[i].address.streetName = new char[50];
		}
		size = newSize;
	}

	for (int i = 0; i < size; i++)
		LoadFields(list[i], stream);

	if (!ferror(stream))
		cout << "Данные успешно загружены.\n\n" << flush;

	fflush(stream);
	fclose(stream);
}

void SearchSubsc(List *list, int size)
{
	char *search;
	search = new char[50];

	int count = 0;

	cout << "Ключевое слово поиска: " << flush;
	cin.getline(search, 50);
	search = _strlwr(search);

	char cur[50] = "\0";
	
	for (int i = 0; i < size; i++)
	{
		if ((strstr(_strlwr((char *)memcpy(cur, list[i].name, sizeof(list[i].name))), search) != NULL)
		 || (strstr(_strlwr((char *)memcpy(cur, list[i].surname, sizeof(list[i].surname))), search) != NULL)
		 || (strstr(_strlwr((char *)memcpy(cur, list[i].sex, sizeof(list[i].sex))), search) != NULL)
	 	 || (strstr(_strlwr((char *)memcpy(cur, list[i].phoneNum, sizeof(list[i].phoneNum))), search) != NULL)
		 || (strstr(_strlwr((char *)memcpy(cur, list[i].address.country, sizeof(list[i].address.country))), search) != NULL)
	     || (strstr(_strlwr((char *)memcpy(cur, list[i].address.city, sizeof(list[i].address.city))), search) != NULL)
		 || (strstr(_strlwr((char *)memcpy(cur, list[i].address.streetName, sizeof(list[i].address.streetName))), search) != NULL))
		{
			OutputData(list, i);
			count++;
		}
	}

	if (count == 0)
		cout << "Соответствий не найдено!\n\n" << flush;
	else
		cout << "Найдено " << count << " записей по Вашему запросу.\n\n" << flush;

	delete[]search;
}

void Exit(List *&list)
{
	delete[]list;
	exit(0);
}


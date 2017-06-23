#include <iostream>
#include <string.h>
using namespace std;
class string_
{
private:
	//������
	char* S;
	//����� ������
	int len;
public:
	//����������� �� ���������
	//��� ����������
	string_();
	//������������� �����������
	//� ����������
	string_(char* s);
	//����������� �����������
	string_(const string_& s);
	//����������
	~string_() {
		delete[] S;
	}
	//����� ����������
	void Sort(string_ s[], int n);
	//����������� �����
	//������������ ����������
	//������
	const char*GetStr()const
	{
		return S;
	}
	//����� ����������� �������� ����������
	//� ������� ������������
	void SetStr()
	{
		//���� ������ �� ������ - ��������
		if (S != NULL)
			delete[]S;
		//������� ������
		//� ����������� � ������������ ������
		char a[256];
		cin.getline(a, 256);
		//������������ ������
		len = strlen(a) + 1;
		//�������� ������
		S = new char[len];
		//������������ � ������
		//��������� ������
		strcpy_s(S, strlen(a), a);
	}
	//����� ����������� �������� ����������
	//� ������� ���������
	void SetStr2(char*str)
	{
		//���� ������ �� ������ - ��������
		if (S != NULL)
			delete[]S;
		//������������ ������
		len = strlen(str) + 1;
		//�������� ������
		S = new char[len];
		//������������ � ������
		//��������� ������
		strcpy_s(S, strlen(str), str);
	}
};
string_::string_()
{
	//��������� �������������
	S = NULL;
	len = 0;
}
string_::string_(char* s)
{
	len = strlen(s);
	S = new char[len + 1];
	//������������� �������,
	//���������� �������������
	strcpy_s(S, strlen(s), s);
}
string_::string_(const string_& s)
{
	len = s.len;
	//���������� �����������
	S = new char[len + 1];
	strcpy_s(S, strlen(s.S), s.S);
}
void string_::Sort(string_ s[], int n)
{
	//���������� �����
	//������� ��������
	string_ temp;
	for (int i = 0; i<n - 1; i++)
	{
		for (int j = n - 1; j>i; j--)
		{
			//��������� ���� �����
			if (strcmp(s[j].S, s[j - 1].S)<0)
			{
				//������ ������ s[j] � temp
				temp.SetStr2(s[j].S);
				//������ ������ s[j-1] � s[j]
				s[j].SetStr2(s[j - 1].S);
				//������ ������ temp � s[j-1]
				s[j - 1].SetStr2(temp.S);
			}
		}
	}
}
void main()
{
	int n, i;
	//������ ���������� �����
	cout << "Input the number of string s : \t";
	cin >> n;
	if (n < 0)
	{
		cout << "Error number : \t" << n << endl;
		return;
	}
	//�������� �� ������ ������ Enter ("\n")
	char c[2];
	cin.getline(c, 2);
	//������� ������ �� n �����
	string_ *s = new string_[n];
	//���� ����� c ����������
	for (i = 0; i < n; i++)
		s[i].SetStr();
	//���������� �����
	//����� ����� ���������,
	//��� ��� ������� ��������
	//��� ������ ��������,
	//� �� ��� ������ �����������
	s->Sort(s, n);
	//����� ��������������� �����
	for (i = 0; i < n; i++)
		cout << "\n" << s[i].GetStr() << "\n";
	//�������� ������� �����
	delete[] s;
}
#include <iostream>
#include <Windows.h>
#include <conio.h>//��� ���������� ������ _getch() ����������� ������� _kbhit()
using namespace std;

void main()
{
	int width = 50, height = 24;//���������, ���������� �� ������ � ������ ����
	int xPos = width / 2, yPos = height / 2;//���������� ��������� �������
	int dx = 1, dy = 1;//��������� ������� - ���������� �� ���� ��������� (�� ��������� ������ ����)
	int sleep_time = 100;//����� � �������������, ���������� �� ������� �������� �������
	char symbol = 1;//������ �������
	COORD start = { 0, 0 };//�������� ������� ��������� ��� �������� ������� ������
	COORD Health = { 57,1 };
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);//�������� "������" �������
	CONSOLE_CURSOR_INFO cci = { sizeof(cci), false };//������� ������, ���������� ��������� ��� ������ � ��������� 	n� ���������� ������
	SetConsoleCursorInfo(h, &cci);//��������� ����� � �������� ���������
	bool flag = true;//����������, ����������� ����� �������� �����
	do//������ �������� �����
	{
		SetConsoleCursorPosition(h, Health);//���������� ������ � ������ ��������� �������
		cout << "Health:";
		SetConsoleCursorPosition(h, start);//���������� ������ � ������ ��������� �������

		for (int y = 0; y < height; y++)//�������� ����, ������� ����� �������� �� ����������� �����
		{
			for (int x = 0; x < width; x++)//���������� � ���� ���� ����, ���������� �� ������ �������� � 				�������� ������
			{
				char s;//��������� ������, ������� ����� �������� - �������� ��������, ��� ��� ����� �� 			������
				if (x == 0 && y == 0)//� ������� ����� ���� ���� - ������ ���������������� ����
					s = 218;
				else if (x == 0 && y == height - 1)//������ ����� ����
					s = 192;
				else if (y == 0 && x == width - 1)//������� ������ ����
					s = 191;
				else if (y == height - 1 && x == width - 1)//������ ������ ����
					s = 217;
				else if (y == 0 || y == height - 1)//������� � ������ ������� ����
					s = 196;
				else if (x == 0 || x == width - 1)//����� � ������ ������� ����
					s = 179;
				else if (x == xPos&&y == yPos)//�������, � ������� ������ ���������� ������
					s = symbol;
				else s = ' ';//�� ���� ��������� ������� ������ ���� ������ ������ (�������� ������ 	������� ����)
				putchar(s);//������� ������


			}
			cout << endl;//����� �������������� ���� �������� ������ - ��������� �� ��������� ������
		}
		Sleep(sleep_time);//����������� �����
		xPos += dx;//��������� �������������� ������� �������
		yPos += dy;//��������� ������������



		if (yPos == 0 || yPos == height - 1) dy = -dy, yPos += dy;
		else if (xPos == 0 || xPos == width - 1)//���� ���� ���������� ����� ����
		{
			dx = -dx;//������ ������ �������� �� ���������������
			xPos += dx;
		}
		SetConsoleCursorPosition(h, start);//���������� ������ � ������ ��������� �������

		if (_kbhit())
		{
			{char pl = 219;
			//int xPozPl, yPozPl = 18;
			COORD pl_1 = { 18, 18 };
			COORD pl_2 = { 19, 18 };
			COORD pl_3 = { 20, 18 };
			COORD pl_4 = { 21, 18 };
			SetConsoleCursorPosition(h, pl_1);//������������� ������� ������� �� �������� �����������
			putchar(pl);
			SetConsoleCursorPosition(h, pl_2);
			putchar(pl);
			SetConsoleCursorPosition(h, pl_3);
			putchar(pl);
			SetConsoleCursorPosition(h, pl_4);
			putchar(pl);
			int pl_dx, pl_dy = 0;//������� ���������� ��� �������� ���������� �� ���� ���������

			int k = _getch();//��������� ��� ������� �������
			if (k == 0 || k == 224)//���� ���� ������ ����������� �������
				k = _getch();//�� ��������� ������ ��� �� ������
			switch (k)//���������� ��������� ��� ���������� ���������� ������
			{
			case 75://���� �����
				pl_dy = 0;
				pl_dx = -1;
				break;
			case 77://���� ������
				pl_dy = 0;
				pl_dx = 1;
				break;
			default:
				pl_dx = pl_dy = 0;//���� ���� ������ ����� ���� �������, �� ���������� ����� ����
			}
			SetConsoleCursorPosition(h, pl_1);//������������� ������� ������ �� ������ �����������
			putchar(' ');//������� ������, ���� "��������" ��� ������ � ���������� �������
			SetConsoleCursorPosition(h, pl_4);
			putchar(' ');
			SetConsoleCursorPosition(h, pl_2);//������������� ������� ������ �� ������ �����������
			putchar(' ');//������� ������, ���� "��������" ��� ������ � ���������� �������
			SetConsoleCursorPosition(h, pl_3);
			putchar(' ');
			if (pl_1.X < 2)//��������� �� ����� �� ����� ������� �������
			{
				pl_1.X = 2;
				pl_2.X = 3;
				pl_3.X = 4;
				pl_4.X = 5;
			}
			if (pl_4.X > 47)
			{
				pl_1.X = 44;
				pl_2.X = 45;
				pl_3.X = 46;
				pl_4.X = 47;
			}
			else {
				pl_1.X += pl_dx;//��������� ��������
				pl_2.X += pl_dx;
				pl_3.X += pl_dx;
				pl_4.X += pl_dx;
				pl_1.Y += 0;//��������� ��������
				pl_2.Y += 0;
				pl_3.Y += 0;
				pl_4.Y += 0;
			}
			SetConsoleCursorPosition(h, pl_1);//������������� ������ �� ����� �����������
			putchar(pl);
			SetConsoleCursorPosition(h, pl_4);
			putchar(pl);
			SetConsoleCursorPosition(h, pl_3);
			putchar(pl);
			SetConsoleCursorPosition(h, pl_2);
			putchar(pl);
			}
		}


	} while (flag);//������� �� �����, ���� ���� ������ ������� ESC
	system("cls");//������� �����
	cout << "Program is ended\n";//������� ��������� � ����� ����
}


#include <windows.h>
#include <tchar.h>
INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst,
	LPTSTR lpszCmdLine, int nCmdShow)
{
	int first_n = 0;
	int last_n = 100;
	int rezult;

	do
	{
		TCHAR szMainTitle[] = TEXT("������ �����");
		TCHAR szWintext1[100];
		wsprintf(szWintext1, _T("��������� ����� � ��������� �� %d �� %d"), first_n, last_n);
		MessageBox(0, szWintext1, szMainTitle, MB_OK | MB_ICONINFORMATION);

		int first = first_n;
		int last = last_n;
		int count = 0;
		int num = 0;
		TCHAR szAsk[100];
		count++;

		wsprintf(szAsk, _T("�� �������� ��� ����� : %d. �� ��� ��� ?"), num);
		rezult = MessageBox(0, szAsk, szMainTitle, MB_YESNO | MB_ICONQUESTION);
		if (rezult != IDYES)
		{
			while (rezult != IDYES)
			{
				num = rand() % 100 + 1;
				count++;
				wsprintf(szAsk, _T("�� �������� ��� ����� - %d. �� ��� ��� ?"), num);
				rezult = MessageBox(0, szAsk, szMainTitle, MB_YESNO | MB_ICONQUESTION);
			}
		}

		wsprintf(szAsk, _T("� ������ ���� ����� �� %d �������(��).\n����������?"), count);
		rezult = MessageBox(0, szAsk, szMainTitle, MB_OKCANCEL | MB_ICONSTOP);
		if (rezult == IDCANCEL) // �����
			return 0;

	} while (rezult != IDYES);
	
	return 0;
}
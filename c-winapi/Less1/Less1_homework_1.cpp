#include <windows.h>
#include <tchar.h>
INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst,
	LPTSTR lpszCmdLine, int nCmdShow)
{
	TCHAR szZag1[] = TEXT("������");
	TCHAR szWintext1[] = TEXT("������ ���� �������� ������");
	MessageBox(0, szWintext1, szZag1, MB_OK | MB_ICONINFORMATION);

	TCHAR szWintext2[] = TEXT("������ ���� ��� �������� ������");
	MessageBox(0, szWintext2, szZag1, MB_OK | MB_ICONINFORMATION);

	TCHAR szWintext3[] = TEXT("������ ���� �������� ������");
	
	int average = (wcslen(szWintext1) + wcslen(szWintext2) + wcslen(szWintext3)) / 3;
	TCHAR szZag2[100];
	wsprintf(szZag2, TEXT("������� ����� ��������: %i"), average);

	MessageBox(0, szWintext3, szZag2, MB_OK | MB_ICONINFORMATION);

	return 0;
}
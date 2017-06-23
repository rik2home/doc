#include <windows.h>
#include <tchar.h>
INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst,
	LPTSTR lpszCmdLine, int nCmdShow)
{
	TCHAR szZag1[] = TEXT("Резюме");
	TCHAR szWintext1[] = TEXT("Первое окно краткого резюме");
	MessageBox(0, szWintext1, szZag1, MB_OK | MB_ICONINFORMATION);

	TCHAR szWintext2[] = TEXT("Второе окно для краткого резюме");
	MessageBox(0, szWintext2, szZag1, MB_OK | MB_ICONINFORMATION);

	TCHAR szWintext3[] = TEXT("Третье окно краткого резюме");
	
	int average = (wcslen(szWintext1) + wcslen(szWintext2) + wcslen(szWintext3)) / 3;
	TCHAR szZag2[100];
	wsprintf(szZag2, TEXT("Среднее число символов: %i"), average);

	MessageBox(0, szWintext3, szZag2, MB_OK | MB_ICONINFORMATION);

	return 0;
}
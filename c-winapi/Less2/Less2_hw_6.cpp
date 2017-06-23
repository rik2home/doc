// ���� WINDOWS.H �������� �����������, �������, � ���������
// ������� ������������ ��� ��������� ���������� ��� Windows.
#include <windows.h>
#include <tchar.h>

int x = 0;
int y = 0;
int width = 300;
int height = 300;


// �������� ������� ���������
LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);

TCHAR szClassWindow[] = TEXT("��������� ����������");	/* ��� ������ ���� */

INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
	WNDCLASSEX wcl;
	HWND hWnd;
	MSG msg;

	// 1. ����������� ������ ����
	wcl.cbSize = sizeof(wcl);	// ������ ��������� WNDCLASSEX
								// ������������ �� ����, ���� ������ ������ �� ����������� ��� �� ���������
	wcl.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;	// CS (Class Style) - ����� ������ ����
	wcl.lpfnWndProc = WindowProc;	// ����� ������� ���������
	wcl.cbClsExtra = 0;		// ������������ Windows
	wcl.cbWndExtra = 0; 	// ������������ Windows
	wcl.hInstance = hInst;	// ���������� ������� ����������
	wcl.hIcon = LoadIcon(NULL, IDI_APPLICATION);	// �������� ����������� ������
	wcl.hCursor = LoadCursor(NULL, IDC_ARROW);	// �������� ������������ �������
	wcl.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);	// ���������� ���� ����� ������
	wcl.lpszMenuName = NULL;	// ���������� �� �������� ����
	wcl.lpszClassName = szClassWindow;	// ��� ������ ����
	wcl.hIconSm = NULL;	// ���������� ��������� ������ ��� ����� � ������� ����

						// 2. ����������� ������ ����
	if (!RegisterClassEx(&wcl))
		return FALSE; // ��� ��������� ����������� - �����

					  // 3. �������� ����
					  // ��������� ���� �  ���������� hWnd ������������� ���������� ����
	hWnd = CreateWindowEx(
		0,		// ����������� ����� ����
		szClassWindow,	//��� ������ ����
		TEXT("������ Windows ����������"), // ��������� ����
		WS_OVERLAPPEDWINDOW,				// ����� ����
											/* ���������, �����, ����������� ������ �������, ��������� ����, ������ ������������ � ���������� ����  */
		CW_USEDEFAULT,	// �-���������� ������ �������� ���� ����
		CW_USEDEFAULT,	// y-���������� ������ �������� ���� ����
		CW_USEDEFAULT,	// ������ ����
		CW_USEDEFAULT,	// ������ ����
		NULL,			// ���������� ������������� ����
		NULL,			// ���������� ���� ����
		hInst,		// ������������� ����������, ���������� ����
		NULL);		// ��������� �� ������� ������ ����������

	if (!hWnd)
		return FALSE;

	// 4. ����������� ����
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd); // ����������� ����

						// 5. ������ ����� ��������� ���������
	while (GetMessage(&msg, NULL, 0, 0)) // ��������� ���������� ��������� �� ������� ���������
	{
		TranslateMessage(&msg);	// ���������� ���������
		DispatchMessage(&msg);	// ��������������� ���������
	}

	return msg.wParam;
}


static UINT_PTR uTimer;
static int nCount;

void StartMoveWindow(HWND hWnd);

VOID CALLBACK TimerProc(HWND hWnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime)
{
	//TCHAR szCount[10];

	nCount++;
	StartMoveWindow(hWnd);

	//wsprintf(szCount, TEXT("%d"), nCount);
	//SetWindowText(hWnd, szCount);
}

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMessage, WPARAM wParam, LPARAM lParam)
{

	switch (uMessage)
	{
	case WM_KEYUP:
		switch (wParam)
		{
		case VK_RETURN:
			MoveWindow(hWnd, x, y, width, height, 1);
			uTimer = SetTimer(hWnd, 1, 300, TimerProc);
			nCount = 0;
			break;
		case VK_ESCAPE:
			if (uTimer)
			{
				KillTimer(hWnd, uTimer);
				uTimer = 0;
			}
			break;
		}
		break;
	case WM_DESTROY: // ��������� � ���������� ���������
		PostQuitMessage(0); // ������� ��������� WM_QUIT
		break;
	default:
		// ��� ���������, ������� �� �������������� � ������ ������� �������
		// ������������ ������� Windows �� ��������� �� ���������
		return DefWindowProc(hWnd, uMessage, wParam, lParam);
	}
	return 0;
}

void StartMoveWindow(HWND hWnd)
{
	if (x <= 1000 && y == 0)
	{
		x += 100;
		MoveWindow(hWnd, x, y, width, height, 1);
	}

	if (x == 1000 && y >= 0 && y <= 500)
	{
		y += 100;
		MoveWindow(hWnd, x, y, width, height, 1);
	}

	if (x <= 1000 && y == 500)
	{
		x -= 100;
		MoveWindow(hWnd, x, y, width, height, 1);
	}

	if (x == 0 && y <= 500)
	{
		y -= 100;
		MoveWindow(hWnd, x, y, width, height, 1);
	}

}
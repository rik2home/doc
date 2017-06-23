
#include <windows.h>
#include <tchar.h>
#define  APPNAME    _T("��a��� �����")
#define  APPCLS     _T("Nuklon")
#define  IDC_SMALL  100
#define  IDC_BIG    101
#define  IDC_ANSWER 102
#define  _creatButton(name, id, x, y) \
CreateWindow(_T("BUTTON"), name, WS_CHILD | BS_USERBUTTON | WS_VISIBLE,\
x, y, 90, 35, hwnd, (HMENU)id, (HINSTANCE)lParam, NULL)

LRESULT CALLBACK  _wndProc(HWND, UINT, WPARAM, LPARAM);
int   _creatWindow(HINSTANCE, const TCHAR*);
void  _helloDlg(HWND, int, int);
void  _answerCPU(HWND, int, int, char);


int  first_n = 1;
int  last_n = 100;



/////////////////////////////////////////////////////////////////////
int WINAPI  _tWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR, int) {
	return _creatWindow(hInstance, _T("������ �����!"));
}
/////////////////////////////////////////////////////////////////////



// ����
int  _creatWindow(HINSTANCE hInst, const TCHAR* caption) {
	HWND hwnd = NULL;
	MSG  msg = { 0 };

	WNDCLASS ofs = {
		0, _wndProc, 0, 0,  hInst, 0, LoadCursor(NULL, IDC_ARROW),
		(HBRUSH)(COLOR_WINDOW + 1), 0, APPCLS
	};
	if (!RegisterClass(&ofs))
		return 1;

	hwnd = CreateWindow(APPCLS, caption, WS_OVERLAPPEDWINDOW & ~WS_SIZEBOX,
		CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, HWND_DESKTOP,
		NULL, hInst, hInst);
	if (hwnd == NULL) {
		UnregisterClass(APPCLS, hInst);
		return 1;
	}
	ShowWindow(hwnd, SW_SHOW);
	UpdateWindow(hwnd);

	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return 0;
}




LRESULT CALLBACK _wndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	static HWND bbig = NULL;
	static HWND bsmall = NULL;
	RECT  rc;

	switch (msg) {
	case WM_CREATE:
		GetClientRect(hwnd, &rc);
		bsmall = _creatButton(_T("������"), IDC_SMALL, rc.right / 2 - 90, rc.bottom / 2 - 20);
		bbig = _creatButton(_T("������"), IDC_BIG, rc.right / 2 + 50, rc.bottom / 2 - 20);
		SendMessage(hwnd, WM_COMMAND, MAKEWPARAM(IDC_ANSWER, 0), 0);
		break;
	case WM_COMMAND:

		switch (LOWORD(wParam)) {
		case IDC_SMALL:
			_answerCPU(hwnd, first_n, last_n, '<');
			break;
		case IDC_BIG:
			_answerCPU(hwnd, first_n, last_n, '>');
			break;
		case IDC_ANSWER:  // ����� ����������
			_helloDlg(hwnd, first_n, last_n);
			_answerCPU(hwnd, first_n, last_n, 0);
			break;
		}

		break;
	case WM_DESTROY:
		DestroyWindow(bsmall);
		DestroyWindow(bbig);
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hwnd, msg, wParam, lParam);
	}
	return 0;
}



// ������
void  _helloDlg(HWND hwnd, int first, int last) {
	TCHAR buf[64];
	wsprintf(buf, _T("��������� ����� � ��������� �� %d �� %d"), first, last);
	MessageBox(hwnd, buf, APPNAME, MB_OK | MB_ICONINFORMATION);
}



// ��� ������� ���������� ����� �� O(log(n)) - ���� ��� ������� ����� ��� �������
void  _answerCPU(HWND hwnd, int _first, int _last, char ch) {
	static int first = _first;
	static int last = _last;
	static int cnt = 0;
	static int num = 0;
	TCHAR buf[64];
	int   id;

	switch (ch) {
	case '<':  // ������
		last = num;
		break;
	case '>':  // ������
		first = num + 1;
		break;
	}

	cnt++;
	num = (first + last) / 2;
	//num = first + rand()*(last - first)/RAND_MAX;// ����� �������� ������

	wsprintf(buf, _T("�� �������� ��� ����� - %d. �� ��� ��� ?"), num);
	id = MessageBox(hwnd, buf, APPNAME, MB_YESNO | MB_ICONQUESTION);
	if (id != IDYES)
		return;

	wsprintf(buf, _T("� ������ ���� ����� �� %d �������(��).\n����������."), cnt);
	id = MessageBox(hwnd, buf, APPNAME, MB_OKCANCEL | MB_ICONINFORMATION);
	if (id == IDCANCEL) // �����
		SendMessage(hwnd, WM_DESTROY, 0, 0);
	else {  // ������ ������
		first = _first;
		last = _last;
		cnt = num = 0;
		SendMessage(hwnd, WM_COMMAND, MAKEWPARAM(IDC_ANSWER, 0), 0);
	}
}
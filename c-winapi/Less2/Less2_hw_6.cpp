// Файл WINDOWS.H содержит определения, макросы, и структуры
// которые используются при написании приложений под Windows.
#include <windows.h>
#include <tchar.h>

int x = 0;
int y = 0;
int width = 300;
int height = 300;


// прототип оконной процедуры
LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);

TCHAR szClassWindow[] = TEXT("Каркасное приложение");	/* Имя класса окна */

INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
	WNDCLASSEX wcl;
	HWND hWnd;
	MSG msg;

	// 1. Определение класса окна
	wcl.cbSize = sizeof(wcl);	// размер структуры WNDCLASSEX
								// Перерисовать всё окно, если изменён размер по горизонтали или по вертикали
	wcl.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;	// CS (Class Style) - стиль класса окна
	wcl.lpfnWndProc = WindowProc;	// адрес оконной процедуры
	wcl.cbClsExtra = 0;		// используется Windows
	wcl.cbWndExtra = 0; 	// используется Windows
	wcl.hInstance = hInst;	// дескриптор данного приложения
	wcl.hIcon = LoadIcon(NULL, IDI_APPLICATION);	// загрузка стандартной иконки
	wcl.hCursor = LoadCursor(NULL, IDC_ARROW);	// загрузка стандартного курсора
	wcl.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);	// заполнение окна белым цветом
	wcl.lpszMenuName = NULL;	// приложение не содержит меню
	wcl.lpszClassName = szClassWindow;	// имя класса окна
	wcl.hIconSm = NULL;	// отсутствие маленькой иконки для связи с классом окна

						// 2. Регистрация класса окна
	if (!RegisterClassEx(&wcl))
		return FALSE; // при неудачной регистрации - выход

					  // 3. Создание окна
					  // создается окно и  переменной hWnd присваивается дескриптор окна
	hWnd = CreateWindowEx(
		0,		// расширенный стиль окна
		szClassWindow,	//имя класса окна
		TEXT("Каркас Windows приложения"), // заголовок окна
		WS_OVERLAPPEDWINDOW,				// стиль окна
											/* Заголовок, рамка, позволяющая менять размеры, системное меню, кнопки развёртывания и свёртывания окна  */
		CW_USEDEFAULT,	// х-координата левого верхнего угла окна
		CW_USEDEFAULT,	// y-координата левого верхнего угла окна
		CW_USEDEFAULT,	// ширина окна
		CW_USEDEFAULT,	// высота окна
		NULL,			// дескриптор родительского окна
		NULL,			// дескриптор меню окна
		hInst,		// идентификатор приложения, создавшего окно
		NULL);		// указатель на область данных приложения

	if (!hWnd)
		return FALSE;

	// 4. Отображение окна
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd); // перерисовка окна

						// 5. Запуск цикла обработки сообщений
	while (GetMessage(&msg, NULL, 0, 0)) // получение очередного сообщения из очереди сообщений
	{
		TranslateMessage(&msg);	// трансляция сообщения
		DispatchMessage(&msg);	// диспетчеризация сообщений
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
	case WM_DESTROY: // сообщение о завершении программы
		PostQuitMessage(0); // посылка сообщения WM_QUIT
		break;
	default:
		// все сообщения, которые не обрабатываются в данной оконной функции
		// направляются обратно Windows на обработку по умолчанию
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
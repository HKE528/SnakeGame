#include "Snake.h"
#include<Windows.h>

void SetConsolSize()
{
	system("mode con cols=84 lines=32");
}

void RemoveCurser()
{
    CONSOLE_CURSOR_INFO curinfo = { 0, };
    curinfo.dwSize = 1;
    curinfo.bVisible = 0;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
}

void SetConsol()
{
    SetConsolSize();
    RemoveCurser();
}

void Gotoxy(int x, int y)
{
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
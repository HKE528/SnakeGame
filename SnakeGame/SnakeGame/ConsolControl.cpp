#include "Snake.h"
#include<Windows.h>

void SetConsolSize()
{
	system("mode con cols=62 lines=31");
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
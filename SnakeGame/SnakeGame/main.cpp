#include "Snake.h"
#include <conio.h>
#include<Windows.h>

int main()
{
	char key;

	State s = Init();

	SetConsol();
	GameUI();
	StartGame();

	while (1) {
		if (_kbhit())
		{
			key = _getch();

			switch (key)
			{
			case RIGHT_KEY:
				s.degree = (s.degree + 1) % 4;
				break;

			case LEFT_KEY:
				s.degree = (s.degree + 3) % 4;
				break;
			}
		}

		MoveSnake(s);
		Sleep(100);
	}
}
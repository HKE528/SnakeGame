#include "Snake.h"
#include<Windows.h>

int main()
{
	char key;

	State s = Init();

	SetConsol();
	GameUI();
	
	while (1) {

		StartGame(s);
		while (!s.gameover) {
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
			Sleep(50);
		}

		GameoverUI(s);
		ResetGame(s);
	}
}
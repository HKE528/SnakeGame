#include "Snake.h"
#include <conio.h>
#include<Windows.h>

int main()
{
	char key;

	SetConsol();
	GameUI();
	StartGame();

	while (1) {
		while (_kbhit()) {
			key = _getch();

			if (key == 32) {
				//system("cls");
				MoveSnake();
			}
		}
		Sleep(1000);
	}
}
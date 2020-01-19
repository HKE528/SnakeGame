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
		MoveSnake();
		Sleep(100);
	}
}
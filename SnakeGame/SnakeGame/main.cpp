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
		MoveSnake(s);
		Sleep(100);
	}
}
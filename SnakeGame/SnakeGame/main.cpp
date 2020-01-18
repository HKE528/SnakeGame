#include "Snake.h"
#include <conio.h>

int main()
{
	SetConsol();
	GameUI();

	StartGame();
	while (!_kbhit()) {
	}
}
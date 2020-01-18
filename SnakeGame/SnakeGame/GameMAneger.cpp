#include"Snake.h"
void SpawnSnake()
{
	int startX = 5;
	int startY = 5;

	DrawSnake(startX, startY);
	DrawSnake(startX - 1, startY);
}

void StartGame() {
	SpawnSnake();
}
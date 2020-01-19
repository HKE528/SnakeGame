#include"Snake.h"

State init()
{
	State s;

	s.countTail = 3;
	s.degree = LEFT;
}

void SpawnSnake()
{
	int startX = 5;
	int startY = 5;

	initPointVector(startX, startY);

	DrawSnake(startX, startY);
	DrawSnake(startX - 1, startY);
	DrawSnake(startX - 2, startY);
}

void StartGame() {
	SpawnSnake();
}
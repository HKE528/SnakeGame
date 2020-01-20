#include"Snake.h"
#include <random>

std::random_device rd;
std::mt19937 mt(rd());
std::uniform_int_distribution<int> randomX(1, FRAME_WIDTH - 1);
std::uniform_int_distribution<int> randomY(1, FRAME_HEIGHT - 1);

State Init()
{
	State s;

	s.countTail = 3;
	s.degree = RIGHT;
	s.isFood = true;
	s.gameover = false;

	return s;
}

void SpawnSnake()
{
	int startX = 5;
	int startY = 5;

	initPointVector(startX, startY);

	DrawBox(startX, startY);
	DrawBox(startX - 1, startY);
	DrawBox(startX - 2, startY);
}

void SpawnFood(State& s)
{
	s.foodX = randomX(mt);
	s.foodY = randomY(mt);

	DrawBox(s.foodX, s.foodY);
}

void CheckFood(State& s, Point& p)
{
	if (s.isFood == false){
		SpawnFood(s);
		s.isFood = true;
	}
	else if (s.foodX == p.x && s.foodY == p.y) {
		s.isFood = false;
		s.countTail++;
	}
}

void StartGame(State& s) {

	SpawnFood(s);
	SpawnSnake();
}
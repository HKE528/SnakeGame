#pragma once

#include <cstdio>

#define FRAME_WIDTH 40
#define FRAME_HEIGHT 30
#define PADDING 2

#define LEFT_KEY 75
#define RIGHT_KEY 77

enum dgree {UP, RIGHT, DOWN, LEFT};

typedef struct _state {
	int countTail;
	unsigned int degree;
	bool isFood;
	int foodX;
	int foodY;
	bool gameover;
}State;

typedef struct _point {
	int x;
	int y;
}Point;

//ConsolControl.cpp
void SetConsol();
void Gotoxy(int x, int y);

//UI.cpp
void GameUI();

//GameManeger.cpp
State Init();
void StartGame(State& s);
void CheckFood(State& s, Point& p);
//void CheckFood(State& s, Point& p);

//Drawer.cpp
void DrawBox(int, int);
void Remover(int, int);

//SnakeMover.cpp
void initPointVector(int, int);
void MoveSnake(State& s);
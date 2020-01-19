#pragma once

#include <cstdio>

#define FRAME_WIDTH 40
#define FRAME_HEIGHT 30
#define PADDING 2

#define LEFT_KEY 75
#define RIGHT_KEY 77

enum dgree {LEFT, RIGHT, UP, DOWN};

typedef struct _state {
	int countTail;
	int degree;
}State;

//ConsolControl.cpp
void SetConsol();
void Gotoxy(int x, int y);

//UI.cpp
void GameUI();

//GameManeger.cpp
State Init();
void StartGame();

//Drawer.cpp
void DrawSnake(int, int);
void Remover(int, int);

//SnakeMover.cpp
void initPointVector(int, int);
void MoveSnake(State& s);
#pragma once

#include <cstdio>

#define FRAME_WIDTH 40
#define FRAME_HEIGHT 30
#define PADDING 2

int gameBoard[FRAME_HEIGHT][FRAME_WIDTH] = { 0 };

//ConsolControl.cpp
void SetConsol();
void Gotoxy(int x, int y);

//UI.cpp
void GameUI();
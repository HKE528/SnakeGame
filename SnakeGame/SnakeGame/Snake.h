#pragma once

#include <cstdio>

#define FRAME_WIDTH 40
#define FRAME_HEIGHT 30
#define PADDING 2

//ConsolControl.cpp
void SetConsol();
void Gotoxy(int x, int y);

//UI.cpp
void GameUI();

//GameManeger.cpp
void StartGame();

//Drawer.cpp
void DrawSnake(int, int);
void Remover(int, int);
//void SpawnSnake();
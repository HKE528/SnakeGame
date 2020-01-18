#include "Snake.h"

void GameUI()
{
	for (int i = 0; i < FRAME_HEIGHT + 2; i++)
	{
		for (int j = 0; j < FRAME_WIDTH + 2; j++) {
			Gotoxy(j*2, i);
			printf("¢Ì");
		}
	}
	
	for (int i = 1; i < FRAME_HEIGHT + 1; i++)
	{
		for (int j = 1; j < FRAME_WIDTH + 1; j++) {
			Gotoxy(j*2, i);
			printf("  ");
		}
	}
}
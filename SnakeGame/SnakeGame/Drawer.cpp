#include"Snake.h"

void Draw()
{
	for (int i = 0; i < FRAME_HEIGHT; i++) {
		for (int j = 0; j < FRAME_WIDTH; j++) {
			if (gameBoard[i][j] = 1) {
				Gotoxy(PADDING + j * 2, PADDING + i);
				printf("бр")
			}
		}
	}
}
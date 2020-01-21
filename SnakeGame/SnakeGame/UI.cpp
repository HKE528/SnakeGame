#include "Snake.h"

void RemoveBoard()
{
	for (int i = 1; i < FRAME_HEIGHT + 1; i++)
	{
		for (int j = 1; j < FRAME_WIDTH + 1; j++) {
			Gotoxy(j * 2, i);
			printf("  ");
		}
	}
}
void GameUI()
{
	for (int i = 0; i < FRAME_HEIGHT + 2; i++)
	{
		for (int j = 0; j < FRAME_WIDTH + 2; j++) {
			Gotoxy(j*2, i);
			printf("¢Ì");
		}
	}
	
	RemoveBoard();
}

void GameoverUI(State& s)
{
	Gotoxy(FRAME_WIDTH/2, FRAME_HEIGHT/2);
	printf("Game Over");
	
	Gotoxy(FRAME_WIDTH/2, FRAME_HEIGHT/2 + 1);
	printf("Score : %d", s.countTail);

	Gotoxy(FRAME_WIDTH/2, FRAME_HEIGHT/2 + 2);
	printf("Press the R key to restart");

}
#include"Snake.h"

void DrawSnake(int x, int y)
{
	Gotoxy(x * 2, y);
	
	printf("��");
}

void Remover(int x, int y)
{
	Gotoxy(x * 2, y);

	printf("  ");
}




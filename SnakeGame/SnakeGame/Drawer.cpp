#include"Snake.h"

void DrawBox(int x, int y)
{
	Gotoxy(x * 2, y);
	
	printf("бс");
}

void Remover(int x, int y)
{
	Gotoxy(x * 2, y);

	printf("  ");
}
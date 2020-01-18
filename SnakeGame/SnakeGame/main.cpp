#include "Snake.h"
#include <conio.h>

int main()
{
	SetConsol();
	GameUI();

	while (!_kbhit());
}
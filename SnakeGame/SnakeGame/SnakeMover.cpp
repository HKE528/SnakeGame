#include"Snake.h"
#include<vector>

typedef struct _point {
	int x;
	int y;
}Point;

std::vector<Point> pointList;

void initPointVector(int x, int y)
{
	Point startCoord;

	startCoord = { x, y };
	pointList.push_back(startCoord);

	startCoord = { x - 1, y };
	pointList.push_back(startCoord);
}
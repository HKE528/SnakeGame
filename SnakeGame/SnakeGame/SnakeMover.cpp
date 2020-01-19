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

	pointList.clear();

	for (int i = 0; i < 3; i++) {
		startCoord = { x - i, y };
		pointList.push_back(startCoord);
	}
}

void PointShift()
{
	Point temp, prevPoint = pointList.front();

	//다음 꼬리들이 앞쪽 꼬리위치로 이동
	for (int i = 0; i < pointList.size(); i++) {
		temp = pointList.at(i);
		pointList.at(i) = prevPoint;
		prevPoint = temp;
	}
}

//void SetDegree(int degree)
//{
//	
//}

void MoveSnake()
{
	Point curHead = pointList.front();
	Point curTail = pointList.back();

	PointShift();
	pointList.front() = { curHead.x + 1, curHead.y};

	Remover(curTail.x, curTail.y);
	std::vector<Point>::iterator it;
	for (it = pointList.begin(); it != pointList.end(); it++) {
		DrawSnake(it->x, it->y);
	}
}
#include"Snake.h"
#include<vector>

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

void addTail()
{
	Point newPoint = pointList.back();

	pointList.push_back(newPoint);
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

void SetFront(Point& curHead ,int degree)
{
	switch (degree)
	{
	case RIGHT:
		curHead.x += 1;
		//printf("RIGHT");
		break;

	case LEFT:
		curHead.x -= 1;
		//printf("LEFT");
		break;

	case UP:
		curHead.y -= 1;
		//printf("up");
		break;

	case DOWN:
		curHead.y += 1;
		//printf("down");
		break;
	}

	pointList.front() = curHead;
}

bool CollisionCheck(Point p)
{
	for (int i = 0; i < FRAME_HEIGHT + PADDING; i += FRAME_HEIGHT + 1) {
		for (int j = 1; j < FRAME_WIDTH + PADDING; j++) {
			if (p.x == j && p.y == i) {
				return true;
			}
		}
	}

	for (int i = 0; i < FRAME_WIDTH + PADDING; i += FRAME_WIDTH + 1) {
		for (int j = 1; j < FRAME_HEIGHT + PADDING; j++) {
			if (p.x == i && p.y == j) {
				return true;
			}
		}
	}

	for (int i = 1; i < pointList.size(); i++) {
		if (p.x == pointList.at(i).x && p.y == pointList.at(i).y)
			return true;
	}

	return false;	
}

void MoveSnake(State& s)
{
	Point curHead = pointList.front();
	Point curTail = pointList.back();

	PointShift();
	SetFront(curHead, s.degree);

	s.gameover = CollisionCheck(pointList.front());
	if (s.gameover)
		return;

	Remover(curTail.x, curTail.y);
	std::vector<Point>::iterator it;
	for (it = pointList.begin(); it != pointList.end(); it++) {
		DrawBox(it->x, it->y);
	}

	CheckFood(s, pointList.front());

	if (s.countTail > pointList.size()) {
		addTail();
	}
}
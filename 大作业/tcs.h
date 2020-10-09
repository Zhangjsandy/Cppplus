#include<iostream>
#include"frame.h"
#include"food.h"
using namespace std;
class tcs
{
	int x;
	int y;
	int width;
	int status;
    tcs *next;
public:
	tcs(Frame& tempFrame,Food&tempFood);
	enum
	{
		up='w',
		down='s',
		left='a',
		right='d'
	};
struct Point
	{
		int x;
		int y;
		Point *next;
	};
	void initialsnake();
	void destroypoint();
	void addpoint(int x, int y);
	void delpoint();
	bool move(char key);
	//设定难度
	//获取刷屏时间
	int getsleeptime();
	//获取蛇的身体 
	int countlist();
	//获取分数
	int getScore();
	Point * pHead;
	Frame &Frame;
	Food &Food;
	bool isRool;
};

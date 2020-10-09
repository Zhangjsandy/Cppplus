#include"tcs.h"
#include<iostream>
#include<Windows.h>
#include"frame.h"
using namespace std;
void gotoxy1(HANDLE hOut1, int x, int y)
{
	COORD pos;
	pos.X = x; //横坐标
	pos.Y = y; //纵坐标
	SetConsoleCursorPosition(hOut1, pos);
}
HANDLE hOut1 = GetStdHandle(STD_OUTPUT_HANDLE);//定义显示器句柄变量
tcs::tcs(Frame &tempFrame,Food& tempFood) : Frame(tempFrame), Food(tempFood)
{
	pHead = NULL;
	isRool = false;
}
void tcs::destroypoint()
{
	Point * pCur = pHead;
	while (pHead!=NULL)
	{
		pCur = pHead->next;
		delete pHead;
		pHead = pCur;
	}
}

void tcs::addpoint(int x, int y)
{
	//创建新结点
	Point * newpoint = new Point;
	newpoint->x = x;
	newpoint->y = y;
	newpoint->next = NULL;
	//如果原来头不为空，改为身子
	if (pHead != NULL)
	{
		Frame.setFrame(pHead->x, pHead->y, '=');
		gotoxy1(hOut1, pHead->y * 2, pHead->x);
		cout << "=";
	}
	newpoint->next = pHead;
	pHead = newpoint;//更新头部
	Frame.setFrame(pHead->x, pHead->y, '0');
	gotoxy1(hOut1, pHead->y * 2, pHead->x);
	cout << "0";

}
void tcs::initialsnake()
{
	destroypoint();
	addpoint(5, 3);
	addpoint(5, 4);
	addpoint(5, 5);
}
//移动时删除结点
void tcs::delpoint()
{
	//两个以上结点 才去做删除操作
	if (pHead == NULL || pHead->next == NULL)
	{
		return;
	}
	//当前结点
	Point *pCur = pHead->next;
	//上一个结点
	Point *pPre = pHead;
	while (pCur->next!=NULL)
	{
		pPre = pPre->next;
		pCur = pCur->next;
	}
	//删除尾结点
	Frame.setFrame(pCur->x, pCur->y, ' ');
	gotoxy1(hOut1, pCur->y * 2, pCur->x);
	cout << " ";
	delete pCur;
	pCur = NULL;
	pPre->next = NULL;
}
bool tcs::move(char key)
{
	int x = pHead->x;
	int y = pHead->y;
	switch (key)
	{
	case up:
		x--;
		break;
	case down:
		x++;
		break;
	case left:
		y--;
		break;
	case right:
		y++;
		break;
	default:
		break;
	}
	//判断 如果下一步碰到的是尾巴，不应该死亡
	Point *pCur = pHead->next;
	//上一个结点
	Point *pPre = pHead;
	while (pCur->next != NULL)
	{
		pPre = pPre->next;
		pCur = pCur->next;
	}
	if (pCur->x == x&&pCur->y == y)
	{
		//碰到尾巴的循环
		isRool = true;
	}
	else
	{
		//判断用户要到达的位置是否成功
		if (Frame.location(x, y) == '*' || Frame.location(x, y) == '=')
		{
			addpoint(x, y);
			delpoint();
			system("cls");
			Frame.createFrame();
			cout << "得分：" << getScore() << "分" << endl;
			cout << "GAME OVER" << endl;
			return false;
		}
	}
	//移动成功 分两种
	//吃到食物，未吃到食物
	if (Frame.location(x, y) == '#')
	{
		addpoint(x, y);
		//重新设置食物
		Food.Foodset();
	}
	else
	{
		addpoint(x, y);
		delpoint();
		if (isRool == true)
		{
			Frame.setFrame(x, y, '0');
			gotoxy1(hOut1, y * 2, x);
			cout << "0";
		}
	}
	return true;
}
int tcs::getsleeptime()
{
	int sleeptime=0;
	int size = countlist();
	if (size < 5)
	{
		sleeptime = 300;
	}
	else if (size >= 5 && size <= 10)
	{
		sleeptime = 200;
	}
	else
	{
		sleeptime = 100;
	}
	return sleeptime;
}
int tcs::countlist()
{
	int size = 0;
	Point * curPoint = pHead;
	while (curPoint!=NULL)
	{
		size++;
		curPoint = curPoint->next;
	}
	return size;
}
int tcs::getScore()
{
	int size = countlist();
	int score = (size-3) * 100;
	return score;
}

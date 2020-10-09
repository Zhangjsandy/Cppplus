#include"food.h"
#include<Windows.h>
void gotoxy2(HANDLE hOut2, int x, int y)
{
	COORD pos;
	pos.X = x; //横坐标
	pos.Y = y; //纵坐标
	SetConsoleCursorPosition(hOut2, pos);
}
HANDLE hOut2 = GetStdHandle(STD_OUTPUT_HANDLE);
void Food::Foodset()
{
	while (true)
	{
		FoodX = rand() % (Frame::len - 2) + 1;
		FoodY = rand() % (Frame::wid - 2) + 1;
		//如果随机的位置是蛇头或蛇身，就重新生成随机数
		if (Frame.location(FoodX, FoodY) == ' ')
		{
			Frame.setFrame(FoodX, FoodY, '#');
			gotoxy2(hOut2, FoodY * 2, FoodX);
			cout << '#';
			break;
		}
	}	
}

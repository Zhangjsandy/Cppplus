#include<iostream>
#include"tcs.h"
#include"food.h"
#include<ctime>
#include<conio.h>
#include<Windows.h>
#include"frame.h" 
void gotoxy(HANDLE hOut, int x, int y)
{
	COORD pos;
	pos.X = x; //横坐标
	pos.Y = y; //纵坐标
	SetConsoleCursorPosition(hOut, pos);
}
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);//定义显示器句柄变量
int main()
{
	//添加随机种子
	srand((unsigned int)time(NULL));
	//是否死亡的标识
	bool died = false;
	char preKey = NULL;
	Frame Frame;
	Frame.initialFrame();
	Frame.createFrame();
	Food Food(Frame);
	Food.Foodset();
	tcs tcs(Frame,Food);
	tcs.initialsnake();
	gotoxy(hOut, 0, Frame::len);
	cout << "得分：" << tcs.getScore() << "分" << endl;
	//gotoxy(hOut, 10, 5);//y*2 x 
	//接受用户的输入
	while (!died)
	{
		char key = _getch();
		//判断如果是第一次按了，左键，才不能激活游戏
		//判断上一次移动方向
		if (preKey == NULL&&key == tcs.left)
		{
			continue;
		}
		do
		{
			if (key == tcs.up || key == tcs.down || key == tcs.left || key == tcs.right)
			{
				//判断本次按键是否与上次冲突
				if ((key == tcs.left&&preKey == tcs.right )||
					(key == tcs.right&&preKey == tcs.left )||
					(key == tcs.up&&preKey == tcs.down) ||
					(key == tcs.down&&preKey == tcs.up) 
					)
				{
					key = preKey;
				}
				else
				{
					preKey = key;//不是冲突按键，可以更新按键
			    }
				if (tcs.move(key) == true)
				{
					//移动成功
					gotoxy(hOut, 0, Frame::len);
					cout << "得分：" << tcs.getScore() << "分" << endl;
					Sleep(tcs.getsleeptime());
				}
				else
				{
					died = true;
					break;
				}
			}
			else
			{
				key = preKey;//强制将错误按键变为上一次移动的方向
			}
		} while (!_kbhit());//当没有键盘输入的时候返回0
	}
	return 0;
}

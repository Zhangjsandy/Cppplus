#include<iostream>
#include"frame.h"
using namespace std;
void Frame::initialFrame() //³õÊ¼»¯Ç½±Ú
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < wid; j++)
		{
			if (i == 0 || j == 0 || i == len- 1 || j == wid - 1)
			{
				array[len][wid] = '*';
			}
			else
			{
				array[len][wid] = ' ';
			}
		}
	}
}
void Frame::createFrame()
{
	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < wid; ++j)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}
void Frame::setFrame(int x, int y, char c)
{
	array[x][y] = c;
}
char Frame::location(int x, int y)
{
	return array[x][y];
}

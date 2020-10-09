#ifndef FRAME_H_
#define FRAME_H_
#include<iostream>
using namespace std;
class Frame
{
public:
	enum
	{
		len=250,
		wid=250
	};
	void initialFrame();//初始化边界 
	void createFrame();//创建边界 
	void setFrame(int x,int y,char c);//创建平面坐标系
	char location(int x,int y);//得到位置信息
private:
    char array[len][wid]; 
};
#endif


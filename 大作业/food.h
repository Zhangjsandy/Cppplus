#pragma once
#include"frame.h"
#include<iostream>
using namespace std;
class Food
{
public:
	Food(Frame &tempframe);
	void Foodset();
private:
	int FoodX;
	int FoodY;
	Frame &Frame;
};


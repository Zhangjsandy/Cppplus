#include<iostream>
int main()
{
	using namespace std;
	int h=0;
	const int CHG=12;
	cout<<"Enter your height:_______\b\b\b";
	cin>>h;
	cout<<"Your height is "<<h/12<<" foot "<<h%12<<" inch";
	return 0;
 } 

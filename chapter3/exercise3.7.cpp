#include<iostream>
int main()
{
	using namespace std;
	const double ktm=62.14;
	const double gtl=3.785;
	double ep=0;
	cout<<"Enter the petrol consumption of Europe:";
	cin>>ep;
	cout<<"The petrol consumption of US is "<<gtl*ktm/ep<<endl;
	return 0;
}

#include<iostream>
int main()
{
	using namespace std;
	cout<<"Enter the number of light years:";
	double years;
	cin>>years;
	double units;
	units=years*63240;
	cout<<years<<" light years="<<units<<" astronomical units";
	return 0; 
}

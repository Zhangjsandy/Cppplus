#include<iostream>
int main()
{
	using namespace std;
    const int fti=12;
	const double itm=0.0254;
	const double ktp=2.2;
	int hf=0;
	int hi=0;
	int wp=0;
	cout<<"Enter your height:______";
	cin>>hf>>hi;
	cout<<"Enter your weight:_______";
	cin>>wp; 
	cout<<"Your BMI is "<<double(wp)/double(ktp)/(hf*fti+hi)/itm/itm/(hf*fti+hi);
	return 0;
}

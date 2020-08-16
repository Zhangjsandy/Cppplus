#include<iostream>
int main()
{
	using namespace std;
	int l=0;
	int p=0;
	int le=0;
	int pe=0;
	cout<<"Enter the length:";
	cin>>l;
	cout<<"Enter the consumption of petrol:";
	cin>>p;
	cout<<"The length per mile is "<<double(l)/double(p)<<endl;
	cout<<"Enter the length:";
	cin>>le;
	cout<<"Enter the consumption of petrol:"; 
	cin>>pe;
	cout<<"The consumption per 100 kilometers is "<<double(pe)/double(le)*100<<endl;
	return 0;
}

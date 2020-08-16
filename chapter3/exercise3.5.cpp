#include<iostream>
int main()
{
	using namespace std;
	long long wp=0;
	long long up=0;
	cout<<"Enter the world's population:";
	cin>>wp;
	cout<<"Enter the population of the US:";
	cin>>up;
	cout<<"The population of the US is "<<double(100*up)/double(wp)<<"% of the world's population.";
	return 0;
}

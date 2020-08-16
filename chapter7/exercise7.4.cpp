#include<iostream>
long double probability(int individual,int population);
int main()
{
	using namespace std;
	long double r1=probability(5,47);
	long double r2=probability(1,27);
	long double r=r1*r2;
	cout<<"The probability is:"<<r;
	return 0;
}
long double probability(int individual,int population)
{
	using namespace std;
	long double r=1;
	long double a,b;
	for(a=individual,b=population;a>0;a--,b--)
	{
		r=r*a/b;
	}
	return r;
}

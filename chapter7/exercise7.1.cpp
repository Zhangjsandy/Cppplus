#include<iostream>
double A(double,double);
int main()
{
	using namespace std;
	double x,y,av;
	cout<<"Please enter two numbers:\n";
	while(cin>>x>>y&&x!=0&&y!=0)
	{
		av=A(x,y);
		cout<<"Harmotic average:"<<av<<endl;
		cout<<"Please enter two numbers:\n";
		continue;
	}
	cout<<"Bye!";
	return 0;
 } 
 double A(double x,double y)
 {
 	using namespace std;
 	double av;
 	av=2.0*x*y/(x+y);
 	return av;
 }

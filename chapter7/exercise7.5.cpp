#include<iostream>
int f(int x);
int main()
{
	using namespace std;
	int x;
	int r;
	while(1)
	{
		cout<<"Please enter a number:";
	    cin>>x;
		if(x<0)
		{
		cout<<"error"<<endl;
		continue;
	    }
	    else if(x>=0)
	    {
	    	r=f(x);
	    	cout<<"The factual of "<<x<<" is "<<r<<endl;
		}
	}
	return 0;
}
int f(int x)
{
	using namespace std;
	int r;
	if(x==0)
	r=1;
	if(x>0)
	r=x*f(x-1);
	return r;
}

#include<iostream>
const int Max=5;
int main()
{
	using namespace std;
	
	int golf[Max];
	cout<<"Please enter your golf scores."<<endl;
	cout<<"You must enter "<<Max<<" rounds."<<endl;
	int i;
	for (i=0;i<Max;i++)
	{
		cout<<"round #"<<i+1<<":";
		while (!(cin>>golf[i]))
		{
			cin.clear();
			while (cin.get()!='\n')
				continue;
			cout<<"Please enter a number:";
		}
	}

	double total=0.0;
	for (i=0;i<Max;i++)
		total+=golf[i];
	cout<<total/Max<<" = average score "<<Max<<" round."<<endl;
	return 0;
}


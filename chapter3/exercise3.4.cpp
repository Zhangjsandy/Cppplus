#include<iostream>
int main()
{
	using namespace std;
	const long stm=60;
	const long mth=60;
	const long htd=24;
	long seconds=0;
	cout<<"Enter the number of seconds:";
	cin>>seconds;
	cout<<seconds<<" seconds="<<seconds/stm/mth/htd<<" days,"<<seconds/stm/mth%htd<<" hours,"<<seconds/stm%mth<<" minutes,"<<seconds%stm<<" seconds";
	return 0; 
}

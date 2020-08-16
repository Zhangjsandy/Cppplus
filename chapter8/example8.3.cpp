#include<iostream>
int main()
{
	using namespace std;
	int rats=101;
	int & rodents=rats;
	cout<<"rats="<<rats;
	cout<<",rodents="<<rodents<<endl;
	cout<<"rats address is "<<&rats;
	cout<<",rodents address is "<<&rodents<<endl;
	int bunnies=50;
	rodents=bunnies;
	cout<<"bunnies="<<bunnies;
	cout<<",rats="<<rats;
	cout<<",rodents="<<rodents<<endl;
	cout<<"bunnies address is "<<&bunnies;
	cout<<",rodents address is "<<&rodents<<endl;
	return 0;
}

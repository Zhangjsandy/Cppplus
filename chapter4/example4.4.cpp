#include<iostream>
int main()
{
	using namespace std;
	const int Arsize=20;
	char name[Arsize];
	char dessert[Arsize];
	cout<<"Enter your name:\n";
	cin.getline(name,Arsize);
	cout<<"Enter your favorite dessert:\n";
	cin.getline(dessert,Arsize);
	cout<<"I have some delicious "<<dessert;
	cout<<" for you,"<<name<<".\n";
	return 0;
}

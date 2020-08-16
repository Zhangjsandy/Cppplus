#include<iostream>
#include<cstring>
char firstname[20];
char lastname[20];
char name[2*20-1];
int main()
{
	using namespace std;
	cout<<"Enter your first name:"<<firstname;
	cin>>firstname;
	cout<<"Enter your last name:"<<lastname;
	cin>>lastname;
	strncpy(name,lastname,20);
	strcat(name,", ");
	strncat(name,firstname,20);
	cout<<"Here's the information in a single string: "<<name;
	return 0;
}

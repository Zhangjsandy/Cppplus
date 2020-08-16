#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string firstname;
    string lastname;
    string name;
	cout<<"Enter your first name:"<<firstname;
	cin>>firstname;
	cout<<"Enter your last name:"<<lastname;
	cin>>lastname;
	name= firstname +','+' '+lastname;
	cout<<"Here's the information in a single string:"<<name<<endl;
	return 0; 
}

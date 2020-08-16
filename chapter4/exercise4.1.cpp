#include<iostream>
char firstname[20];
char lastname[20];
char grade;
int age;
int main()
{
	using namespace std;
	cout<<"What's your first name? "<<firstname;
	cin.getline(firstname,20);
	cout<<"What's your last name? "<<lastname;
	cin.getline(lastname,20);
	cout<<"What letter grade do you deserve? "<<grade;
	cin>>grade;
	cout<<"What's your age? "<<age;
	cin>>age;
	cout<<"Name:"<<lastname<<","<<firstname<<endl;
	grade=grade+1;
	cout<<"Grade:"<<grade<<endl;
	cout<<"Age:"<<age<<endl;
	return 0;
 } 

#include<iostream>
int main()
{
	using namespace std;
	cout<<"Please enter a Celsius value:";
	int Celsius;
	cin>>Celsius;
	int Fahrenheit;
	Fahrenheit=Celsius*1.8+32;
	cout<<Celsius<<" degrees Celsius is "<<Fahrenheit<<" degrees Fahernheit.";
	return 0; 
}

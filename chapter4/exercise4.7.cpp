#include<iostream>
struct pizza
{
	char name[20];
	double diameter;
	double weight;
};
int main()
{
	using namespace std;
    pizza info;
	cout<<"Please enter your company name:";
	cin.getline(info.name,20);
	cout<<"Please enter your pizza diameter:";
	cin>>info.diameter;
	cout<<"Please enter your pizza weight:";
	cin>>info.weight;
	cout<<"\npizza:"<<endl;
	cout<<"name:"<<info.name<<endl;
	cout<<"diameter:"<<info.diameter<<endl;
	cout<<"weight:"<<info.weight<<endl;
	return 0;
}

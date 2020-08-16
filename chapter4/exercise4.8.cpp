#include<iostream> 
struct pizza
{
	char brand[20];
	double diameter;
	double weight;
};
int main()
{
	using namespace std;
	pizza*ps=new pizza;
	cout<<"Enter your pizza brand:";
	cin.getline(ps->brand,20);
	cout<<"Enter your pizza diameter:";
	cin>>ps->diameter;
	cout<<"Enter your pizza weight:";
	cin>>ps->weight;
	cout<<"\npizza:"<<endl;
	cout<<"brand:"<<ps->brand<<endl;
	cout<<"diameter:"<<ps->diameter<<endl;
	cout<<"weight:"<<ps->weight<<endl;
	delete ps;
	return 0;
}

#include<iostream>
#include<string>
int main()
{
	using namespace std;
	struct CandyBar
{
	string brand;
	double weight;
	int calories;
};
	CandyBar *ps=new CandyBar[3];
	ps[0]={"Mocha Mouch",2.3,350};
	ps[1]={"Mocha Mouch",2.3,350};
	ps[2]={"Mocha Mouch",2.3,350};
	cout<<ps[0].brand<<endl;
	cout<<ps[1].weight<<endl;
	cout<<ps[2].calories<<endl;
	delete ps;
	return 0;
}


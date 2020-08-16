#include<iostream>
struct CandyBar
{
	char brand[20];
	double weight;
	int calories;
};
int main()
{
	using namespace std;
	CandyBar snack[3]={
	{"Mocha Mouch",2.3,350},{"Mocha Mouch",2.3,350},{"Mocha Mouch",2.3,350} 
	};
	cout<<snack[0].brand<<endl;
	cout<<snack[1].weight<<endl;
	cout<<snack[2].calories<<endl;
	return 0;
}

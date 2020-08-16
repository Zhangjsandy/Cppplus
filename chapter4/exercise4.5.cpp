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
	CandyBar snack={"Mocha Mouch",2.3,350};
    cout<<snack.brand<<endl;
    cout<<snack.weight<<endl;
    cout<<snack.calories<<endl;
    return 0;
}


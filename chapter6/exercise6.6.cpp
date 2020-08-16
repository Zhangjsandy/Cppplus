#include <iostream>
struct patrons
{
	char name[20];
	double money;
};
int main()
{
	using namespace std;
	int num, high, low;
	cout << "Please enter the number of patrons: ";
	cin >> num;
	cin.get();
	patrons * p =new patrons[num];
	for (int i = 0; i < num ; i++)
	{
		cout << "Please enter the name of the " << i + 1 << " patrons: ";
		cin.get(p[i].name,20);
		cout << "money: ";
		cin >> p[i].money;
		cin.get();
	}
	cout << "Grand Patrons are: ";
	high = 0;
	for (int i = 0; i< num; i ++)
	{
		if (p[i].money >1000)
		{
			cout << p[i].name << ":\t" << p[i].money << endl;
			high ++;
		}
	}
	if (high == 0)
		cout << "none\n";
	cout << "Partrons are: " << endl;
	low = 0;
	for (int i = 0; i < num; i++)
		if (p[i].money <= 1000)
		{
			cout <<p[i].name << ": \t" << p[i].money << endl;
			low ++;
		}
	if (low == 0)
		cout << "none\n";
	return 0;
}

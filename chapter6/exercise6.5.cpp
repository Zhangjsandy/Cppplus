#include <iostream>
int main()
{
	using namespace std;
	int income;
	double tax;
	cout << "Please enter your income: ";
	while (cin >> income && income > 0)
	{
		if (income > 5000)
			if (income > 15000)
				if (income > 35000)
					tax = 4000 + 0.2 * (income - 35000);
				else
					tax = 1000 + 0.15 * (income - 15000);
			else
				tax = 0.1 * (income - 5000);
		else tax = 0;
		cout << "The tax is: " << tax << endl;
	}
	return 0;
}

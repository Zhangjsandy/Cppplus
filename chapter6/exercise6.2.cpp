#include <iostream>
int main()
{
	using namespace std;
	double donation[10], sum = 0, average;
	int i = 0;
	cout << "donation 1: ";
	while (i < 10 && cin >> donation[i])
	{
		sum += donation[i];
		cout << "donation " << ++ i << ": ";
	}
	average = sum / i;
	cout << "The average of " << i << " donation is: " << average << endl
		 << "Donation ";
	for (int j = 0; j < i; j ++)
		if (donation[i] > average)
			cout << i << " ";
	cout << "over average." << endl;
	return 0;
}

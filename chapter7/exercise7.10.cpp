#include <iostream>
double add(double x, double y);
double sub(double x, double y);
double calculate(double x, double y, double (*func)(double x, double y));
int main()
{
    using namespace std;
    while (1)
    {
	cout << "Please enter two numbers, 'q' to quit: ";
	double x, y;
	double result;
	cin >> x >> y;
	if (!cin)
	{
	    cout << "Input terminated.\nQuit.\n";
	    break;
	}
	double q = calculate(x, y, add);
	double w = calculate(x, y, sub);
	cout << x << " add " << y << " equals to " << q << endl;
	cout << x << " minus " << y << " equals to " << w << endl;
    }
    return 0;
}
double add(double x, double y)
{
    return x + y;
}
double sub(double x, double y)
{
    return x - y;
}
double calculate(double x, double y, double (*func)(double x, double y))
{
    double result;
    result = (*func)(x, y);
    return result;
}

#include<iostream>
const int Max=5;
double *fill_array(double *ar, double *limit);
void show_array(const double *ar, double *n);
void revalue(double r, double *ar, double *n);
int main()
{
    using namespace std;
    double properties[Max];
    double *size = fill_array(properties, properties + Max);
    show_array(properties, size);
    cout << "Enter revaluation factor: ";
    double factor;
    cin >> factor;
    revalue(factor, properties, size);
    show_array(properties, size);
    cout << "Done.\n";
    return 0;
}
double *fill_array(double *ar,double *limit)
{
	using namespace std;
	double temp;
    int i = 0;
    double *p;
    for (p = ar; p < limit; p++, i++)
    {
	cout << "Enter value#" << (i + 1) << ": ";
	cin >> temp;
	if (!cin)
	{
	    cin.clear();
	    while (cin.get() != '\n')
		continue;
	    cout << "Bad input; input process terminated.\n";
	    break;
	}
	else if (temp < 0)
	    break;
	*p = temp;
    }
    return p;
}
void show_array(const double *ar,double *n)
{
	using namespace std;
	int i = 0;
    for (const double *p = ar; p < n; p++, i++)
    {
	cout << "Property #" << (i + 1) << ": $";
	cout << *p << endl;
    }
}
void revalue(double r,double *ar,double *n)
{
	using namespace std;
	for (double *p = ar; p < n; p++)
	*p *= r;
}

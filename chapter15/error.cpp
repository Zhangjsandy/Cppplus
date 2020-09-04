#include <iostream>
#include <cmath>
#include "error.h"
double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    double x, y, z;
    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try{
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y << " is " << gmean(z, y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }
        catch (error_mean & em)
        {
            em.report();
            cout << "Try again.\n";
            continue;
        }
    }
    cout << "Bye!\n";
    return 0;
}
double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}
double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a, b);
    return std::sqrt(a * b);
}

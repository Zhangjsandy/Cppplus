#include "Sales.h"
#include <iostream>
using namespace std;
Sales::Sales(double *s)
{
    sales[0] = s[0];
    double total = sales[0];
    max = sales[0];
    min = sales[0];
    int i;
    for (i = 1; i < QUARTERS && s[i]>0; i++)
    {

        sales[i] = s[i];
        total += sales[i];
        if(max < sales[i])
            max = sales[i];
        if(min > sales[i])
            min = sales[i];
    }
    average = total/i;
}
Sales::~Sales()
{
}
void Sales::setSales()
{
    double total = 0;
    for (int i = 0; i < QUARTERS; i++)
    {
        cout << "Please enter the sales for Quater " << i+1 << " : ";
        cin >> sales[i];
        if (i == 0)
        { 
            max = sales[i];
            min = sales[i];
        }
        else {
            if (max < sales[i])
                max = sales[i];
            if (min > sales[i])
                min = sales[i];
        }
        total += sales[i];
    }
    average = total/QUARTERS;
}
void Sales::showSales()
{
    for (int i = 0; i < QUARTERS; i++)
        {
            if (sales[i] >0)
            cout << "The sales for Quater " << i+1 << " is  " << sales[i] << endl;
        }
        cout << "The max sales is  " << max<< endl;
        cout << "The min sales is  " << min<< endl;
        cout << "The average sales is  " << average<< endl;
}


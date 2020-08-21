#include "SALES.h"  
#include <iostream> 
static int count=0;
using namespace std; 
namespace SALES  
{  
    void setSales(Sales &s,const double ar[],int n)
    {
        int num = 0;
        s.max = 0;
        s.min = 0;
        double total = 0;
        while(num < n && num < QUARTERS)
        {
            s.sales[num] = ar[num];
            if (num == 0)
            { 
                s.max = s.sales[num];
                s.min = s.sales[num];
            }
            else {
                if (s.max < s.sales[num])
                    s.max = s.sales[num];
                if (s.min > s.sales[num])
                    s.min = s.sales[num];
            }
            total += ar[num];
            num++;  
        }
        s.average = total/num;
    }
    void setSales(Sales & s)
    {
        double total = 0;
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Please enter the sales for Quater " << i+1 << " : ";
            cin >> s.sales[i];
            if (i == 0)
            { 
                s.max = s.sales[i];
                s.min = s.sales[i];
            }
            else {
                if (s.max < s.sales[i])
                    s.max = s.sales[i];
                if (s.min > s.sales[i])
                    s.min = s.sales[i];
            }
            total += s.sales[i];
        }
        s.average = total/QUARTERS;
    }
    void showSales(const Sales &s)
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            if (s.sales[i] >0)
            cout << "The sales for Quater " << i+1 << " is  " << s.sales[i] << endl;
        }
        cout << "The max sales is  " << s.max<< endl;
        cout << "The min sales is  " << s.min<< endl;
        cout << "The average sales is  " << s.average<< endl;
    }

}

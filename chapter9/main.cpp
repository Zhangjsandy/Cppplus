#include "sales.h"
#include <iostream>
int main()
{
    using namespace SALES;
    Sales s1, s2;
    double ar[3] = {1000, 2000, 3000};
    setSales(s1, ar, 3);
    setSales(s2);
    showSales(s1);
    showSales(s2);
    return 0;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



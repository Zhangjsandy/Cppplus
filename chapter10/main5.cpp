#include "sales.h"
#include <iostream>
int main()
{
    double d[] = {1000,2000,3000};
    Sales s1(d);
    s1.showSales();
    s1.setSales();
    return 0;
}

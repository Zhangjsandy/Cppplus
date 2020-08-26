#include<iostream>
#include"stock20.h"
using namespace std;
const int STKS = 4;
int main()
{
    Stock stocks[STKS] =
    {
        Stock("NS",12,20.0),
        Stock("B O",200,2.0),
        Stock("M O",130,3.25),
        Stock("F E",60,6.5)
    };
    cout << "Stock holding: " << endl;
    int st;
    for (st = 0; st < STKS; st++)
    {
        stocks[st].show();
    }
    const Stock *top = &stocks[0];
    for (st = 1; st < STKS; st++)
    {
        top =&top -> topval(stocks[st]);  
    }
    cout << "\nmost valuable holding : \n";
    top->show();
    return 0;
}


#include<iostream>
#include"stock10.h"
using namespace std;
Stock::Stock()
{
    cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const string &co, long n, double pr)
{
    cout << "Constructor using " << co << " called\n";
    company = co;
    if (n < 0)
    {
        cout << "shares can't be negative." << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
Stock::~Stock()
{
    cout << "Bye, " << company << "!\n";
}
void Stock::buy(long num, double price)
{
    if (num < 0)
        cout << "shares purchased can't be negative.\n";
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price)
{
    if (num < 0)
        cout << "shares sold can't be negative.\n";
    else if (num > shares)
        cout << "you can't sell more than you have.\n";
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
void Stock::show()
{
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Company: " << company
        << ", Shares:" << shares
        << "\nShare Price: $" << share_val;
    cout.precision(2);
    cout << ", Total Worth: $" << total_val << '\n';
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

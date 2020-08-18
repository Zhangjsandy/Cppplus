#include <iostream>
using namespace std;
template<typename T>     
T SumArray(T arr[], int n)
{
    T sum = 0;
    cout << "template A" << endl;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}
template<typename T>       
T SumArray(T *arr[], int n)
{
    T sum = 0;
    cout << "template B" << endl;
    for (int i = 0; i < n; i++)
        sum += *arr[i];
    return sum;
}
struct debts
{
    char name[50];
    double amount;
};
int main()
{
    int things[6] = { 13,31,103,301,310,130 };
    struct debts mr_E[3] =
    {
        { "I W",2400.0 },
        { "U F",1300.0 },
        { "I S",1800.0 }
    };
    double *pd[3];
    for (int i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }
    cout << "sum of things:" << SumArray(things, 6) << endl;
    cout << "sum of debts:" << SumArray(pd, 3) << endl;
    return 0;
}

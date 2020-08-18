#include <iostream>   
using namespace std;
template <typename T>
void show(T arr[],int n) {
    cout << "template A" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}
template <typename T>
void show(T * arr[], int n) 
{
    cout << "template B" << endl;
    for (int i = 0; i < n; i++)
        cout << *arr[i] << ' ';
    cout << endl;
}

struct debt 
{
    char name[40];
    double amount;
};

int main()
{
    int thing[6] = { 13,31,103,301,310,130 };
    struct debt mr_E[3] = 
	{
        { "I W",2400.0 },
        { "U F",1300.0 },
        { "I S",1800.0 }
    };
    double *pd[3];
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    cout << "Listen:" << endl;
    show(thing, 6);
    cout << "Listen debts:" << endl;
    show(pd, 3);
    return 0;
}

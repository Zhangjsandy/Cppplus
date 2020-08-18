#include <iostream>
#include<cstring>
using namespace std;
template<typename T>
T maxn(T arr[], int n);
template<> char * maxn(char *arp[], int n);
int main()
{
    int a1[6] = { 1,5,2,3,4,10 };
    double a2[4] = { 2.5,3.7,8.9,1.44 };
    cout << maxn(a1, 6) << endl;
    cout << maxn(a2, 4) << endl;
    cout << endl;
    char *arp[] = { "ald","sdaf","efrv","dsfrv","dfrvg" };  
    cout << maxn(arp, 5) << endl;
    return 0;
}
template<typename T>
T maxn(T arr[], int n)
{
    T max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
template<> char * maxn(char *arp[], int n)
{
    int length = strlen(arp[0]);
    char *p = arp[0];
    for (int i = 0; i < n; i++)
    {
        if (strlen(arp[i]) > length)
        {
            length = strlen(arp[i]);
            p = arp[i];
        }

    }
    return p;
}

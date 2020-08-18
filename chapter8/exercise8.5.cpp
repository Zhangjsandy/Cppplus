#include <iostream>
using namespace std;
const int n = 5;
template<typename T>
T max5(T arr[n]);
int main()
{
    int a1 [5]= { 1,5,2,3,4 };
    double a2[5] = { 2.5,3.7,8.9,1.4,2.33 };
    cout << max5(a1) << endl;
    cout << max5(a2) << endl;
    return 0;
}
template<typename T>
T max5(T arr[n])
{
    T max =arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

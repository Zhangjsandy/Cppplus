#include <iostream>
#include <array>
int main()
{
	using namespace std;
    array<long double, 101> facterials;
    facterials[1]=facterials[0]=1
    for (int i = 2; i <facterials.size(); i++)
    {
        facterials[i] = i * facterials[i - 1];
    }
    for (int i = 0; i < facterials.size(); i++)
    {
        cout << i << "!=" << facterials[i] << endl;
    }
    return 0;
}

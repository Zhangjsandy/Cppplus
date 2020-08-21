#include <iostream>
#include "golf.h"
const int ArrSize = 10;
using namespace std;
int main()
{
    golf golfarr[ArrSize];
    setgolf(golfarr[0], "xyz abc", 5);
    int set = 1;
    int num = 1;
    while (num < ArrSize)
    {
        set = setgolf(golfarr[num]);
        if (set ==1)
            num++;
        else
            break;
    }

    cout << "show all golfer" << endl;
    for (int i =0; i < num; i++)
    {
        showgolf(golfarr[i]);
    }
    cout << "revalue handicap and show all golfer" << endl;
    for (int i =0; i < num; i++)
    {
        handicap(golfarr[i], i+1);
        showgolf(golfarr[i]);
    }
    return 0;
}

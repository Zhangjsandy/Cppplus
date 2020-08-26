#include "golf.h"
#include <cstring>
#include <iostream>
using namespace std;
golf::golf(char *n, int h)
{
    strcpy(fullname, n);
    handicap = h;
}
golf::golf()
{
    cout << "using intereactive method to creat a golf object" << endl;
    char name[LEN];
    int h;
    cout << "Please input the fullname" << endl;
    if (cin.get(name, LEN))
    {
        cin.get();
        cout << "Please enter the number of handicap (must be integer): ";      
        cin >> h;
        cin.get();
    }
    golf gtem(name, h);
    *this  = gtem;
}
golf::~golf()
{
}
void golf::sethandicap(int h)
{
    handicap = h;
}
void golf::showgolf()
{
    cout << fullname << " has " << handicap <<" times of handicap" << endl;
}

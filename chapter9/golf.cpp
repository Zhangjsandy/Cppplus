#include"golf.h"
#include <cstring>
#include <iostream>
using namespace std;
void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname,name);
    g.handicap = hc;
}
int setgolf(golf & g)
{   
    cout << "Please enter the name: ";  
    if (cin.get(g.fullname, Len))
    {
        cin.get();
        cout << "Please enter the handicap: ";      
        cin >> g.handicap;
        cin.get();
        return 1;
    }
    else
        return 0;
}
void handicap(golf & g, int hc)
{
    g.handicap = hc;
}
void showgolf(const golf & g)
{
    cout << g.fullname << " take " << g.handicap <<" handicap" << endl;
}

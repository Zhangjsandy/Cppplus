#include "Plorg.h"
#include <cstring>
#include <iostream>
using namespace std;
Plorg::Plorg(char *n)
{
    CI = 50;
    strcpy(name,n);
}
Plorg::~Plorg()
{
}
void Plorg::showplorg() const
{
    cout << name << " 's CI is " << CI << endl;
}
void Plorg::newCI(int ci) 
{
    CI = ci;
}

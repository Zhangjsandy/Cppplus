#include "Classic.h"
#include <iostream>
#include<cstring>
Cd::Cd(char * s1, char * s2, int n, double x)
{
	strncpy(performers, s1,50);
	strncpy(label, s2, 20);
	selections = n;
	playtime = x;
}
Cd::Cd()
{
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}
void Cd::Report() const
{
	using std::cout;
	using std::endl;
	cout << "Performers: " << performers << endl
		<< "Label: " << label << endl
		<< "Selections: " << selections << endl
		<< "Playtime: " << playtime << endl;

}
Classic::Classic(char * s1, char * s2, char * s3, int n, double x):Cd(s1,s2,n,x)
{
	strncpy(name, s3, 20);
}
Classic::Classic()
{
	name[0] = '\0';
}
void Classic::Report() const
{
	std::cout << "Name: " << name << std::endl;
	Cd::Report();
}

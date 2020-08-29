#include <iostream>
#include"string1.h"
using namespace std;
const int Arsize = 10;
const int maxlen = 81;
int main()
{
String name;
cout << "hi,what's your name?\n>>";
cin >> name;
cout << name << ",please enter up to " << Arsize
	<< "short saying " <"empty line to quit>:\n";
String saying[Arsize];
char temp[maxlen];
int i;
for (i = 0;i < Arsize;++i)
{
	cout << i + 1 << ":";
	cin.get(temp, maxlen);
	while (cin&&cin.get() != '\n')
		continue;
	if (!cin || temp[0] == '\0')
	    break;
	else
		saying[i] = temp;
}
int total = i;
if(total>0)
{
	cout << "here are you saying:\n";
	for (i = 0;i < total;i++)
		cout << saying[i][0] << ":" << saying[i] << endl;
	int shortest=0;
	int first = 0;
	for (i = 0;i < total;++i)
	{
		if (saying[i].length() < saying[shortest].length())
			shortest = i;
		if (saying[i] < saying[first])
			first = i;
	}cout << "shortest saying:\n" <<saying[shortest]<<endl;
	cout << "first alphabetically :\n"<<saying[first]<<endl;
		cout << "this program used " << String::HowMany()
			<<"String objects .Bye.\n";

}
else
	cout << "No input! Bye.\n";
	return 0;
}

#include<iostream>
#include<cstdlib>
#include<ctime>
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
String sayings[Arsize];
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
		sayings[i] = temp;
}
int total = i;
if(total>0)
{
	cout << "here are you saying:\n";
	for (i = 0;i < total;i++)
		cout << sayings[i]<<"\n";
		String * shortest=&sayings[0];
		String * first=&sayings[0];
		for(i=1;i<total;i++)
		{
			if(sayings[i].length()<shortest->length())
			shortest=sayings[i];
			if(sayings[i]<*first)
			first=&sayings[i];
		}
		cout<<"Shortest saying:\n"<<shortest<<endl;
		cout<<"First alphabetically:\n"<<*first<<endl;
		srand(time(0));
		int choice=rand()%total;
		String * favorite=new String(sayings[choice]);
		cout<<"My favorite saying:\n"<<*favorite<<endl;
		delete favorite;
	}
	else
	cout<<"Not much to say,eh?\n";
	cout<<"Bye.\n";
	return 0;
}

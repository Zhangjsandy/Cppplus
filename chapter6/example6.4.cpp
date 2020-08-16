#include<iostream>
#include<cctype>
const int strsize=20;
struct bop{
	char fullname[strsize];//real name
	char title[strsize];//job title
	char bopname[strsize];//secret BOP name
	int preference;//0=fullname,1=title,2=bopname
}; 
int main()
{
	using namespace std;
	char ch;
	bool exit=false;
	int i=0;
	int preference=0;
	bop b[5]={
	{"Wimp Macho","wim","wi", 0},
	{"Raki Rhodes","Junior Programmer","Ra",1},
	{"Celia Laiter","cel","MIPS",2},
	{"Hobby Hipman","Analist trainee","Ho",1},
	{"Pat Hand","pat","LOOPY",2}
	};
	cout<<"Benevolent Order of Programmers Report\n";
	cout<<"a.display by name    b.display by title\n";
	cout<<"c.display by bopname  d.display by preference\n";
	cout<<"q.quit\n";
	cout<<"Enter your choice:";
	while(!exit&&(cin>>ch))
	{
		if(ch=='q')
		{
			cout<<"Bye!"<<endl;
			break;
		}
		for(i=0;i<5;i++)
		{
			switch(ch)
			{
				case'a':
					cout<<b[i].fullname<<endl;
					break;
				case'b':
					cout<<b[i].title<<endl;
					break;
				case'c':
					cout<<b[i].bopname<<endl;
					break;
				case'd':
					preference=b[i].preference;
				switch(preference)
				{
					case 0:
						cout<<b[i].fullname<<endl;
						break;
					case 1:
						cout<<b[i].title<<endl;
						break;
					case 2:
						cout<<b[i].bopname<<endl;
						break;
				}
				break;
			}
		}
		if(i==5)
		{
			cout<<"Next choice:";
		}
	}
	return 0;
}

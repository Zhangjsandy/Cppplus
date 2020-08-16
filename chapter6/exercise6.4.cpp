#include <iostream>
using namespace std;
const int strsize = 20;
const int NUM = 5;
struct bop{
char fullname[strsize]; 
char title[strsize];    
char bopname[strsize];  
int preference;         
};
void display_by_name();
void display_by_title();
void display_by_bopname();
void display_by_preference();
bop people[5] = {
		{
			"Wimp Macho",
			"BOSS",
			"WM",
			0
		},
		{
			"Raki Rhodes",
			"Manager",
			"Junior Programmer",
			2
		},
		{
			"Celia Laiter",
			"MIPS",
			"CL",
			1
		},
		{
			"Hoppy Hipman",
			"Analyst Trainee",
			"AT",
			1
		},
		{
			"Pat Hand",
			"Student",
			"LOOPY",
			2
		}
	};
char ch;
int main()
{
	cout << "a. display by name         b. display by title" << endl << "c. display by bopname      d. display by preference" << endl << "q. quit" << endl << "Enter your choice: ";
	while(cin >> ch && ch != 'q'){
		switch(ch){
		case 'a' : display_by_name();break;
		case 'b' : display_by_title();break;
		case 'c' : display_by_bopname();break;
		case 'd' : display_by_preference();break;
		}
		cout << "Next choice: ";
	}
	cout << "Bye!" << endl;
	return 0;
}
void display_by_name()
{
	for(int i = 0 ; i < NUM ; ++ i)
		cout << people[i].fullname << endl;
}
void display_by_title(){
	for(int i = 0 ; i < NUM ; ++ i)
		cout << people[i].title << endl;
}
void display_by_bopname(){
	for(int i = 0 ; i < NUM ; ++ i)
		cout << people[i].bopname << endl;
}
void display_by_preference(){
	for(int i = 0 ; i < NUM ; ++ i){
		if(people[i].preference == 0)
			cout << people[i].fullname << endl;
		else if (people[i].preference == 1)
			cout << people[i].title << endl;
		else 
			cout << people[i].bopname << endl;
	}
}

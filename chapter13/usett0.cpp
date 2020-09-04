#include <iostream>
#include"tabtann0.h"
int main(void) 
{
	using namespace std;
	Tabletennisplayer player1("Chuck","Blizzard",true);
	Tabletennisplayer player2("Tara","Boomdea",false);
	player1.name();
	if (player1.Hastable())
		cout<<":has a table.\n";
	else
		cout<<":hasn't a table.\n";
	player2.name();
	if(player2.Hastable())
		cout<<":has a table.\n";
	else
		cout<<":hasn't a table.\n";
	return 0;
}

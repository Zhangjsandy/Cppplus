#include <iostream>
#include"tabtenn1.h"
int main(void)
{
	using namespace std;
	Tabletennisplayer player1("Tara","Boomdea",false);
	Ratedplayer rplayer1(1140,"Mallory","Duck",true);
	rplayer1.name();
	if(rplayer1.Hastable())
	cout<<":has a table."<<endl;
	else
	cout<<":hasn't a table."<<endl;
	player1.name();
	if(player1.Hastable())
	cout<<":has a table.\n";
	else
	cout<<":hasn't a table.\n";
	cout<<"Name:";
	rplayer1.name();
	cout<<";Rating:"<<rplayer1.Rating()<<endl;
	Ratedplayer rplayer2(1212,player1);
	cout<<"Name:";
	rplayer2.name();
	cout<<";Rating:"<<rplayer2.Rating()<<endl;
	return 0;
}

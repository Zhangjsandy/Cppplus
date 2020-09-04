#ifndef TABTENN1_H_
#define TABTENN1_H_
#include<string>
using std::string;
class Tabletennisplayer
{
private:
	string firstname;
	string lastname;
	bool hastable;
public:
	Tabletennisplayer(const string&fn="none",const string&ln="none",bool ht=false);
	void name()const;
	bool Hastable()const{return hastable;};
	void resettable(bool v){hastable=v;};
};
class Ratedplayer:public Tabletennisplayer
{
private:
	unsigned int rating;
public:
	Ratedplayer(unsigned int r=0,const string&fn="none",const string&ln="none",bool ht=false);
	Ratedplayer(unsigned int r,const Tabletennisplayer&tp);
	unsigned int Rating()const{return rating;}
	void resetrating(unsigned int r){rating=r;}
};
#endif


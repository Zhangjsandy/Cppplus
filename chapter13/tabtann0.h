#ifndef TABTANN0_H_
#define TABTANN0_H_
#include<string>
using std::string;
class Tabletennisplayer
{
private:
	string firstname;
	string lastname;
	bool hastable;
public:
	Tabletennisplayer(const string & fn="none",const string&ln="none",bool ht=false);
	void name()const;
	bool Hastable()const{return hastable;};
	void resettable(bool v){hastable=v;};
};
#endif

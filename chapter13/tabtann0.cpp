#include<iostream>
#include"tabtann0.h"
Tabletennisplayer::Tabletennisplayer(const string&fn,const string&ln,bool ht):firstname(fn),lastname(ln),hastable(ht){}
void Tabletennisplayer::name ()const
{
	std::cout<<lastname<<","<<firstname;
}


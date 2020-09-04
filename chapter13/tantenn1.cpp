#include "tabtenn1.h"   
#include <iostream>   
#include <cstring>   
Tabletennisplayer::Tabletennisplayer (const string&fn, const string & ln, bool ht):firstname(fn),lastname(ln),hastable(ht){}   
void Tabletennisplayer::name() const  
{   
    std::cout << lastname << ", " << firstname;   
}   
Ratedplayer::Ratedplayer(unsigned int r, const string&fn, const string&ln, bool ht) : Tabletennisplayer(fn, ln, ht)   
{   
    rating = r;   
}     
Ratedplayer::Ratedplayer(unsigned int r, const Tabletennisplayer & tp): Tabletennisplayer(tp), rating(r)   
{   
}  

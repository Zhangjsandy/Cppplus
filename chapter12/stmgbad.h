#include<iostream>
#ifndef STMGBAD_H_
#define STMDBAD_H_
class Stringbad
{
private:
	char * str;
	int len;
	static int num_strings;
public:
	Stringbad(const char * s);
	Stringbad();
	~Stringbad();
	friend std::iostream & operator<<(std::ostream & os,const Stringbad & st);
};
#endif

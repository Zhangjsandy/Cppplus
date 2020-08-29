#include<cstring>
#include<iostream> 
#include"stmgbad.h"
using namespace std;
Stringbad::Stringbad(const char * s)
{
	len=strlen(s);
	str=new char(len+1);
	strcpy(str,s);
	num_strings++;
	cout<<num_strings<<":\""<<str<<"\" object created\n";
}
Stringbad::Stringbad()
{
	len=4;
	str=new char[len+1];
	strcpy(str,"C++");
	num_strings++;
    cout<<num_strings<<":\""<<str<<"\" default object created\n";
}
Stringbad::~Stringbad()
{
	cout<<":\""<<str<<"\" object deleted,";
	--num_strings;
	cout<<num_strings<<"left\n";
	delete[]str;
 } 
ostream & operator<<(ostream & os,const Stringbad & st)
 {
 	os<<st.str;
 	return os;
 }

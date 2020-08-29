#include <iostream> 
#include <cstring> 
#include "cow.h" 
using namespace std; 
Cow::Cow() 
{ 
strcpy(name,"none"); 
hobby=new char[5]; 
strcpy(hobby,"none"); 
weight=0; 
} 
Cow::Cow(const char* nm,const char* ho,double wt) 
{ 
strcpy(name,nm); 
hobby=new char[20]; 
strcpy(hobby,ho); 
weight=wt; 
} 
Cow::Cow(const Cow &c) 
{ 
strcpy(name,c.name); 
hobby=new char[20]; 
strcpy(hobby,c.hobby); 
weight=c.weight; 
} 
Cow::~Cow() 
{ 
delete []hobby; 
} 
Cow & Cow::operator=(const Cow &c) 
{ 
strcpy(name,c.name); 
hobby=new char[20]; 
strcpy(hobby,c.hobby); 
weight=c.weight; 
return *this; 
} 
void Cow::ShowCow()const 
{ 
cout<<"name:"<<name<<endl; 
cout<<"hobby:"<<hobby<<endl; 
cout<<"weight:"<<weight<<endl; 
} 

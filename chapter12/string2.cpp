#include <iostream> 
#include <cctype> 
#include <cstring> 
#include "string2.h" 
using namespace std; 

int String::num_strings=0; 

int String::HowMany() 
{ 
return num_strings; 
} 
String::String(const char* s) 
{ 
len=strlen(s); 
str=new char[len+1]; 
strcpy(str,s); 
num_strings++; 
} 
String::String() 
{ 
len=4; 
str=new char[100]; 
num_strings++; 
} 
String::String(const String &st) 
{ 
num_strings++; 
len=st.len; 
str=new char[100]; 
strcpy(str,st.str); 
} 
String::~String() 
{ 
--num_strings; 
delete []str; 
} 
String & String::operator=(const String &st) 
{ 
if(this==&st) 
return *this; 
len=st.len; 
str=new char[100]; 
strcpy(str,st.str); 
return *this; 
} 
String & String::operator=(const char* s) 
{ 
len=strlen(s); 
str=new char[100]; 
strcpy(str,s); 
return *this; 
} 
char & String::operator[](int i) 
{ 
return str[i]; 
} 
const char & String::operator[](int i)const 
{ 
return str[i]; 
} 
void String::Stringlow() 
{ 
for(int i=0;i<100;i++) 
tolower(str[i]); 
} 
void String::Stringup() 
{ 
for(int i=0;i<100;i++) 
toupper(str[i]); 
} 
int String::has(char a) 
{ 
static int count=0; 
for(int i=0;i<100;i++) 
if(str[i]==a) 
count++; 
return count; 
} 
String & operator+(String &a,String &b) 
{ 
static String c; 
c.len=a.len+b.len; 
c.str=new char[a.len+b.len+1]; 
c.str=strcat(a.str,b.str); 
return c; 
} 
String & operator+(const char* b,String &a) 
{ 
static char* c=new char[20]; 
strcpy(c,b); 
a.str=strcat(c,a.str); 
return a; 
} 
bool operator<(const String &st1,const String &st2) 
{ 
return (strcmp(st1.str,st2.str)<0); 
} 
bool operator>(const String &st1,const String &st2) 
{ 
return (strcmp(st1.str,st2.str)>0); 
} 
bool operator==(const String &st1,const String &st2) 
{ 
return (strcmp(st1.str,st2.str)==0); 
} 
ostream & operator<<(ostream &os,const String &st) 
{ 
os<<st.str; 
return os; 
} 
istream & operator>>(istream &is,String &st) 
{ 
static char temp[String::CINLIM]; 
is.get(temp,String::CINLIM); 
if(is) 
st=temp; 
while(is && is.get()!='\n') 
continue; 
return is; 
} 

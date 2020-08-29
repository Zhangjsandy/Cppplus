#include <iostream> 
#include <cstring> 
#include "stock.h" 
using namespace std; 
Stock::Stock() 
{ 
company=new char[30]; 
strcpy(company,"no name"); 
shares=0; 
share_val=0.0; 
total_val=0.0; 
} 
Stock::Stock(const char* co,int n,double pr) 
{ 
company=new char[30]; 
strcpy(company,co); 
if(n<0) 
{ 
cerr<<"Number of shares can't be negative."<<company<<" shares set to 0.\n"; 
shares=0; 
} 
else 
shares=n; 
share_val=pr; 
set_tot(); 
} 
Stock & Stock::operator=(Stock &a) 
{ 
strcpy(company,a.company); 
shares=a.shares; 
share_val=a.share_val; 
total_val=a.total_val; 
return *this; 
} 
Stock::Stock(const Stock &a) 
{ 
company=new char[30]; 
strcpy(company,a.company); 
shares=a.shares; 
share_val=a.share_val; 
total_val=a.total_val; 
} 
Stock::~Stock() 
{ 
delete []company; 
} 
void Stock::buy(int num,double price) 
{ 
if(num<0) 
{ 
cerr<<"Number of shares purchased can't be negative. " 
<<"Transaction is aborted.\n"; 
} 
else 
{ 
shares+=num; 
share_val=price; 
set_tot(); 
} 
} 
void Stock::sell(int num,double price) 
{ 
if(num<0) 
{ 
cerr<<"Number of shares sold can't be negative. " 
<<"Transaction is aborted.\n"; 
} 
else 
{ 
shares-=num; 
share_val=price; 
set_tot(); 
} 
} 
void Stock::update(double price) 
{ 
share_val=price; 
set_tot(); 
} 
Stock & Stock::topval(Stock &s) 
{ 
if(s.total_val>total_val) 
return s; 
else 
return *this; 
} 
ostream & operator<<(ostream &a,Stock &b) 
{ 
a<<"Company:"<<b.company 
<<" Shares: "<<b.shares<<endl 
<<" Share Price: $"<<b.share_val 
<<" Total Worth: $"<<b.total_val<<endl; 
return a; 
}

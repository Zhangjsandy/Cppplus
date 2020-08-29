#include <iostream> 
#ifndef STOCK_H_ 
#define STOCK_H_ 
using namespace std; 
class Stock 
{ 
private: 
char* company; 
int shares; 
double share_val; 
double total_val; 
void set_tot(){total_val=shares*share_val;} 
public: 
Stock(); 
Stock(const char* co,int n=0,double pr=0.0); 
Stock(const Stock &a); 
Stock & operator=(Stock &a); 
~Stock(); 
void buy(int num,double price); 
void sell(int num,double price); 
void update(double price); 
Stock & topval(Stock &s); 
friend ostream & operator<<(ostream &a,Stock &b); 
}; 
#endif 

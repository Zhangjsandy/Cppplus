#include <iostream>
using namespace std;
#include <cstring>
using namespace std;
struct stringy
{
 char *str;
 int ct;
};
void set(stringy  &str,const char *ctr);
void show(const char *ctr,int num=1);
void show(const stringy &str,int num=1);
int main()
{
 stringy beany;
 char testing[]="Reality isn't what it used to be.";
 set(beany,testing);
 show(beany);
 show(beany,2);
 testing[0]='D';
 testing[1]='u';
 show(testing);
 show(testing,3);
 show("Done! ");
 return 0;
}
void set(stringy  &str,const char *ctr)
{
 str.ct=strlen(ctr);
 str.str=new char[str.ct+1];
 strcpy(str.str,ctr);
}
void show(const char *ctr,int num/* =1 */)
{
 if(num<0)
  cout<<"Bad number!\n";
 else
  for(int i=0;i<num;i++)
  { 
   cout<<ctr<<endl;
  }
}
void show(const stringy &str,int num)
{
 if(num<0)
  cout<<"Bad number!\n";
 else
  for (int i=0;i<num;i++)
  {
   cout<<str.str<<endl;
  }
}

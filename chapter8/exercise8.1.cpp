#include<iostream>
char ch[20]="fuck you off";
void display(char * ch,int n=0);
int main()
{
	display(ch);
	display(ch,5);
	display(ch);
	display(ch,9);
	display(ch,14);
	return 0;
}
void display(char * ch,int n)
{
	static int times=0;
	times++;
	std::cout<<times<<std::endl;
	if(n==0)
	std::cout<<ch<<std::endl;
	else
	{
		for(int i=0;i<times;i++)
		std::cout<<ch<<std::endl;
	}
}

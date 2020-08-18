#include<iostream>
#include<string>
void capital(std::string s);
int main()
{
	using namespace std;
	string str;
	cout<<"Enter a string('q' to quit):"<<str;
	getline(cin,str);
	while(str!="q")
	{
	capital(str);
	cout<<"\nNext string('q' to quit):";
	getline(cin,str);
    }
    cout<<"Bye."<<endl;
    return 0;
}
void capital(std::string s)
{
	for(int i=0;i<s.size();i++)
	{
		s[i]=toupper(s[i]);
		std::cout<<s[i]; 
	} 
}

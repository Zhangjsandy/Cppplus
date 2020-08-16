#include<iostream>
template <typename T>
void Swap(T &a,T &b);
int main()
{
	using namespace std;
	int i=10;
	int j=20;
	cout<<"i,j="<<i<<","<<j<<"."<<endl;
	cout<<"Using compiler-generated int swapper:"<<endl;
	Swap(i,j);
	cout<<"Now i,j="<<i<<","<<j<<"."<<endl;
	char x='A';
	char y='B';
	cout<<"x,y="<<x<<","<<y<<"."<<endl;
	cout<<"Using compilter-generated double swapper:"<<endl;
	Swap(x,y);
	cout<<"Now x,y="<<x<<","<<y<<"."<<endl;
	return 0;
}
template<typename T>
void Swap(T &a,T &b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
}


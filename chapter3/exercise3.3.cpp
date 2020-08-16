#include<iostream>
int main()
{
	using namespace std;
	int la_de=0;
	int la_mi=0;
	int la_se=0;
	const double MI_TO_DE=double(1)/double(60);
	const double SE_TO_MI=double(1)/double(60);
	cout<<"Enter a latitude in degrees, minutes, and seconds:_________";
	cin>>la_de>>la_mi>>la_se;
	cout<<"First,enter the degrees:"<<la_de<<endl;
	cout<<"Next,enter the minutes of arc:"<<la_mi<<endl;
	cout<<"Finally,enter the seconds of arc:"<<la_se<<endl;
	cout<<la_de<<"degrees,"<<la_mi<<"minutes,"<<la_se<<"seconds="<<(la_se*SE_TO_MI+la_mi)*MI_TO_DE+la_de<<" degrees";
	return 0; 
}

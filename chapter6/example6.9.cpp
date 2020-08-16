#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
const int size=20;
struct members
{
	string name;
	double donation;
};
int main()
{
	int n;
	char fileName[size];
	ifstream inFile;
	char name[size];
	double money;
	cout<<"Enter name of the data file:";
	cin.getline(fileName,size);
	if(!inFile.is_open())
	{
		cout<<"Couldn't open the file "<<fileName;
		cout<<" Program terminating.\n";
		exit(EXIT_FAILURE);
	};
	inFile>>n;
	inFile.ignore();
	cout<<n<<" persons"<<endl;
	for(int i=0;i<n;i++)
	{
		inFile.getline(name,size);
		inFile>>money;
		inFile.ignore();
		cout<<"Name"<<name<<endl;
		cout<<"Donation"<<money<<endl;
	}
	inFile.close();
	return 0;
}


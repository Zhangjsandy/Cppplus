#include<iostream>
#include<fstream>
#include<cstdlib>
const int SIZE=70;
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout<<"Enter name of data file: ";
	cin.getline(filename,SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout<<"Could not open the file"<<filename<<endl;
		cout<<"Program terminating."<<endl;
		exit(EXIT_FAILURE);
	}
	double value;
	double sum=0.0;
	int count=0;

	inFile>>value;
	while (inFile.good())
	{
		++count;
		sum+=value;
		inFile>>value;
	}
	if (inFile.eof())
		cout<<"End of file reached."<<endl;
	else if (inFile.fail())
		cout<<"Input terminated by data mismatch."<<endl;
	else
		cout<<"Input terminaated fo unkown reason."<<endl;
	if (count==0)
		cout<<"No data processed."<<endl;
	else
	{
		cout<<"Items read: "<<count<<endl;
		cout<<"Sum: "<<sum<<endl;
		cout<<"Average: "<<sum/count<<endl;
	}
	inFile.close();
	return 0;
}



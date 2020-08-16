#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream infile;
	infile.open("in.txt");
	char ch;
	int num = 0;
	while(infile >> ch){
		if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
			++ num; 
	}
	cout << num << endl;
	return 0;
}

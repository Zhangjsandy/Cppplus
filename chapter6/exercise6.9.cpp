#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
const int size = 30;
using namespace std;
struct person{
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
    cout << "Enter name of the data file: ";
    cin.getline(fileName, size);
    inFile.open(fileName);
    if(!inFile.is_open())
	{
        cout << "Could not open the file " << fileName << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);    
    }
    inFile >> n;
    inFile.ignore();
    cout << n <<" persons" << endl;
    for(int i=0; i<n; i++){
        inFile.getline(name, size);
        inFile >> money;
        inFile.ignore();
        cout << "Name: " << name <<endl;
        cout << "Donation: " << money << endl;
    }
    inFile.close();
    return 0;
} 
 

#include "port.h"
int main()
{
	Port wine1("Gallo", "tawny", 20);
	VintagePort wine2("Romane Conti", "vintage", 10, "The Noble", 1876);
	VintagePort wine3("Merlot", "ruby", 30, "Old Velvet", 1888);
	cout << "Displaying Port object:\n";
	wine1.Show();
	cout << wine1 << endl;
	cout << "Displaying VintagePort object:\n";
	wine2.Show();
	cout << wine2 << endl;
	cout << "Displaying VintagePort object:\n";
	wine3.Show();
	cout << wine3 << endl;
	cout << "Gallo add ten bottles:\n";
	wine1 += 10;
	cout << wine1 << endl;
	cout << "Romane Conti add ten bottles:\n";
	wine2 += 10;
	cout << wine2 << endl;
	cout << "Merlot minus ten bottles:\n";
	wine3 -= 10;
	cout << wine3 << endl;
	Port wine4(wine2);
	cout << "Result of Port copy:\n";
	cout << wine4 << endl;
	VintagePort wine5;
	wine5 = wine3;
	cout << "Result of VintagePort assignment:\n";
	cout << wine5 << endl;
	return 0;
}


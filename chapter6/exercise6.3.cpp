#include <iostream>
int main()
{
	using namespace std;
	char ch;
	cout << "Please enter one of the following choices:" << endl
		 << "c) carnivore            p) pianist" << endl
		 << "t) tree                 g) game   " << endl;
	cin >> ch;
	while (ch != 'c' && ch != 'p' && ch != 't' && ch !='g')
	{
		cout << "Please enter a c, p, t, or g: ";
		cin >> ch;
	}
	cout << "A maple is a ";
	switch (ch)
	{
		case 'c': cout << "carnivore" << endl;
				  break;
		case 'p': cout << "pianist" << endl;
				  break;
		case 't': cout << "tree" << endl;
				  break;
		case 'g': cout << "game" << endl;
				  break;
	}
	return 0;
}

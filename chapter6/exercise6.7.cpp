#include <iostream>
#include <cctype>
#include <string>
int main()
{
	using namespace std;
	string word;
	char ch;
	int consonants, vowels, others;
	consonants = 0;
	vowels = 0;
	others = 0;
	cout << "Enter words (q to quit):\n";
	cin >> word;
	while (word != "q")
	{
		if (isalpha(word[0]))
		{
			ch = tolower (word[0]);
			switch (ch)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u': vowels ++;
						  break;
				default: consonants ++;
						 break;
			}
		}
		else
			others ++;
		cin >> word;
	}
	cout << vowels << " begining with vowels\n";
	cout << consonants << " begining with consonants\n";
	cout << others << " others\n";
	return 0;
}

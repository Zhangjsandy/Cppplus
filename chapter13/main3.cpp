#include "dma1.h"
int main()
{
	baseDMA shirt("Portabelly", 8, "Jack", 1);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "buffalo Keys", 5);
	cout << "Displaying baseDMA object:\n";
	shirt.View();
	cout << "Displaying lacksDMA object:\n";
	balloon.View();
	cout << "Displaying hasDMA object:\n";
	map.View();
	lacksDMA balloon2(balloon);
	cout << "Result of lacksDMA copy:\n";
	balloon2.View();
	hasDMA map2;
	map2 = map;
	cout << "Result of hasDMA assignment:\n";
	map2.View();
	return 0;
}


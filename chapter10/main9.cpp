#include <iostream>
#include "list.h"
void show(Item &);
int main()
{ 
	List l;
	int i = 0;
	while (!l.isfull()){
		l.add(i*10);
		i++;
	}
		l.visit(show);
	std::cin.get();
	return 0;
}
void show(Item &a)
{
	std::cout << a <<std::endl;
}

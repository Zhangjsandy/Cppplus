#include <iostream>
#include "list.h"
List::List(){
	num = 0;
}
void List::add(const Item & a){
	if (num < MAX){
		items[num++] = a;
	}
	else
		std::cout << "The list is full\n";
}
bool List::isempty()const{
	return num == 0;
}
bool List::isfull() const{
	return num == MAX;
}
void List::visit(void(*pf)(Item &)){
	for (int i = 0; i < num; i++)
		pf(items[i]);
}

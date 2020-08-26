#ifndef LIST_H_
#define LIST_H_
typedef unsigned int Item;
class List{
private:
	enum{ MAX = 10 };
	Item items[MAX];
	int num;
public:
	List();
	void add(const Item &);
	bool isempty() const;
	bool isfull() const;
	void visit(void(*pf)(Item &));
};
#endif

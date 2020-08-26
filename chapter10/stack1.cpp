#include "stack1.h"
#include <iostream>
using namespace std;
Stack::Stack()
{
    top = 0;
    totalpay = 0;
}
Stack::~Stack()
{
}
bool Stack::isempty() const
{
    return top == 0;
}
bool Stack::isfull() const
{
    return top == MAX;
}
bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}
bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        totalpay += item.payment;
        cout << "now the payment is " << totalpay << endl;
        return true;
    }
    else
        return false;
}

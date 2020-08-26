#include "Move.h"
#include <iostream>
using namespace std;
Move::Move(double a, double b)
{
    x = a;
    y = b;
}
Move::~Move(void)
{
}
void Move::showmove() const
{
    cout << "Current x is " << x << ", and current y is " << y << endl;
}
Move Move::add(const Move & m) const
{
    Move newmove(m.x+x, m.y+y);
    return newmove;
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}

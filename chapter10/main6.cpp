#include "move.h"
#include <iostream>
int main()
{
    Move move1;
    move1.showmove();
    Move move2(3,5);
    Move move3(1,2);
    move2.showmove();
    move3.showmove();
    Move move4 = move3.add(move2);
    move4.showmove();
    move4.reset();
    move4.showmove();
    return 0;
}

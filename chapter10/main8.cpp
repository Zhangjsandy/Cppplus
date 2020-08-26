#include "Plorg.h"
#include <iostream>
int main()
{
    Plorg p1;
    p1.showplorg();
    Plorg p2("PPPP");
    p2.showplorg();
    p2.newCI(90);
    p2.showplorg();
    return 0;
}

#include "golf.h"
#include <iostream>;
int main()
{
    golf golf1("Li Lei", 10);
    golf golf2;
    golf1.showgolf();
    golf2.showgolf();
    golf1.sethandicap(5);
    golf1.showgolf();
    return 0;
}

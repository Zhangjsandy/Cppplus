#include "BankAccount.h"
int main()
{
    Account test = Account("Tony Hust", "M201876177", 5000.00);
    test.show();
    test.save_money(998.37);
    test.show();
    test.draw_money(100000.00);
    test.show();
    test.draw_money(2554.73);
    test.show();
    return 0;
}


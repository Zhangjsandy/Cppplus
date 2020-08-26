#include <iostream>
#include <cctype>
#include "stack1.h"
int main()
{
    using namespace std;
    Stack st;
    char ch;
    customer c;
    cout << "Please enter A to add a customer, " << endl;
    cout << "P to process a custmer, or Q to quite" << endl;
    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
        case 'A' :
        case 'a': cout << "Enter the customer's name: ";
            cin.get(c.fullname, 35);
            cout << "Enter the customer's payment: ";
            cin >> c.payment;
            //cin.get();
            if (st.isfull())
                cout << "stack already full" << endl;
            else
                st.push(c);
            break;
        case 'p':
        case 'P':
            if (st.isempty())
                cout << " Stack already empty" << endl;
            else
            {
                st.pop(c);  
                cout << " pause" << endl;
            }
            break;

        }
        cout << "Please enter A to add a customer, " << endl;
        cout << "P to process a custmer, or Q to quite" << endl;

    }
    return 0;
}

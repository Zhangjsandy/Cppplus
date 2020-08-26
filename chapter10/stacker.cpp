#include<iostream>
#include<cctype>
#include "stack.h"
using namespace std;
int main()
{
    Stack st;
    char ch;
    unsigned long po;
    cout << "Enter A to add a purchase order, P to process a PO, Q to quit.\n";
    while (cin >> ch&&toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "Enter a PO number to add: ";
            cin >> po;
            if (st.isfull())
                cout << "Stack already full\n";
            else
                st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isempty())
                cout << "Stack already empty\n";
            else
            {
                st.pop(po);
                cout << "PO #" << po << " popped\n";
            }
            break;
        }
        cout << "Enter A to add a purchase order, P to process a PO, Q to quit.\n";
    }
}

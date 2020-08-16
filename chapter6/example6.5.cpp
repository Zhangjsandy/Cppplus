#include<iostream>
using namespace std;
const int Size = 6;
int main() {
    float naaq[Size];
    int i = 0;
    float temp;
    cout << "First value:";
    cin >> temp;
    while (i < Size&&temp >= 0) {
        naaq[i] = temp;
        ++i;
        if (i<Size)
        {
            cout << "Next value:";
            cin >> temp;
        }
    }
    if (0 == i)
        cout << "No data!" << endl;
    else {
        cout << "Enter your NAAQ:";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (naaq[j] > you)
                ++count;
        }
        cout << count <<"of your neighbors have greater awareness of\n"
		"the new age than you do." << endl;
    }
     return 0;
}

#include <iostream>
int main()
{
	using namespace std;
    float grade[3];
    cin >> grade[0]>>grade[1]>>grade[2];
    cout << (grade[0] + grade[1] + grade[2]) / 3.0 << endl;
    return 0;
}

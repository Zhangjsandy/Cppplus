#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<double, 3> ai;
    double firstscore, secondscore, thirdscore;
    cout<<"Please input the first score: ";
    cin>>firstscore;
    cout<<"Please input the second score: ";
    cin>>secondscore;
    cout<<"Please input the third score: ";
    cin>>thirdscore;
    ai[0] = firstscore;    ai[1] = secondscore;     ai[2] = thirdscore;
    cout<<"The number of times is: "<<ai.size()<<endl
        <<"The average score is: "<<(ai[0] + ai[1] + ai[2]) / 3.0<<endl;
    return 0;
}

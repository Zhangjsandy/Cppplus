#include <iostream>
#include<string>
using namespace std;
struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};
void set(CandyBar &cb, char *b = "Millennium Munch", double w = 2.85, int c = 350);
void show(const CandyBar &cb);
int main()
{
    CandyBar CBar;
    set(CBar);
    show(CBar);
    set(CBar, "sa sa", 36.51, 660);
    show(CBar);
    return 0;
}
void set(CandyBar &cb, char *b , double w , int c )
{
    cb.brand=b;    
    cb.weight = w;
    cb.calorie = c;
}
void show(const CandyBar &cb)
{
    cout << cb.brand << endl;
    cout << cb.weight << endl;
    cout << cb.calorie << endl;
}


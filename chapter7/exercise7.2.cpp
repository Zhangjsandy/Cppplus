#include<iostream>
#include<iomanip>
int input(double *);
double compute(double *, int);
void display(double);
using namespace std;
int main()
{
    double golfgrades[10]={0};
    int num;
    num= input(golfgrades);
    double Agrade;
    Agrade= compute(golfgrades, num);
    int i=0;
    for(i=0;i<num;i++)
    {
        display(golfgrades[i]);
    }
    cout<<"\nThe Average grade is: "<<endl;
        display(Agrade);
    cout<<endl<<num;
    system("pause");
    return 0;
}
int input(double * arr)
{
    int j=0;
    for(j=0;j<10;j++)
    {
        cin>>arr[j];
        if(cin.fail())
            break;
    }
    return j;
}
double compute(double * arr, int num)
{
    double sum=0;
    for(int i=0;i<num;i++)
    sum+=arr[i];
    return sum/num;
}

void display(double a)
{
    cout<<a<<"\t";
}

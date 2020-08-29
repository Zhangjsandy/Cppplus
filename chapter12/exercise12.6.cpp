#include "Queue.h"
#include <iostream>
#include <ctime>
#include<cstdlib>  
const int MIN_PER_HR = 60;
bool newcustomer(double x);
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    std::srand(std::time(0));   
    int flag = 1;    
    cout<<"Case Study: Bank of Heather Automatic Teller\n";
    cout<<"Enter maximum size of queue: ";
    int qs;
    cin>>qs;    
    Queue line(qs);    
    Queue line2(qs);
    cout<<"Enter the number of simulation hours: ";
    int hours;
    cin>>hours;    
    long cyclelimit = MIN_PER_HR * hours;    
    Item temp1;    
    Item temp2;
    while(flag)
    {
        cout<<"Enter the average number of customers per hour: ";
        double perhour;
        cin>>perhour;  
        double min_per_cust;
        min_per_cust = MIN_PER_HR / perhour;    
        long turnaways = 0;
        long customers = 0;
        long served = 0;
        long sum_line_1 = 0;
        long sum_line_2 = 0;
        int wait_time_1 = 0;
        int wait_time_2 = 0;
        long line_wait_1 = 0;
        long line_wait_2 = 0;
        for(int cycle = 0;cycle < cyclelimit;cycle++)
        {
            if(newcustomer(min_per_cust))
            {
                if(line.isfull()&&line2.isfull())
                    turnaways ++;    
                else
                {
                    customers ++;    
                    if(line.queuecount() < line2.queuecount())
                    {
                        temp1.set(cycle);    
                        line.enqueue(temp1);
                    }
                    else if(line.queuecount() > line2.queuecount())
                    {
                        temp2.set(cycle);    
                        line2.enqueue(temp2);
                    }
                    else
                    {
                        int choice = rand()%2;
                        if(choice<1)
                        {
                            temp1.set(cycle);
                            line.enqueue(temp1);
                        }
                        else
                        {
                            temp2.set(cycle);
                            line2.enqueue(temp2);
                        }
                    }
                }
            }
            if(wait_time_1 <=0 && !line.isempty())    
            {
                line.dequeue(temp1);    
                wait_time_1 = temp1.ptime();    
                line_wait_1 += cycle - temp1.when();    
                served ++;    
            }
            if(wait_time_2 <=0 && !line2.isempty())
            {
                line2.dequeue(temp2);    
                wait_time_2 = temp2.ptime();    
                line_wait_2 += cycle - temp2.when();    
                served ++;    
            }
            if(wait_time_1>0)
                wait_time_1--;    
            if(wait_time_2>0)
                wait_time_2--;
            sum_line_1 += line.queuecount();    
            sum_line_2 += line2.queuecount();
        }
        if(customers > 0)
        {
            cout<<"customers accepted: "<<customers<<endl;   
            cout<<"  customers served: "<<served<<endl;    
            cout<<"         turnaways: "<<turnaways<<endl;    
            cout<<"average queue size:(1) ";
            cout.precision(2);    
            cout.setf(ios_base::fixed,ios_base::floatfield);   
            cout<<(double)sum_line_1/cyclelimit<<endl;    
            cout<<"average queue size:(2) ";
            cout<<(double)sum_line_2/cyclelimit<<endl;    
            cout<<" average wait time: "<<(double)(line_wait_1+line_wait_2)/served<<" minutes\n";   
        }
        else
            cout<<"No customers!\n";
        cout<<"Done!\n";
        cout<<"Enter 1 to simulate again,0 to quit: ";
        cin>>flag;   
    }
    return 0;
}
bool newcustomer(double x)
{
    return (std::rand() * x/RAND_MAX < 1);
}

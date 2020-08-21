#include<iostream>  
#include <cctype>  
#include <cstring>  
using namespace std;  
struct chaff
{  
    char dross[20];  
    int slag;  
};  
const int Size=512;  
const int ArSize=2;  
char Buf[Size];  
int main()  
{  
    chaff *p;  
    p=new (Buf) chaff[ArSize];
    for(int i = 0; i < ArSize; i++)  
    {  
        strcpy(p[i].dross,"xyz");  
        p[i].slag = (i+1)*10;  
    }    
    for(int i = 0; i < ArSize; i++)  
    {  
        cout << "p[" << i << "] adreess is "<< &p[i] << " and valus is " << p[i].dross << endl;  
        cout << p[i].slag << endl;  
    } 
    return 0;  
} 

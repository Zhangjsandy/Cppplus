#include<iostream>
int Fill_array(double ar[],int length);
void Show_array(double ar[],int length);
void Reverse_array(double ar[],int length);
const int Max=20;
int main()
{
	using namespace std;
	cout << "Please enter the data of array. 'q' to quit.\n";
	double ar[Max];
	int length;
	length=Fill_array(ar,Max);
	Show_array(ar,length);
	Reverse_array(ar,length);
	cout<<"\nAfter the reverse.";
	Show_array(ar,length);
	Reverse_array(ar,length);
	cout<<"\nAfter the reverse.";
	Show_array(ar+1,length-2);
	Reverse_array(ar,length);
	cout<<endl;
	return 0;
}
int Fill_array(double ar[],int length)
{
	using namespace std;
	int i;
    double j;
    int num;
    for (i = 0; i < length; i++)
    {
	cin >> j;
	if (!cin)
	{
	    cout << "Input terminated.\nQuit.\n";
	    break;
	}
	else
	{
        ar[i] = j;
	}
	num = i + 1;
    }
    return num;
}
void Show_array(double ar[],int length)
{
	using namespace std;
	int i;
    cout << "\nThe array is:\n";
    for (i = 0; i < length; i++)
    {
	cout << ar[i] << " ";
    }
 } 
 void Reverse_array(double ar[],int length)
 {
 	using namespace std;
 	int i;
    double temp;
    for (i =0; i < (length / 2); i++)
    {
	temp = ar[i];
	ar[i] = ar[length - 1 - i];
	ar[length - 1 - i] = temp;
    }
 }


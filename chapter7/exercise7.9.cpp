#include<iostream>
using namespace std;
const int SLEN = 30;
struct student 
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);
int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
	continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
	display1(ptr_stu[i]);
	display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}
int getinfo(student pa[], int n)
{
    int count = 0;
    for (int i = 0; i<n; i++)
    {
	cout << "Please enter the fullname:";
	cin.getline(pa[i].fullname, 30);
	cout << "Please enter the hobby:";
	cin >> pa[i].hobby;
	cout << "Please enter the ooplevel:";
	cin >> pa[i].ooplevel;
	cin.get();
	count++;
    }
    cout << "Enter end!" << endl;;
    return count;
}
void display1(student st)
{
    cout << "\ndisplay1:\nFullName:" << st.fullname << "\nhobby:" << st.hobby
	<< "\nooplevel:" << st.ooplevel << endl;
}
void display2(const student *ps)
{
    cout << "\ndispaly2:\nFullName:" << ps->fullname << "\nhobby:" << ps->hobby
	<< "\nooplevel:" << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
    cout << "\ndispaly3:" << endl;
    for (int i = 0; i<n; i++)
	cout << i << "::\nFullName:" << pa[i].fullname << "\nhobby:" << pa[i].hobby
	<< "\nooplevel:" << pa[i].ooplevel << endl;
}

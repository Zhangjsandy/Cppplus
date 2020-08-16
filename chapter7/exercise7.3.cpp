#include<iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void d(box temp);
float c(box * temp);
int main()
{
	using namespace std;
	cout<<"The following is an example box.\n";
	box temp;
	cout<<"Please enter the box maker:";
	cin>>temp.maker;
	cout<<"Please enter the length:";
	cin>>temp.length;
	cout<<"Please enter the width:";
	cin>>temp.width;
	cout<<"Please enter the height:";
	cin>>temp.height;
	cout<<"Please enter the volume:";
	cin>>temp.volume;
	d(temp);
	float vol;
	vol=c(&temp);
	cout<<"\nBut the volume of the box is:"<<vol<<endl;
	return 0;
}
void d(box temp)
{
	using namespace std;
	cout << "\nThe maker of the box is " << temp.maker << "." << endl;
    cout << "The length of the box is " << temp.length << "." << endl;
    cout << "The width of the box is " << temp.width << "." << endl;
    cout << "The height of the box is " << temp.height << "." << endl;
    cout << "The volume of the box is " << temp.volume << "." << endl;
}
float c(box * temp)
{
	using namespace std;
	 float vol;
    vol = temp->height * temp->width * temp->length;
    return vol;
}

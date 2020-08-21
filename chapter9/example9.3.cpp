#include<iostream>
#include<cmath>
#include"coordin.h"
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;
	answer.distance=
	sqrt(xypo.x*xypo.x+xypo.y*xypo.y);
	answer.angle=atan2(xypos.y,xypos.x)
	return answer;
}
void show_polar
{
	using namespace std;
	const double Rad_to_deg=57.29577951;
	cout<<"distance="<<dapos.distance;
	cout<<",angle="<<dapos.angle*Rad_to_deg;
	cout<<"degrees.\n";
}

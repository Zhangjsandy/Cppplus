#include<iostream>
using namespace std;
class bad_hmean
{
private:
	double vl;
	double v2; 
public:
	bad_hmean(double a = 0, double b = 0) : vl(a), v2(b) {}
	void mesg();
};
inline void bad_hmean::mesg()
{
	cout << "hmean(" << vl << ", " << v2 << "): invalid arguments: a = -b\n";
}
class bad_gmean
{
public:
	double vl;
	double v2;
	bad_gmean(double a = 0, double b = 0) : vl(a), v2(b) {}
	const char * mesg();
};
inline const char * bad_gmean::mesg()
{
	return "gmean() arguments should b => 0\n";
}

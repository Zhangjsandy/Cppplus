#ifndef CDPLAYER_H_
#define CDPLAYER_H_
#include <iostream>
#include <string>
using namespace std;
class Cd
{
private:
	char *performers;
	char *label;
	int selections;
	double playtime;
public:
	Cd(char *s1, char *s2, int n, double x);
	Cd(const Cd &d);
	Cd(){}
	virtual ~Cd();
	virtual void Report()const;
	Cd &operator=(const Cd &d);
};
class Classic :public Cd
{
private:
	char *main_music;
public:
	Classic(){}
	Classic(char *m, char *s1, char *s2, int n, double x);
	Classic(char *m, const Cd &c);
	~Classic();
	Classic &operator=(const Classic &c);
	virtual void Report()const;
};
#endif


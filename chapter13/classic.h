#ifndef Classic_H_
#define Classic_H_
class Cd {
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd();
	virtual void Report()const;
};
class Classic :public Cd 
{
private:
	char name[20];
public:
	Classic(char * s1, char *s2, char *s3, int n, double x);
	Classic();
	void Report()const;
};
#endif

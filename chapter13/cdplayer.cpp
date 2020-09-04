#include "cdplayer.h"
#include<cstring>
#include<iostream>
#include "stdafx.h"
using std::strcpy;
Cd::Cd(char *s1, char *s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	label = new char[strlen(s2) + 1];
	strcpy_s(performers, strlen(s1) + 1, s1);
	strcpy_s(label, strlen(s2) + 1, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::~Cd()
{
	delete[]performers;
	delete[]label;
}

void Cd::Report()const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
}

Cd &Cd::operator=(const Cd &d)
{
	if (this == &d)
		return *this;
	delete[]performers;
	delete[]label;
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(char *m, char *s1, char *s2, int n, double x) :Cd(s1, s2, n, x)
{
	main_music = new char[strlen(m) + 1];
	strcpy_s(main_music, strlen(m) + 1, m);
}

Classic::Classic(char *m, const Cd &c) : Cd(c)
{
	main_music = new char[strlen(m) + 1];
	strcpy_s(main_music, strlen(m) + 1, m);
}

Classic::~Classic()
{
	delete[]main_music;
}

Classic &Classic::operator=(const Classic &c)
{
	if (this == &c)
		return *this;
	Cd::operator=(c);
	delete[]main_music;
	main_music = new char[strlen(c.main_music) + 1];
	strcpy_s(main_music, strlen(c.main_music) + 1, c.main_music);
	return *this;
}

void Classic::Report()const
{
	Cd::Report();
	cout << "Main Music: " << main_music << endl;
}



#include "dma1.h"
#include<cstring>
#include"stdafx.h"
ABC::ABC(const char *f, int lv)
{
	fullname = new char[strlen(f) + 1];
	strcpy_s(fullname, strlen(f) + 1, f);
	level = lv;
}
ABC::ABC(const ABC &ab)
{
	fullname = new char[strlen(ab.fullname) + 1];
	strcpy_s(fullname, strlen(ab.fullname) + 1, ab.fullname);
	level = ab.level;
}
ABC::~ABC()
{
	delete[]fullname;
}
ABC &ABC::operator=(const ABC &ab)
{
	if (this == &ab)
		return *this;
	delete[]fullname;
	fullname = new char[strlen(ab.fullname) + 1];
	strcpy_s(fullname, strlen(ab.fullname) + 1, ab.fullname);
	level = ab.level;
	return *this;
}
void ABC::View()
{
	cout << "Fullname: " << fullname << endl;
	cout << "Level: " << level << endl;
}
baseDMA::baseDMA(const char *l, int r, const char *f, int lv) :ABC(f, lv)
{
	label = new char[strlen(l) + 1];
	strcpy_s(label, strlen(l) + 1, l);
	rating = r;
}
baseDMA::baseDMA(const baseDMA &rs) :ABC(rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
}
baseDMA::~baseDMA()
{
	delete[]label;
}
baseDMA &baseDMA::operator=(const baseDMA &rs)
{
	if (this == &rs)
		return *this;
	ABC::operator=(rs);
	delete[]label;
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
	return *this;
}
void baseDMA::View()
{
	ABC::View();
	cout << "Label: " << label << endl;
	cout << "Rating: " << rating << endl;
}
lacksDMA::lacksDMA(const char *c, const char *f, int lv) :ABC(f, lv)
{
	strncpy_s(color, c, 39);
	color[39] = '\0';
}
lacksDMA::lacksDMA(const char *c, const baseDMA &rs) : ABC(rs)
{
	strncpy_s(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}
void lacksDMA::View()
{
	ABC::View();
	cout << "Color: " << color << endl;
}
hasDMA::hasDMA(const char *s, const char *f, int lv) :ABC(f, lv)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}
hasDMA::hasDMA(const char *s, const ABC &ab) :ABC(ab)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}
hasDMA::hasDMA(const hasDMA &hs) : ABC(hs)
{
	style = new char[strlen(hs.style) + 1];
	strcpy_s(style, strlen(hs.style) + 1, hs.style);
}
hasDMA::~hasDMA()
{
	delete[]style;
}
hasDMA &hasDMA::operator=(const hasDMA &hs)
{
	if (this == &hs)
		return *this;
	ABC::operator=(hs);
	delete[]style;
	style = new char[strlen(hs.style) + 1];
	strcpy_s(style, strlen(hs.style) + 1, hs.style);
	return *this;
}
void hasDMA::View()
{
	ABC::View();
	cout << "Style: " << style << endl;
}


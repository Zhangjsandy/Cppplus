#include "port.h"
#include<cstring>
#include"stdafx.h"
Port::Port(const char *br, const char *st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy_s(brand, strlen(br) + 1, br);
	strcpy_s(style, strlen(st) + 1, st);
	bottles = b;
}
Port::Port(const Port &p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	strcpy_s(style, strlen(p.style) + 1, p.style);
	bottles = p.bottles;
}
Port &Port::operator=(const Port &p)
{
	if (this == &p)
		return *this;
	delete[]brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	strcpy_s(style, strlen(p.style) + 1, p.style);
	bottles = p.bottles;
	return *this;
}
Port &Port::operator+=(int b)
{
	bottles += b;
	return *this;
}
Port &Port::operator-=(int b)
{
	bottles -= b;
	return *this;
}
void Port::Show()const
{
	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}
ostream &operator<<(ostream &os, const Port &p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}
VintagePort::VintagePort()
{
	nickname = new char[1];
	nickname[0] = '\0';
	year = 0;
}
VintagePort::VintagePort(const char *br, const char *st, int b, const char *nn, int y) :Port(br, st, b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy_s(nickname, strlen(nn) + 1, nn);
	year = y;
}
VintagePort::VintagePort(const VintagePort &vp) :Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
}
VintagePort &VintagePort::operator=(const VintagePort &vp)
{
	if (this == &vp)
		return *this;
	delete[]nickname;
	Port::operator=(vp);
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
	return *this;
}
void VintagePort::Show()const
{
	Port::Show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}
ostream &operator<<(ostream &os, const VintagePort &vp)
{
	os << (const Port &)vp;
	os << ", " << vp.nickname << ", " << vp.year;
	return os;
}


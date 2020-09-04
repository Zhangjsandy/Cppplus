#include "stdafx.h"
#include <iostream>
#include <string>
#include "person.h"
#include <cstdlib>
using namespace std;
Person::Person(const Person & p)
{
    firstname = p.firstname;
    lastname = p.lastname;
}
Person::~Person()
{
}
Gunslinger::Gunslinger(const Gunslinger & g) : Person(g)
{
    nick = g.nick;
    time = g.time;
}
double Gunslinger::Draw() const
{
    return time;
}
void Gunslinger::Show() const
{
    cout << "Category: Gunslinger\n";
    Person::Show();
    cout << "Nicks: " << nick << ", Gun out time: " << time << endl;
}
Gunslinger::~Gunslinger()
{
}
int PokerPlayer::Draw() const
{
    return (rand() % 52);
}
void PokerPlayer::Show() const
{
    cout << "Category: PokerPlayer\n";
    Person::Show();
}
PokerPlayer::~PokerPlayer()
{
}
void BadDude::Show() const
{
    cout << "Category: Bad Dude\n";
    Gunslinger::Show();
    cout << "Next card: " << PokerPlayer::Draw() << endl;
}
double BadDude::Gdraw()
{
    return Gunslinger::Draw();
}
int BadDude::Cdraw()
{
    return PokerPlayer::Draw();
}
BadDude::~BadDude()
{
}

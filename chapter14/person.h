#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string firstname;
    string lastname;
public:
    Person() : firstname("None"), lastname("None") {}
    Person(string fname, string lname) : firstname(fname), lastname(lname) {}
    Person(const Person & p);
    virtual ~Person() = 0;
    virtual void Show() const = 0 { cout << "Firstname: " << firstname << "\nLastname: " << lastname << endl; }
};
class Gunslinger : virtual public Person
{
private:
    int nick;
    double time;
public:
    Gunslinger(int n = 0, double t = 0) : Person(), nick(n), time(t) {}
    Gunslinger(const string fname, const string lname, int n, double t) : Person(fname, lname), nick(n), time(t) {}
    Gunslinger(const Person & p, int n, double t = 0) : Person(p), nick(n), time(t) {}
    Gunslinger(const Gunslinger & g);
    ~Gunslinger();
    double Draw() const;
    void Show() const;
};
class PokerPlayer : virtual public Person
{
public:
    int Draw() const;
    void Show() const;
    PokerPlayer() : Person() {}
    PokerPlayer(const string fname, const string lname) : Person(fname, lname) {}
    PokerPlayer(const Person & p) : Person(p) {}
    PokerPlayer(const PokerPlayer & p) : Person(p) {}
    ~PokerPlayer();
};
class BadDude : public Gunslinger, public PokerPlayer
{
public:
    BadDude() {}
    BadDude(const string fname, const string lname, int n, double t) : Person(fname, lname), Gunslinger(fname, lname, n, t), PokerPlayer(fname, lname) {}
    BadDude(const Person & p, int n, double t) : Person(p), Gunslinger(p, n, t), PokerPlayer(p) {}
    BadDude(const Gunslinger & g, int n, double t) : Person(g), Gunslinger(g, n, t), PokerPlayer(g) {}
    BadDude(const PokerPlayer & p, int n, double t) : Person(p), Gunslinger(p, n, t), PokerPlayer(p) {}
    ~BadDude();
    void Show() const;
    double Gdraw();
    int Cdraw();
};
#endif

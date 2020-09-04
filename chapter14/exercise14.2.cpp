#ifndef WINEC1_H_
#define WINEC1_H_
#include <iostream>
#include <valarray>
#include <string>
template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    void set(const T1 &yr, const T2 &bot);
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {}
    Pair() {}
    int Sum() const;
    void Show(int y) const;
};
template <class T1, class T2>
void Pair<T1, T2>::set(const T1 &yr, const T2 &bot)
{
    a = yr;
    b = bot;
}
template <class T1, class T2>
int Pair<T1, T2>::Sum() const
{
    return b.sum();
}
template <class T1, class T2>
void Pair<T1, T2>::Show(int y) const
{
    for (int i = 0; i < y; i++)
    {
        std::cout << "\t\t" << a[i] << "\t\t" << b[i] << std::endl;
    }
}
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine : private std::string, private PairArray
{
private:
    int yrs;
public:
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    void GetBottles();
    std::string & Label();
    int sum();
    void Show();
};
Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : std::string(l), yrs(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y))
{
}
Wine::Wine(const char * l, int y) :std::string(l), yrs(y)
{
}
void Wine::GetBottles()
{
    ArrayInt yr(yrs), bot(yrs);
    std::cout << "Enter " << (const std::string &) *this << " data for " << yrs << " year(s):\n";
    for (int i = 0; i < yrs; i++)
    {
        std::cout << "Enter year: ";
        std::cin >> yr[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> bot[i];
    }
    PairArray::set(yr, bot);
}
std::string & Wine::Label()
{
    return (std::string &) *this;
}
int Wine::sum()
{
    return PairArray::Sum();
}
void Wine::Show()
{
    std::cout << "Wine: " << (const std::string &) *this << std::endl;
    std::cout << "\t\tYear\tBottles\n";
    PairArray::Show(yrs);
}
#endif

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
class Account 
{
private:
    std::string name;
    std::string number;
    double deposit;
public:
    Account(std::string _name, std::string _number = "Error", double _deposit = 0);
    void show() const;
    void save_money(double money);
    void draw_money(double money);
};
#endif 

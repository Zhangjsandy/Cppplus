#include "BankAccount.h"
#include <iostream>
#include <string>
Account::Account(std::string _name, std::string _number, double _deposit) {
    name = _name;
    number = _number;
    deposit = _deposit;
}
void Account::show() const{
    using std::cout;
    cout << "Name: " << name << "\n"
        << "Number: " << number << "\n"
        << "Deposit: " << deposit << "\n";
}
void Account::save_money(double money) {
    if (number == "Error")
        std::cout << "Wrong ! ";
    else
        deposit += money;
}
void Account::draw_money(double money) {
    if (number == "Error")
        std::cout << "Wrong !";
    else if (deposit < money)
        std::cout << "You have no enough money!";
    else
        deposit -= money;
}

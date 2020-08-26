#include "person.h"
#include <iostream>
#include <cstring>
Person::Person(const std::string & ln, const char * fn) {
    lname = ln;
    strncpy(fname, fn, LIMIT);
}
void Person::Show() const{
    std::cout << "Name: " << fname << " " << lname << std::endl;
}
void Person::FormalShow() const{
    std::cout << "Name: " << lname << ", " << fname << std::endl;
}

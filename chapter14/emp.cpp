#include "stdafx.h"
#include <iostream>
#include <string>
#include "emp.h"
using namespace std;
abstr_emp::abstr_emp()
{
    fname = "None";
    lname = "None";
    job = "None";
}
abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
{
    fname = fn;
    lname = ln;
    job = j;
}
void abstr_emp::ShowAll() const
{
    cout << "First name: " << fname << endl;
    cout << "Last name: " << lname << endl;
    cout << "Job: " << job << endl;
}
void abstr_emp::SetAll()
{
    cout << "Please enter the first name: ";
    getline(cin, fname);
    cout << "Please enter the last name: ";
    getline(cin, lname);
    cout << "Please enter the job: ";
    getline(cin, job);
}
std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << endl;
    os << "First name: " << e.fname << endl;
    os << "Last name : " << e.lname << endl;
    return os;
}
abstr_emp::~abstr_emp()
{
}
employee::employee() : abstr_emp()
{
}
employee::employee(const std::string & fn, const std::string & ln, const std::string & j) : abstr_emp(fn, ln, j)
{
}
void employee::ShowAll() const
{
    cout << "Employee: " << endl;
    abstr_emp::ShowAll();
}
void employee::SetAll()
{
    cout << "Employee: " << endl;
    abstr_emp::SetAll();
}
manager::manager() : abstr_emp()
{
    inchargeof = 0;
}
manager::manager(const std::string & fn, const std::string & ln, const std::string & j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico)
{
}
manager::manager(const abstr_emp & e, int ico) : abstr_emp(e), inchargeof(ico)
{
}
manager::manager(const manager & m) : abstr_emp(m)
{
    inchargeof = m.inchargeof;
}
void manager::ShowAll() const
{
    cout << "Manager: " << endl;
    abstr_emp::ShowAll();
    cout << "In charge of " << inchargeof << " employees.\n";
}
void manager::SetAll()
{
    cout << "Manager: " << endl;
    abstr_emp::SetAll();
    cout << "In charge of: ";
    cin >> inchargeof;
    cin.ignore();
}
fink::fink() : abstr_emp()
{
    reportsto = "None";
}
fink::fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{
}
fink::fink(const abstr_emp & e, const std::string & rpo) : abstr_emp(e), reportsto(rpo)
{
}
fink::fink(const fink & f) : abstr_emp(f)
{
    reportsto = f.reportsto;
}
void fink::ShowAll() const
{
    cout << "Fink: " << endl;
    abstr_emp::ShowAll();
    cout << "Reports to: " << reportsto << endl;
}
void fink::SetAll()
{
    cout << "Fink: " << endl;
    abstr_emp::SetAll();
    cout << "Reports to: ";
    getline(cin, reportsto);
}
highfink::highfink() : abstr_emp(), manager(), fink()
{
}
highfink::highfink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo, int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}
highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}
highfink::highfink(const fink & f, int ico) : abstr_emp(f), manager(f, ico), fink(f)
{
}
highfink::highfink(const manager & m, const std::string & rpo) : abstr_emp(m), manager(m), fink(m, rpo)
{
}
highfink::highfink(const highfink & h) : abstr_emp(h), manager(h), fink(h)
{
}
void highfink::ShowAll() const
{
    cout << endl;
    cout << "Highfink: " << endl;
    abstr_emp::ShowAll();
    cout << "In charge of: " << manager::InChargeOf() << endl;
    cout << "Reports to: " << fink::ReportsTo() << endl;
    cout << endl;
}
void highfink::SetAll()
{
    cout << "Highfink: " << endl;
    abstr_emp::SetAll();
    cout << "In charge of: ";
    cin >> manager::InChargeOf();
    cin.ignore();
    cout << "Reports to: ";
    getline(cin, fink::ReportsTo());
}

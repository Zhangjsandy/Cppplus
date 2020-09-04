#ifndef ERROR_H
#define ERROR_H
#include <iostream>
#include <stdexcept>
#include <cstring>
class error_mean : public std::logic_error
{
    private:
        double v1;
        double v2;
        std::string s;
    public:
        error_mean(double a = 0, double b = 0, std::string s = "error") : v1(a), v2(b), logic_error(s) {}
        virtual void report() = 0;
        virtual ~error_mean() throw() {}
};
class bad_hmean : public error_mean
{
    private:
        double v1;
        double v2;
    public:
        bad_hmean(double a = 0, double b = 0) : v1(a), v2(b), error_mean(a, b, "bad arguments to hmean()") {}
        void report();
};
class bad_gmean : public error_mean
{
    private:
        double v1;
        double v2;
    public:
        bad_gmean(double a = 0, double b = 0) : v1(a), v2(b), error_mean(a, b, "bad arguments to gmean()") {}
        void report();
};
void bad_hmean::report()
{
    std::cout << "bad_hmean() now!" << std::endl;
    std::cout << what() << "\n";
    std::cout << "The two numbers: " << v1 << ", " << v2 << "\n";
}
void bad_gmean::report()
{
    std::cout << "bad_gmean() now!" << std::endl;
    std::cout << what() << "\n";
    std::cout << "The two numbers: " << v1 << ", " << v2 << "\n";
}
#endif

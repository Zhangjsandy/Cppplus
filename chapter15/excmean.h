#ifndef EXC_MEAN_H
#define EXC_MEAN_H
#include <iostream>
#include <stdexcept>
class bad_hmean : public std::logic_error
{
    public:
        bad_hmean() : logic_error("bad arguments to hmean()") {}
};
class bad_gmean : public std::logic_error
{
    public:
        bad_gmean() : logic_error("bad arguments to gmean()") {}
};
#endif

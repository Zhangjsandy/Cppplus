#ifndef SALES_H
#define SALES_H
#include <stdexcept>
#include <string>
#include <iostream>
class Sales
{
    public:
        enum {MONTHS = 12};
        class bad_index : public std::logic_error
        {
            private:
                int bi;
            protected:
                int bi_val() const {return bi;}
            public:
                explicit bad_index(int ix, const std::string & s = "Index error in Sales object\n");
                void report() const {std::cout << "bad index: " << bi_val() << std::endl;}
                virtual ~bad_index() throw() {}
        };
        explicit Sales(int yy = 0);
        Sales(int yy, const double * gr, int n);
        virtual ~Sales() {}
        int Year() const {return year;}
        virtual double operator[](int i) const;
        virtual double & operator[](int i);
    private:
        double gross[MONTHS];
        int year;
};
class LabeledSales : public Sales
{
    public:
        class nbad_index : public Sales::bad_index
        {
            private:
                std::string lbl;
                const std::string & label_val() const {return lbl;}
            public:
                nbad_index(const std::string & lb, int ix, const std::string & s = "Index error in LabeledSales object\n");
                void report() const {std::cout << "Company: " << label_val() << std::endl;
                                     std::cout << "bad index: " << bad_index::bi_val() << std::endl;}
                virtual ~nbad_index() throw() {}
        };
        explicit LabeledSales(const std::string & lb = "none", int yy = 0);
        LabeledSales(const std::string & lb, int yy, const double * gr, int n);
        virtual ~LabeledSales() {}
        const std::string & Label() const {return label;}
        virtual double operator[](int i) const;
        virtual double & operator[](int i);
    private:
        std::string label;
};
#endif

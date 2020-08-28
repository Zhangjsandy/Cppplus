#pragma once
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
using namespace std;
class complex 
{
private:
	double real;
	double imaginary;
public:
	complex()
	{
		real = 0;
		imaginary = 0;
	}
	complex(double m, double n): real(m), imaginary(n){}
	~complex(){}
	complex operator+(const complex& conjugate) const;
	complex operator-(const complex& conjugate) const;
	complex operator*(const complex& conjugate) const;
	friend complex operator*(const double number, const complex& conjugate);
	complex operator~() const;
	friend std::istream& operator>>(std::istream& is,complex& conjugate);
	friend std::ostream& operator<<(std::ostream& os, const complex& conjugate);
};
#endif 

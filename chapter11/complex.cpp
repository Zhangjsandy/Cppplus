#include <iostream>
#include "complex.h"
complex complex::operator+(const complex& conjugate) const
{
	return complex(real + conjugate.real, imaginary + conjugate.imaginary);
}
complex complex::operator-(const complex& conjugate) const
{
	return complex(real - conjugate.real, imaginary - conjugate.imaginary);
}
complex complex::operator*(const complex& conjugate) const
{
	return complex(real * conjugate.real - imaginary * conjugate.imaginary, 
		real * conjugate.imaginary + imaginary * conjugate.real);
}
complex operator*(const double number,const complex& conjugate)
{
	return complex(number * conjugate.real , number * conjugate.imaginary);
}
complex complex::operator~() const
{
	return complex( real, -imaginary);
}
std::istream& operator>>(std::istream& is, complex& conjugate)
{
	cout << "real: ";
	is >> conjugate.real;
	if (!is)
		return is;
	cout << "imaginary: ";
	is >> conjugate.imaginary;
	return is;
}
std::ostream& operator<<(std::ostream& os, const complex& conjugate)
{
	os << "(" << conjugate.real << "," << conjugate.imaginary << "i)";
	return os;
}

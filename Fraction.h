// Kevin Bensimoun
// Program uses three different files to compute fractional answers
// using operating overloads#pragma once

#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

class Fraction
{
private:
	int numerator;
	int denominator;

public:

	Fraction();

	Fraction operator +(const Fraction &);
	Fraction operator -(const Fraction &);
	Fraction operator *(const Fraction &);
	Fraction operator /(const Fraction &);


	friend std::ostream& operator <<(std::ostream&, const Fraction&);

	friend std::istream& operator >> (std::istream&, Fraction&);
};

#endif
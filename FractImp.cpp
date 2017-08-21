// Kevin Bensimoun
// Program uses three different files to compute fractional answers
// using operating overloads

#include <cstdlib>
#include "Fraction.h"
using namespace std;

Fraction::Fraction() {

	numerator = 0;
	denominator = 1;

}

Fraction Fraction::operator+(const Fraction & value){

	Fraction temp;
	int divisor = 0;

	if (denominator == value.denominator){
		temp.numerator = numerator + value.numerator;
		temp.denominator = denominator;
		return temp;
	}
	else
		if (denominator > value.denominator) {
			if ((denominator % value.denominator) == 0) {
				divisor = denominator / value.denominator;
				temp.numerator = value.numerator * divisor;
				temp.denominator = value.denominator * divisor;
				temp.numerator += numerator;
				return temp;
			}
			temp.denominator = denominator * value.denominator;
			temp.numerator = (numerator*value.denominator) + (denominator*value.numerator);
			return temp;
		}
		else
			if (denominator < value.denominator) {
				if ((value.denominator % denominator) == 0) {
					divisor = value.denominator / denominator;
					temp.numerator = numerator * divisor;
					temp.denominator = denominator * divisor;
					temp.numerator += value.numerator;
					return temp;
				}
				temp.denominator = value.denominator * denominator;
				temp.numerator = (numerator * value.denominator) + (denominator*value.numerator);
				return temp;
			}
		return temp;
}

Fraction Fraction::operator-(const Fraction & value) {

	Fraction temp;
	int divisor = 0;

	if (denominator == value.denominator) {
		temp.numerator = numerator - value.numerator;
		temp.denominator = denominator;
		return temp;
	}
	else
		if (denominator > value.denominator) {
			if ((denominator % value.denominator) == 0) {
				divisor = denominator / value.denominator;
				temp.numerator = value.numerator * divisor;
				temp.denominator = value.denominator * divisor;
				temp.numerator -= numerator;
				return temp;
			}
			temp.denominator = denominator * value.denominator;
			temp.numerator = (numerator*value.denominator) - (denominator*value.numerator);
			return temp;
		}
		else
			if (denominator < value.denominator) {
				if ((value.denominator % denominator) == 0) {
					divisor = value.denominator / denominator;
					temp.numerator = numerator * divisor;
					temp.denominator = denominator * divisor;
					temp.numerator -= value.numerator;
					return temp;
				}
				temp.denominator = value.denominator * denominator;
				temp.numerator = (numerator * value.denominator) - (denominator*value.numerator);
				return temp;
			}
	return temp;
}
Fraction Fraction::operator*(const Fraction & value) {

	Fraction temp;

	temp.numerator = numerator * value.numerator;
	temp.denominator = denominator * value.denominator;

	return temp;
}

Fraction Fraction::operator/(const Fraction & value) {

	Fraction temp;

	temp.numerator = numerator * value.denominator;
	temp.denominator = denominator * value.numerator;

	return temp;
}

std::istream& operator >> (std::istream& is, Fraction& fraction)

{

	char ch;

	is >> fraction.numerator;     //get the numerator

	is >> ch;                     //read and discard the '/'

	is >> fraction.denominator;   //get the denominator

	return is;

}

std::ostream& operator << (std::ostream& os, const Fraction& fraction)

{

	//note that we print out a / as it is simply easier to do so!

	os << fraction.numerator << " / " << fraction.denominator;

	return os;

}
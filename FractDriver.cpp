// Kevin Bensimoun
// Program uses three different files to compute fractional answers
// using operating overloads
#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction one, two, three;

	cout << "Enter the first fraction in the form a/b: ";
	cin >> one;
	

	cout << "Enter the second fraction in the form a/b: ";
	cin >> two;

	cout << "Fraction 1 = " << one << endl;
	cout << "Fraction 2 = " << two << endl;
	
	three = one + two;

	cout << one << " + " << two << " = " << three << endl;

	three = one - two;

	cout << one << " - " << two << " = " << three << endl;

	three = one*two;

	cout << one << " * " << two << " = " << three << endl;

	three = one / two;

	cout << one << " / " << two << " = " << three << endl;

	return 0;
}
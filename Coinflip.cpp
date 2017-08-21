#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int sideReturn();
void realistic(double x, double y);

int main()
{
	int flips = 0, heads = 0, tails = 0, i = 0, x = 0;
	cout << "Enter the number of times you want to toss the coin: ";
	cin >> flips;

	while (flips < 10) {
		cout << "The number of tosses must be greater than 10. Re-enter: ";
		cin >> flips;
	}

	srand(static_cast <unsigned int> (time(0)));

	while (i < flips) {
		x = sideReturn();
		if (x == 1) {
			heads++;
			cout << "Heads ";
		}
		else {
			tails++;
			cout << "Tails ";
		}
		i++;
		if (i % 10 == 0)
			cout << "\n";
	}
	cout.flush();
	cout << "\n\nThe total number of Heads was " << heads;
	cout << "\nThe total number of Tails was " << tails;
	realistic(heads, flips);
	return 0;
}

int sideReturn()
{
	return (rand() % 2);
}

void realistic(double x, double y)
{
	double appearance = x / y;
	if (appearance >= .45 && appearance <= .55) {
		cout << "\nThis simulation is realistic\n";
	}
	else
		cout << "\nThis simulation is not realistic.\n";
}

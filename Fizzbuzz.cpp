#include <iostream>
using namespace std;

int main()
{
	int i = 1;

	while (i <= 100) {
		if ((i % 3 == 0) && (i % 5) == 0)
			cout << "Fizzbuzz ";
		else if ((i % 3) == 0 && (i % 7) == 0)
			cout << "Fizzwoof ";
		else if ((i % 5) == 0 && (i % 7) == 0)
			cout << "Buzzwoof ";
		else if (i % 3 == 0)
			cout << "Fizz ";
		else if (i % 5 == 0)
			cout << "Buzz ";
		else if (i % 7 == 0)
			cout << "Woof ";
		else {
			cout << i;
			cout << " ";
		}
		i++;
		if ((i - 1) % 5 == 0) {
			cout << "\n";
		}
		cout.flush();
	}
	return 0;
}
// Kevin Bensimoun
// Program takes an employee and uses a header file
// to take in employee input and calculate a yearly raise
#include <iostream>
#include "Employee.h"
#include <string>
using namespace std;

int main()
{
	Employee employee1{"Nicole Watterson", 42000};
	Employee employee2{};
	double total, total2 = 0;
	string name;

	cout << "Enter an employee name: ";
	getline(cin,name);
	employee2.setName(name);
	cout << "Enter the employee's monthly salary: ";
	cin >> total;
	total = total * 12;
	employee2.setSalary(total);

	cout << endl;
	cout << "Here are the employees and their yearly salaries\n";
	cout << employee1.getName() << ": $" << employee1.getSalary();
	cout << "\n";
	cout << employee2.getName() << ": $" << employee2.getSalary();
	cout << endl << endl;

	cout << "Here are the employees and their yearly salaries"
		<< " with a 10% raise" << endl;
	total2 = employee1.getSalary() * 1.1;
	total = employee2.getSalary() * 1.1;
	employee1.setSalary(total2);
	employee2.setSalary(total);
    cout << employee1.getName() << ": $" << employee1.getSalary();
	cout << "\n";
	cout << employee2.getName() << ": $" << employee2.getSalary();
	cout << endl;
	return 0;
}
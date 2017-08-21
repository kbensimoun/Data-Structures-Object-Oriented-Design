// Kevin Bensimoun
// Program takes an employee and uses a header file
// to take in employee input and calculate a yearly raise
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string fullName;
	double salary = 0;

public:
	Employee()
	{
		fullName = " ";
		salary = 0;
	}
	
	Employee(string name, double value)
	{
		fullName = name;
		salary = value;
	}
	
	void setName(string name)
	{
		fullName = name;
	}
	
	string getName() const
	{
		return fullName;
	}

	void setSalary(double value)
	{
		salary = value;
	}

	double getSalary() const
	{
		return salary;
	}
};
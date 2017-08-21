//Kevin Bensimoun
// Driver program that will determine each grade
// depending on the numbers of points entered
#include "Essay.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int grammarPoints, spellingPoints,
		lengthPoints, contentPoints;

	cout << "How many grammar points did the " <<
		"student earn? (0 - 30) : ";
	cin >> grammarPoints;

	while (grammarPoints > 30 || grammarPoints < 0) {
		cout << "Invalid. Enter a number" <<
			" from 0 through 30: ";
		cin >> grammarPoints;
	}

	cout << "How many spelling points did the " <<
		"student earn? (0 - 20) : ";
	cin >> spellingPoints;

	while (spellingPoints > 20 || spellingPoints < 0) {
		cout << "Invalid. Enter a number" <<
			" from 0 through 20: ";
		cin >> spellingPoints;
	}

	cout << "How many points for length " <<
		"did the student earn? (0 - 20) : ";
	cin >> lengthPoints;

	while (lengthPoints > 20 || lengthPoints < 0) {
		cout << "Invalid. Enter a number" <<
			" from 0 through 20: ";
		cin >> lengthPoints;
	}

	cout << "How many points for content " <<
		"did the student earn? (0 - 30) : ";
	cin >> contentPoints;

	while (contentPoints > 30 || contentPoints < 0) {
		cout << "Invalid. Enter a number" <<
			" from 0 through 30: ";
		cin >> contentPoints;
	}

	cout << "Grammar points: " << grammarPoints
		<< endl;
	cout << "Spelling points: " << spellingPoints
		<< endl;
	cout << "Length points: " << lengthPoints
		<< endl;
	cout << "Content points: " << contentPoints
		<< endl;

	Essay grade;

	grade.setPointOne(grammarPoints);
	grade.setPointTwo(spellingPoints);
	grade.setPointThree(lengthPoints);
	grade.setPointFour(contentPoints);

	cout << "Overall Score: " << grade.getScore()
		<< endl;

	cout << "Grade: " << grade.getLetterGrades()
		<< endl;
		
	return 0;
}
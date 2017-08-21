//Kevin Bensimoun
//Header file that can access the variables
// depending on the points entered
#pragma once
#include "GradedActivity.h"
#ifndef ESSAY_H
#define ESSAY_H

class Essay :public GradedActivity {
private:
	double pointOne;
	double pointTwo;
	double pointThree;
	double pointFour;

public:

	void setPointOne(double x) {
		pointOne = x;
	}
	void setPointTwo(double x) {
		pointTwo = x;
	}
	void setPointThree(double x) {
		pointThree = x;
	}
	void setPointFour(double x) {
		pointFour = x;
	}

	double getPointOne() const
	{
		return pointOne;
	}
	double getPointTwo() const
	{
		return pointTwo;
	}
	double getPointThree() const
	{
		return pointThree;
	}
	double getPointFour() const
	{
		return pointFour;
	}

	double getScore()
	{
		double y;
		y = pointOne + pointTwo + pointThree
			+ pointFour;
		return y;
	}

	char getLetterGrades()
	{
		score = getScore();
		return getLetterGrade();
	}
};
#endif

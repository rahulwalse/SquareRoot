/*
*	Source file for implementation of method for finding square root of given number using
	averaging formula to reduce the number of iterations.
*/

#include "SquareRoot.h"
#include "MyMath.h"

double square_root(const double inputNumber)
{
	const double errorMargin = 0.0001;
	double estimateOne = 0, estimateTwo = 0;

	//- Guess initial estimate
	estimateTwo = inputNumber / 2;

	/* 
		Approximate the estimate until the difference between two estimates greater 
		than error margin, as with each approximation the estimate comes closer to
		the square root.
	*/
	do
	{
		estimateOne = estimateTwo;
		//- Generate better estimate by using averaging formula
		estimateTwo = (estimateOne + (inputNumber / estimateOne)) / 2;
	} while (absolute(estimateOne - estimateTwo) > errorMargin);

	return estimateOne;
}
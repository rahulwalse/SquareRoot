/*
	Source file for implementation for finding the nth root of given number using
	averaging formula for computing nth root (i.e where x^n = m):
		x i+1 = ( (n - 1) x i + (m / x i ^ (n - 1)) / n), given in "Notes on design"
	section.
*/

#include "SquareRoot.h"
#include "MyMath.h"

double nth_root(const double& product, const double& numbers)
{
	double errorMargin = 0.0001;
	double estimateOne = 0, estimateTwo = 0;
	
	//- Guess intial estimate
	estimateTwo = product / numbers;
	
	do
	{
		/*
			Approximate the estimate until the difference between two estimates greater 
			than error margin, as with each approximation the estimate comes closer to
			the nth root (using Newton's formula).
		*/
		estimateOne = estimateTwo;
		estimateTwo = (((numbers - 1) * estimateOne) + (product / exponent(estimateOne, (numbers - 1.0)))) / numbers;
	} while (absolute(estimateTwo - estimateOne) > errorMargin);

	return estimateOne;
}
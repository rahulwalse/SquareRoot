/*
	Source file for implementation of algorithm for computing reciprocal of a number 
	iteratively	using Newton-Raphson formula: x i+1 = x i (2 - xi * N).
*/

#include "SquareRoot.h"
#include "MyMath.h"

double iterative_reciprocal(const double& inputNumber)
{
	const double& errorMargin = 0.000001;
	double estimateOne = 0, estimateTwo = 0;

	//- Guess initial estimate
	estimateTwo = 0.00001;

	/*
		Approximate reciprocal while the difference between two estimates
		is greater than error margin.
	*/
	do
	{
		estimateOne = estimateTwo;
		estimateTwo = estimateOne * (2 - (estimateTwo * inputNumber));
	} while (absolute(estimateOne - estimateTwo) > errorMargin);

	return estimateTwo;
}
/*
	This implementation is part of supplementary algorithm (3.1.1) for calculating
	square root of given number without the use of averaging formula. This algorithm
	is inefficient as the number of iterations required to converge to estimate with
	acceptable margin is too high.
*/

#include "SquareRoot.h"
#include "MyMath.h"

double square_root_iterative(const double& inputNumber)
{
	const double errorMargin = 0.0001, TEN = 10;
	double estimate = inputNumber / 2;	//- Initial estimate
	double convergeDifference = 10, squaredEstimate = square(estimate);

	//- Until difference between estimate and inputNumber is greater than errorMargin
	while (absolute(squaredEstimate - inputNumber) > errorMargin)
	{
		//- For square of estimate greater than inputNumber -- subtract convergeDifference
		while (squaredEstimate > inputNumber)
		{
			squaredEstimate = square(estimate);
			estimate -= convergeDifference / TEN;
		}

		convergeDifference /= TEN;	//- Update convergeDifference by dividing with 10

		//- For square of estimate less than inputNumber -- add convergeDifference
		while (squaredEstimate < inputNumber)
		{
			squaredEstimate = square(estimate);
			estimate += convergeDifference / TEN;
		}

		convergeDifference /= TEN;	//- Update convergeDifference by dividing with 10
	}
	return estimate;
}
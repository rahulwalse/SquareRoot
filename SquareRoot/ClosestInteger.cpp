/*
	This implementation is part of supplementary problem (3.1.3) for finding
	integer whose square is closest to but greater than the integer number 
	input as data.
*/

#include "SquareRoot.h"

int find_closest_integer(const int& inputNumber)
{
	// Assume output number squared as greater than input number
	int inputSquared = inputNumber + 1;
	double errorMargin = 0.0001;
	// Find the square root of assumed number
	double squareRoot = square_root(inputSquared);

	/* 
		If square root of assumed number is an integer or less than error margin,
		return the number. Else, round it to next integer and return
	*/
	if (squareRoot - static_cast<int>(squareRoot) == 0 || squareRoot - static_cast<int>(squareRoot) < errorMargin)
		return static_cast<int>(squareRoot);
	else
		return static_cast<int>(squareRoot + 1);
}
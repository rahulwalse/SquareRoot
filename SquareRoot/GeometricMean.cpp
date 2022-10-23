/*
	Source file for implementation of finding Geometric Mean for n given numbers.
*/

#include <iostream>
#include "SquareRoot.h"

double geometric_mean(const int& totalNumbers)
{
	double product = 1, number = 0;

	//- Read the numbers
	for (int iteration = 1; iteration <= totalNumbers; iteration++)
	{
		std::cout << "\nNumber " << iteration << "= ";
		std::cin >> number;
		product *= number;	//- Multiply set of numbers
	}

	return nth_root(product, totalNumbers);
}
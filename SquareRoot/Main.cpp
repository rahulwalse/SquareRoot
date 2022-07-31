// Tester file

#include <iostream>
#include "SquareRoot.h"

int main()
{
	std::cout << "\nEnter a number to find square root of: ";
	double number = 0;
	std::cin >> number;

	std::cout << "\nSquare root of " << number << " is " << square_root(number) << std::endl;
}
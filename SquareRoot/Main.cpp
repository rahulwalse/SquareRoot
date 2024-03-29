/*
	This program is an implementation of algorithm in C++ to find square root of given
	number including supplementary problems and algorithms from the book "How to Solve it
	by Computer" by R.G. Dromey.
*/

#include <iostream>
#include "SquareRoot.h"

int main()
{
	bool stay = true;
	int option = 0, totalNumbers = 0;
	double number = 0;
	char squareRootSymbol = 251;

	// Menu options
	while (stay)
	{
		std::cout << "\n1. Find square root of a number\n2. Find square root of a number (high iterations)";
		std::cout << "\n3. Find Geometric Mean for n numbers\n4. Find closest integer x for given integer i such that x^2 > i.";
		std::cout << "\n5. Find reciprocal of a number iteratively\n6. Exit";
		std::cout << "\nChoose an option: ";
		std::cin >> option;

		switch (option)
		{
			case 1:	std::cout << "\nEnter a number to find square root of: ";
					std::cin >> number;
					std::cout << '\n' << squareRootSymbol << number << " = " << square_root(number) << '\n';
					break;

			case 2: std::cout << "\nEnter a number to find square root of: ";
					std::cin >> number;
					std::cout << '\n' << squareRootSymbol << number << " = " << square_root_iterative(number) << '\n';
					break;

			case 3:	std::cout << "\nEnter the total numbers in set: ";
					std::cin >> totalNumbers;
					std::cout << "\nGeometric Mean = " << geometric_mean(totalNumbers) << '\n';
					break;

			case 4:	std::cout << "\nEnter a number.\nInteger i= ";
					std::cin >> number;
					std::cout << "\nClosest integer to " << number << " is " << find_closest_integer(number) << ".\n";
					break;

			case 5:	std::cout << "\nNOTE: This algorithm uses Newton Raphson iterative formula\nEnter a number: ";
					std::cin >> number;
					std::cout << "\nReciprocal of " << number << " = " << iterative_reciprocal(number) << '\n';
					break;

			case 6:	std::cout << "\nExiting the program...\n";
					stay = false;
					break;

			default:std::cout << "\nInvalid choice! Please choose from the options provided.\n";
					break;
		}
	}
}
/*
	Tester file to find the square root of given number and various other operations.
*/

#include <iostream>
#include "SquareRoot.h"

int main()
{
	bool stay = true;
	int option = 0;
	double number = 0;

	// Menu options
	while (stay)
	{
		std::cout << "\n1. Find square root of a number\n2. Exit";
		std::cout << "\nChoose an option: ";
		std::cin >> option;

		switch (option)
		{
			case 1:	std::cout << "\nEnter a number to find square root of: ";
					std::cin >> number;
					std::cout << "\nSquare root of " << number << " is " << square_root(number) << std::endl;
					break;

			case 2:	std::cout << "\nExiting the program...\n";
					stay = false;
					break;

			default:std::cout << "\nInvalid choice! Please choose from the options provided.\n";
					break;
		}
	}
}
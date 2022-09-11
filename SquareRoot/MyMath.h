/*
	Header file defining methods to return absolute value and find square of.
*/

// Header guard
#ifndef MYMATH_H
#define MYMATH_H

template <typename T>
T absolute(T number)
{
	if (number < 0)
		return -number;
	else
		return number;
}

template <typename T>
T square(const T& number)
{
	return number * number;
}

#endif // !MYMATH_H
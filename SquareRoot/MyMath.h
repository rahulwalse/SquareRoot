/*
	Header file defining method to return absolute value.
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

#endif // !MYMATH_H
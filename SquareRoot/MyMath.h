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

template <typename T>
inline T exponent(T& base, T power)
{
	T base_raise_to_exponent = base;
	//- If exponent is negative, make it positive and calculate 1/x^n.
	if (power < 0)
	{
		power = -power;
		base_raise_to_exponent = 1 / exponent(base, power);
		return base_raise_to_exponent;
	}
	else if (power == 0)
		return 1;	//- If exponent is 0, value will always be 1.
	else
	{
		for (T iteration = 1; iteration < power; iteration++)
			base_raise_to_exponent *= base;
		return base_raise_to_exponent;
	}
}

#endif // !MYMATH_H
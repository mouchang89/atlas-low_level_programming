#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: integer.
 *
 * Return: -1 if not a natural square root or 1 if successful.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Returns natural square root.
 * @n: Integer.
 * @i: Iterate number.
 *
 * Return: Natural square root.
 */
int _sqrt(int i, int n)
{
	if (n * n == i)
	{
		return (n);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(i, n + 1));
}

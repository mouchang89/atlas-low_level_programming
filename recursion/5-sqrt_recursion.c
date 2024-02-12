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
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

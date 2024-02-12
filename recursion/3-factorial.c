#include "main.h"

/**
 * factorial - Returns factorial of a given number.
 * @n: integer.
 *
 * Return: -1 if error or 1 if successful.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n -1));
}

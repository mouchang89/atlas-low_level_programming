#include "main.h"

/**
 * main - Prints the sign of a number.
 *
 * Returns 1 and prints + if n is greater than 0.
 * Returns 0 and prints 0 if n is 0.
 * Returns -1 and prints - if n is less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

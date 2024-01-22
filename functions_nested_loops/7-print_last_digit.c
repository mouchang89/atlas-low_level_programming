#include "main.h"

/**
 * main - Prints the last digit of a number.
 *
 * Returns: the value of the last digit.
 */
int print_last_digit(int num)
{
	int i = n % 10;

	if (i < 0)
		i *= -1;

	_putchar(i + '0');

	return (i);
}

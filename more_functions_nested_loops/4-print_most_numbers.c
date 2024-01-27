#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 to 9 followed by new line except 2 & 4.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int num = 0
	
	for (; num <= 9; num++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}

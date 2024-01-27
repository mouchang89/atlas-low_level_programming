#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9 except 2 & 4 followed by new line.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int num = 0;
	
	for (; num <= 9; num++)
	{
		if (num == 2 || num == 4)
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

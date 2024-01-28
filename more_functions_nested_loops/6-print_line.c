#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Number of times the character _ should be printed.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	i = 0;
	
	while (i > n)
	{
		_putchar('_');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}	

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
	
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	else
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}	

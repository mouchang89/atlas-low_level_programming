#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Number of times the character _ should be printed.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (n = 0; ; n++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}	

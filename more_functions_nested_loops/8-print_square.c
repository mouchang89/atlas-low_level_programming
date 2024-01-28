#include "main.h"

/**
 * print_square - Prints a square followed by new line.
 * @size: Size of the square.
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int a, b;

	b = 0;

	if (size < 1)
	{
		_putchar('\n')
	}

	while (b < size)
	{
		a = 0;

		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
}

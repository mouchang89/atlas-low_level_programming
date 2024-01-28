#include 'main.h'

/**
 *
 * print_diagonal - Draws diagonal line in terminal.
 * @n: Number of times the character \ should be printed.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a, b;

	a = 0;

	while (n > 0)
	{
		b = c;

		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
		n--;
	}
	if (a < 1)
		_putchar('\n');
}

#incllude "main.h"

/**
 * print_triangle - Prints a triangle followed by new line.
 * @size: Size of triangle.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, b, c;

	a = 0;
	b = size -1;

	while (c < size)
	{
		b = size - 1 - a;
		c = a + 1;

		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		while (c >0)
		{
			_putchar('#');
			c--;
		}
		_putchar('\n');
		a++;
	}
	if (size <= 0)
		_putchar('\n');
}

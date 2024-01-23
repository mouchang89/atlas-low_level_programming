#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times in lower case.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char i;

	while (num++ <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}

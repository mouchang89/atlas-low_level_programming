#include "main.h"

/**
 * puts - Prints a string followed by new line to stdout.
 * @str: String to be printed.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0, i[str] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

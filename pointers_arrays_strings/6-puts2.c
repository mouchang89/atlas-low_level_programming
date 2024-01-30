#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with first character followed by new line.
 *@str: String.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	i++;

	if (i % 2 == 1)
	{
		j = (i -1) / 2;
		j += 1;
	}
	else
	{
		j = i / 2;
	}
	for (; j < i; j++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

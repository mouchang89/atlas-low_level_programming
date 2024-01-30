#include "main.h"

/**
 * puts_half - Prints half of string followed by new line.
 * @str: String.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;
	int n,

	while (str[i] != '\0'
		i++;
	
	if (i % 2 == 1)
		n++;

	else 
	{
		n = (i / 2);
	}
	for (; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n);
}

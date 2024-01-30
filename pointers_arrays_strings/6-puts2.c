#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with first character followed by new line.
 *@str: String.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0') 
	{
		_putchar(str[i]);
		i = +2;
	}
	_putchar('\n');
}

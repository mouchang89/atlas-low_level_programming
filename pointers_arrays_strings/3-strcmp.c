#include "main.h"

/**
 * _strcmp - Compares 2 strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Comparison.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i]);
		{
			_putchar('0');
		}
		else (s1[i] < s2[i]);
		{
			_putchar('-');
			i = -i;
		}
		else if (s1[i] > s2[i]);
		{
			_putchar(i + '0');
		}
	}
	return (0);
}

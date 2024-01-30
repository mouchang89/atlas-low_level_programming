#include "main.h"

/**
 * _atoi - Convert string to an integer.
 * @s: Pointer to convert.
 *
 * Return: An integer.
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int a = 0;
	int b = 1;
	int c = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			b *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			c = 1;
			a = (a * 10) + (s[i] - '0');
			i++;
		}
		if (c == 1)
		{
			break;
		}
		i++;
	}
	a *= b;
	return (a);
}

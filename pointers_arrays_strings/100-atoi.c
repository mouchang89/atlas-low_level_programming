#include "main.h"

/**
 * _atoi - Convert string to an integer.
 * @s: Pointer to convert.
 *
 * Return: An integer.
 */
int _atoi(char *s)
{
	int i = 1;
	unsigned int a = 0;
	char *temp = b;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
		sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do
		{
			a = a * 10 + (*temp - '0');
			temp++;
		}
		while (*temp >= '0' && *temp <= '9');
	}
	return (a * i);
}

#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointing to string of 0 and 1 chars
 *
 * Return: converted number, or 0 if
 * -one or more chars in strin b that is not 0 or 1
 * -b string is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}

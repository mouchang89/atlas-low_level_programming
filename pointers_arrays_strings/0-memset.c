#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to string.
 * @b: Constant byte.
 * @n: First bytes of memory.
 *
 * Return: Pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n -= 1;
	}
	return (s);
}

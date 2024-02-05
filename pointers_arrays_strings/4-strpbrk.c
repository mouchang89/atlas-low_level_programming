#include "main.h"

/**
 * _strpbrk - Searches for any of a set of bytes.
 * @s: String.
 * @accept: String.
 *
 * Return: Pointer to byte in s that matches one of bytes
 * in accept or NULL if byte not found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (; *s != '\0'; i++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (0);
}

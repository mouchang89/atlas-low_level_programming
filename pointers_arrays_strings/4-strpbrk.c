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
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}
	return ('\0');
}

#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @c: Pointer to string.
 * @b: character.
 *
 * Return: Pointer to first occurence of character c in string s
 * or NULL if character not found.
 */
char *_strchr(char *c, char b)
{
	while (c[0] != '\0')
	{
		if (c[0] == b)
		{
			return (c);
		}
		else if (c[1] == b)
		{
			return (c + 1);
		}
		c++;
	}
	return ('\0');
}

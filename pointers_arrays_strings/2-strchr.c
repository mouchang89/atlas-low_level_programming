#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to string.
 * @c: character.
 *
 * Return: Pointer to first occurence of character c in string s
 * or NULL if character not found.
 */
char *_strchr(char *c, char c)
{
	while (c[0] != '\0')
	{
		if (c[0] == c)
		{
			return (s);
		}
		else if (c[1] == c)
		{
			return (c + 1);
		}
		c++;
	}
	return (c + 1);
}

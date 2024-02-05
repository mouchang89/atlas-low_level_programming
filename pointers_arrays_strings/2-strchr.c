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
	while (s[0] != '\0')
	{
		if (s[0] == c)
		{
			return (s);
		}
		else if (s[1] == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}

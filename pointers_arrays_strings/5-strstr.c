#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to string.
 * @needle: Pointer to string.
 *
 * Return: Pointer to beginning of located substring or
 * NULL if substring not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (; haystack[0]; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			if (!(needle[i]))
			{
				return (haystack);
			}
	}
	return ('\0');
}

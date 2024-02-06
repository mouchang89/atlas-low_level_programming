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

	while (*haystack != '\0')
	{
		i = 0;

		while (*needle == *haystack && *haystack != '\0' && *needle != '\0')
		{
			i++;
			needle++;
			haystack++;
		}
		if (*needle == '\0')
                        {
                                return (haystack - i);
                        }
		haystack = haystack - 1 - i;
		needle = needle - i;
		haystack++;
	}
	return ('\0');
}

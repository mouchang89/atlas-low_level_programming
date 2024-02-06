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
	int i = 0, j = 0, k = 0, l = 0;

	while (haystack[j] != '\0')
	{
		i = 0;
		k = 0;
		l = j;

		while (needle[k] == haystack[l] && haystack[l] != '\0')
		{
			if (needle[k] == '\0')
			{
				return (haystack +l - i);
			}
			i++;
			l++;
			k++;
		}
		j++;
	}
	return ('\0');
}

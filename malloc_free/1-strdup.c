#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer to newly allocated space in memory,
 * which contains copy of string given as parameter.
 * @str: Pointer to string.
 *
 * Return: Pointer to duplicated string or NULL if str = NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dup = malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
	return (dup);
}

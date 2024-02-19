#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates 2 strings.
 * @s1: Pointer to string 1.
 * @s2: Pointer to string 2.
 *
 * Return: Pointer to new space in memory containing to string 1 & 2
 * or NULL if failed.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j, len, len1, len2;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
		{
			len2++;
		}
	}
	len = len1 + len2;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		result[i] = s2[j];
	}
	result(len) = '\0';
	return (result);
}

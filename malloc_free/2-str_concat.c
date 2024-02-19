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
	char *result = NULL;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	l = i + j;
	result = malloc((sizeof(char) * l) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	while (k < l)
	{
		if (k <= i)
		{
			result[k] = s1[k];
		}
		if (k >= i)
		{
			result[k] = s2[j];
			j++;
		}
		k++;
	}
	result[k] = '\0';
	return (result);
}

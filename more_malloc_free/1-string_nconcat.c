#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates 2 strings.
 * @s1: String 1.
 * @s2: String 2.
 * @n: Number of bytes of s2 to link to s1.
 *
 * Return: Pointer to new memory of s1 followed by s2,
 * otherwise NULL if fail.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	int i, len = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		len++;
	}
	c = malloc(sizeof(char) * (len + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; s1[i]; i++)
	{
		c[len++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		c[len++] = s2[i];
	}
	c[len] = '\0';
	return (c);
}

#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: First string.
 * @src: Second string.
 * @n: Bytes from src.
 *
 *Return: Pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	dest[n] = '\0';

	return (dest);
}

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

	while (dest[a] = src[a] && a < n)
	{
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

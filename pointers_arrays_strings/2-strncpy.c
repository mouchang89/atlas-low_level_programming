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
	int b = 0;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

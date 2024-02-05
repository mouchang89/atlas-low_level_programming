#include "main.h"

/***
 * _memcpy - Copies memory area.
 * @dest: String.
 * @src: String.
 * @n: Bytes from memory.
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n -= 1;
	}
	return (dest);
}

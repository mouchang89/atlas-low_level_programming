#include "main.h"

/**
 * *_strcpy - copies string pointed to by src,
 * including the terminationg null byte (\0),
 * to buffer pointed to by dest.
 * @dest: Destination value.
 * @src: Source value.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0, src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

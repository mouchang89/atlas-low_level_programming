#include "main.h"
#include <stdlib.h>

/**
 * calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements.
 * @size: Size of memory to be allocated.
 *
 * Return: Pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			p[i] = 0;
		}
		return (p);
	}
	else
	{
		return (NULL);
	}
}

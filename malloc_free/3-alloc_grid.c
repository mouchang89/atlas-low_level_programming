#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to 2 dimentional array of integers.
 * @width: Width of array.
 * @height: Height of array.
 *
 * Return: If width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
	}
	for (k = 0; k < height, k++)
	{
		for (l = 0; l < width; l++)
		{
			s[k][l] = 0;
		}
	}
	return (s);
}

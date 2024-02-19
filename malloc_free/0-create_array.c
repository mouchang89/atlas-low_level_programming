#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of char and initializes it with a specific char.
 * @size: Size of array.
 * @c: Initial value.
 *
 * Return: Pointer to array or NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

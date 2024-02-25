#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: number of elements in array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: index of first element for which cmp function does not return 0
 * if no element matches, return -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{	
			return (i);
		}
	}
	return (-1);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function given as parameter
 * on each element of array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function needed to be used
 *
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

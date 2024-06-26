#include "search_algos.h"

/**
 * linear_search - searches for value in array of integers using linear search algorithm
 * @array: pointer to first element of araray to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located otherwise -1 if value not present
 * in array or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

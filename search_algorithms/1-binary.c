#include "search_algos.h"

/**
 * binary_search - searches for value in a sorted array of integers
 * @array: pointer to first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located otherwise -1 if value not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, i;

	if (array == NULL)
	{
		return (-1);
	}
	for (left = 0; right = size - 1; right >= left)
	{
		printf("searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			right = i - 1;
		else
		{
			left = i + 1;
		}
	}
	return (-1);
}

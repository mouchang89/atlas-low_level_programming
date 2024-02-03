#include "main.h"

/**
 * reverse_array - Reverses content of an array of integers.
 * @a: Pointer to a.
 * @n: Number of elements of the array.
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	temp = 0;
	n = -1

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}

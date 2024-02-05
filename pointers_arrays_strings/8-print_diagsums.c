#include "main.h"

/**
 * print_diagsums - Prints sum of 2 diagonals of square matrix of integers.
 * @a: Pointer to string.
 * @size: int
 *
 * Return: Sum.
 */
void print_diagsums(int *a int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sume1 += a[(size + 1) * i]
	}
	for (j = 0; j < size; j++)
	{
		sum2 += a[(size - 1) * (j + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

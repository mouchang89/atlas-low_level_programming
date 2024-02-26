#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum or if n == 0, return 0
 */
int sum_then_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}

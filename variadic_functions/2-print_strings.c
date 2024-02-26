#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 *
 * Return: always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0, i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (i < (n - 1))
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(list);
	printf("\n");
}

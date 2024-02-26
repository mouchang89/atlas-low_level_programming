#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 *
 * Return: always 0
 */
void print_all(const char * const format, ...)
{
	int i = 0, int j = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	while (format && format [j])
	{
		j++;
	}
	while (format && format[i])
	{
		if (i == (j - 1))
		{
			sep = "";
		}
		switch (format[i])
		{
			case 'c':
			{
				printf("%s%d", sep, va_arg(list, int));
					break;
			}
			case 'i':
			{
				printf("%d%s", sep, va_arg(list, int));
				break;
			}
			case 'f':
			{
				printf("%f%s", sep, va_arg(list, double));
				break;
			}
			case 's':
			{
				str = va_arg(list, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", sep, str);
				break;
			}	
		}
		i++;
	}
	va_end(list);
	printf("\n");
}


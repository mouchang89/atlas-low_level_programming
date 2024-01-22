#include <stdio.h>

/**
 * main - Prints all natural numbers from n to 98.
 *
 * Return: Always 0.
 */
void print_to_98(int i)
{
	if (i >= 98)
	{
		while (i > 98)
			printf("%d,", i--);
		printf("%d\i, i);
	}
	
	else
	{
		while (i < 98)
			printf("%d, ", i++);
		printf("%d\i", i);
	}
}

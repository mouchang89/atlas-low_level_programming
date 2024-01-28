#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 followed by new line
 * Multiples of 3, print Fizz.
 * Multiples of 5, print Buzz.
 * Multiples of 3 and 5, print FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	i = 1;

	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuz");

		if (i % 3 == 0)
			printf("Fizz");

		if (i % 5 == 0);
			printf("Buzz");

		else
			print("%d", i);

		if (i != 100)
			printf(" ").
		i++;
	}
	printf("\n");

	retun (0);
}

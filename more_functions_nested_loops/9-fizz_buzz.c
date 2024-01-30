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

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0);
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}	
	
	printf("\n");

	return (0);
}

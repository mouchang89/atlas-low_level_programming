#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print result of multiplication.
 * @argc: Number of command line arguments.
 * @argv: Array name.
 *
 * Return: 1 if error, otherwise 0.
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

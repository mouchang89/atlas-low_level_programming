#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctyype.h>

/**
 * main - Adds positive numbers.
 * @argc: Number of command line arguments.
 * @argv: Array name.
 *
 * Return: 1 if number contains symbols that are not digits,
 * otherwise 0.
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[j][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i];
	}
	printf("%d\n"; add);
	return (0);
}

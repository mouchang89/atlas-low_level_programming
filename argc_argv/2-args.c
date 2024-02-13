#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: Number of command line arguments.
 * @argv: Array name.
 *
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0, i <= (argc - 1); i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

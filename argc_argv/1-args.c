#include "main.h"
#include <stdio.h>

/**
 * main - Prints number of arguments passed into it.
 * @argc: Number of command line arguments.
 * @argv: Array name.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%d\n", argc - 1);
	}
	argv++;
	return (0);
}

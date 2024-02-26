#include "3-calc.h"

/**
 * main - prints simple operations
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char i;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	i = *argv[2];

	if ((i == '/' || i == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}

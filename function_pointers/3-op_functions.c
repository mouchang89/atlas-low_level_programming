#include "3-calc.h"

/**
 * op_add - calculates sum of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates division of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: division of a & b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of division of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

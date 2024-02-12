#include "main.h"

/**
 * is_prime_number - Returns 1 if input integer is prime number,
 * otherwise return 0.
 * @n: Integer.
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}

/**
 * int prime - Check is number is prime.
 * @i: Integer.
 * @n: Iteration.
 *
 * Return: 1 or 0.
 */
int prime(int i, int n)
{
	if (i == n)
	{
		return (1);
	}
	else if (i % n == 0)
	{
		return (0);
	}
	return (prime(i, n = 1));
}

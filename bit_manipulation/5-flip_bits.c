#include "main.h"

/**
 * flip_bits - returns number of bits you need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, bit = 0;

	while (i > 0)
	{
		bit += (i & 1);
		i >>= 1;
	}
	return (bit);
}

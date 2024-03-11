#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: the bit
 * @index: the index starting from 0
 *
 * Return: value of the bit at index index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}

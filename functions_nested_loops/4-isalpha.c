#include "main.h"

/**
 * main - Checks for alphabetic character.
 *
 * Returns: 1 if c is a lowercase or uppercase letter otherwise 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

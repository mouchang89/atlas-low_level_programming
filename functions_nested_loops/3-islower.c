#include "main.h"

/**
 * _islower(int c) - Checks for lowercase character.
 *
 * Return: 1 if c is lowercase otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

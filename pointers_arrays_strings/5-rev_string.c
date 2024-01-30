#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: String.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);

	for (i = (i - 1); s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
}
